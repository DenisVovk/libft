/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dobrooks <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 11:05:15 by dobrooks          #+#    #+#             */
/*   Updated: 2020/11/19 23:14:15 by dobrooks         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_word_cnt(char const *s, char c)
{
	int		i;
	int		word_cnt;

	i = 0;
	word_cnt = 0;
	while (s[i])
	{
		if (s[i] == c)
			if (s[i - 1] && (s[i - 1] != c))
				word_cnt++;
		i++;
	}
	if (i > 0)
		if (s[i - 1] != c)
			word_cnt++;
	return (word_cnt);
}

static int	ft_first_symb(char const *s, char c, int i)
{
	while (s[i])
	{
		if (s[i] != c)
			return (i);
		i++;
	}
	return (i);
}

static int	ft_len(char const *s, char c, int i)
{
	int		len;

	len = 0;
	while (s[i] && (s[i] != c))
	{
		len++;
		i++;
	}
	return (len);
}

static char	**ft_free_res(char **res)
{
	while (*res)
		free(*res++);
	free(res);
	return (NULL);
}

char		**ft_split(char const *s, char c)
{
	int		n_words;
	int		word;
	char	**res;
	int		j;
	int		i;

	if (!s)
		return (NULL);
	n_words = ft_word_cnt(s, c);
	if (!(res = (char **)malloc((n_words + 1) * sizeof(char *))))
		return (NULL);
	word = 0;
	i = 0;
	while (word < n_words)
	{
		i = ft_first_symb(s, c, i);
		if (!(res[word] = (char*)malloc(sizeof(char) * (ft_len(s, c, i) + 1))))
			return (ft_free_res(res));
		j = 0;
		while (s[i] && (s[i] != c))
			res[word][j++] = s[i++];
		res[word++][j] = '\0';
	}
	res[word] = 0;
	return (res);
}

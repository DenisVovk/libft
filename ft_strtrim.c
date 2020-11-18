/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dobrooks <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 20:52:55 by dobrooks          #+#    #+#             */
/*   Updated: 2020/11/16 20:46:01 by dobrooks         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_set(char c, char const *set)
{
	while (*set)
		if (*set++ == c)
			return (1);
	return (0);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		len;
	int		i;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	len = 0;
	start = -1;
	while (s1[i] && check_set(s1[i], set))
		i++;
	start = i;
	while (s1[i])
		i++;
	i--;
	while (check_set(s1[i], set))
		i--;
	len = i - start + 1;
	return (ft_substr(s1, start, len));
}

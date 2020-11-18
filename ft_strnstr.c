/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dobrooks <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 14:53:48 by dobrooks          #+#    #+#             */
/*   Updated: 2020/11/18 01:10:23 by dobrooks         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int i;
	int j;

	i = 0;
	if (ft_strlen(big) < ft_strlen(little) || len < ft_strlen(little))
		return (NULL);
	if (!(ft_strlen(little)))
		return ((char *)big);
	while (big[i] && (i <= (int)len - (int)ft_strlen(little)))
	{
		j = 0;
		while ((big[i + j] == little[j]) && little[j])
			j++;
		if (j == (int)ft_strlen(little))
			return (char*)(big + i);
		i++;
	}
	return (NULL);
}

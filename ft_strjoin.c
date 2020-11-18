/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dobrooks <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 00:02:54 by dobrooks          #+#    #+#             */
/*   Updated: 2020/11/16 20:45:08 by dobrooks         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	char	*temp;

	if (!s1 || !s2)
		return (NULL);
	if (!(res = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) *\
		sizeof(char))))
		return (NULL);
	temp = res;
	while (*s1)
		*res++ = *s1++;
	while (*s2)
		*res++ = *s2++;
	*res = '\0';
	return (temp);
}

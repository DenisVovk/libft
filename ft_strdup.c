/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dobrooks <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 23:28:11 by dobrooks          #+#    #+#             */
/*   Updated: 2020/11/16 20:45:02 by dobrooks         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	char	*tmp;

	if (!(str = malloc((ft_strlen(s) + 1) * sizeof(char))))
		return (NULL);
	tmp = str;
	while (*s)
		*str++ = *s++;
	*str = '\0';
	return (tmp);
}

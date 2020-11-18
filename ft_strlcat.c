/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dobrooks <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 20:27:46 by dobrooks          #+#    #+#             */
/*   Updated: 2020/11/16 19:42:34 by dobrooks         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int	src_len;
	int dst_len;
	int i;
	int res;

	i = 0;
	res = 0;
	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	if ((int)size < dst_len)
		res = src_len + size;
	else
		res = src_len + dst_len;
	if ((int)size > dst_len)
	{
		while (src[i] && (dst_len + i + 1 < (int)size))
		{
			dst[dst_len + i] = src[i];
			i++;
		}
		dst[dst_len + i] = '\0';
	}
	return (res);
}

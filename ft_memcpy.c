/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dobrooks <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 13:37:14 by dobrooks          #+#    #+#             */
/*   Updated: 2020/11/17 20:11:08 by dobrooks         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	void *dest_temp;

	if (!n || (!dest && !src))
		return (dest);
	dest_temp = dest;
	while (n--)
		*(unsigned char *)dest++ = *(unsigned char *)src++;
	return (dest_temp);
}

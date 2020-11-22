/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dobrooks <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 17:08:15 by dobrooks          #+#    #+#             */
/*   Updated: 2020/11/19 23:11:38 by dobrooks         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_number_len(int n, char *str)
{
	int			len;
	long int	nb;
	int			i;

	nb = (long int)n;
	len = 0;
	i = 0;
	if (n == 0)
	{
		str[0] = '0';
		i++;
		len = 1;
	}
	if (nb < 0)
		len = 1;
	if (nb < 0)
		nb = nb * -1;
	while (nb > 0)
	{
		str[i++] = (nb % 10) + '0';
		nb /= 10;
		len++;
	}
	str[i] = '\0';
	return (len);
}

char			*ft_itoa(int n)
{
	int			len;
	char		*res;
	char		str[15];
	int			i;

	len = ft_number_len(n, str);
	if (!(res = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	i = 0;
	if (n < 0)
	{
		res[0] = '-';
		i++;
		len--;
	}
	while (len--)
		res[i++] = str[len];
	res[i] = '\0';
	return (res);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dobrooks <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 11:00:32 by dobrooks          #+#    #+#             */
/*   Updated: 2020/11/17 19:30:40 by dobrooks         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *lst_new;
	t_list *elem_new;

	lst_new = NULL;
	if (!lst || !f)
		return (NULL);
	while (lst)
	{
		if ((elem_new = ft_lstnew(f(lst->content))))
		{
			ft_lstadd_back(&lst_new, elem_new);
			lst = lst->next;
		}
		else
		{
			ft_lstclear(&lst_new, del);
			return (NULL);
		}
	}
	return (lst_new);
}

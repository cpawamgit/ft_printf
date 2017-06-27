/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyrmorin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 23:37:07 by cyrmorin          #+#    #+#             */
/*   Updated: 2016/11/22 23:37:10 by cyrmorin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *new;

	new = NULL;
	if (lst)
	{
		new = (t_list*)malloc(sizeof(t_list));
		new = (*f)(lst);
		lst = lst->next;
		new->next = ft_lstmap(lst, (*f));
	}
	return (new);
}

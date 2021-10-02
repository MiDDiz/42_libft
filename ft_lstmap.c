/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnaftana <jnaftana@student.42madrid.es>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 11:23:11 by jnaftana          #+#    #+#             */
/*   Updated: 2021/10/02 10:56:33 by jnaftana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*h_ptr;

	head = ft_lstnew((*f)(lst->content));
	h_ptr = head;
	lst = lst->next;
	while (lst)
	{
		h_ptr->next = ft_lstnew((*f)(lst->content));
		if (!h_ptr->next)
		{
			ft_lstclear(&head, (*del));
			return (head);
		}
		lst = lst->next;
	}
	return (head);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnaftana <jnaftana@student.42madrid.es>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 11:23:11 by jnaftana          #+#    #+#             */
/*   Updated: 2021/10/04 12:30:59 by jnaftana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*ptr_helper;

	head = ft_lstnew((*f)(lst->content));
	lst = lst->next;
	while (lst)
	{
		ptr_helper = ft_lstnew((*f)(lst->content));
		if (!ptr_helper)
		{
			ft_lstclear(&head, (*del));
			return (head);
		}
	lst = lst->next;
	ft_lstadd_back(&head, ptr_helper);
	}
	return (head);
}

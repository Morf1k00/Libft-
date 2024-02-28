/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkrechun <rkrechun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 12:25:41 by rkrechun          #+#    #+#             */
/*   Updated: 2023/11/20 12:01:35 by rkrechun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new;
	t_list	*temp;

	if (lst == NULL || f == NULL)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		temp = f(lst -> content);
		new = ft_lstnew(temp);
		if (!new)
		{
			ft_lstclear(&new_list, del);
			del (temp);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new);
		lst = lst -> next;
	}
	return (new_list);
}

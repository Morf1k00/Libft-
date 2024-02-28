/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkrechun <rkrechun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 12:25:50 by rkrechun          #+#    #+#             */
/*   Updated: 2023/11/20 12:01:19 by rkrechun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;
	t_list	*cont;

	if (lst == NULL && del == NULL)
		return ;
	temp = *lst;
	while (temp != NULL)
	{
		cont = temp;
		temp = temp -> next;
		del(cont -> content);
		free(cont);
	}
	*lst = NULL;
}

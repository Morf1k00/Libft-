/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkrechun <rkrechun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 17:57:58 by rkrechun          #+#    #+#             */
/*   Updated: 2023/11/13 18:36:39 by rkrechun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*symb;

	symb = s;
	while (n--)
	{
		if (*symb == (char)c)
			return ((char *)symb);
		symb++;
	}
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkrechun <rkrechun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 14:58:45 by rkrechun          #+#    #+#             */
/*   Updated: 2023/11/17 15:21:12 by rkrechun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	s;
	size_t	d;

	s = ft_strlen(src);
	if (!dst && !dstsize)
		return (s);
	d = ft_strlen(dst);
	if (d >= dstsize)
		return (s + dstsize);
	else
		dstsize = dstsize - d;
	ft_strlcpy(dst + d, src, dstsize);
	return (d + s);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkrechun <rkrechun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 16:10:05 by rkrechun          #+#    #+#             */
/*   Updated: 2023/11/17 14:57:21 by rkrechun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_len(int n)
{
	size_t	size;

	size = 0;
	if (n <= 0)
		size++;
	while (n)
	{
		size++;
		n = n / 10;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*num;

	len = ft_len(n);
	num = malloc(len + 1);
	if (!num)
		return (NULL);
	num[len] = '\0';
	if (n == 0)
		num[0] = '0';
	if (n < 0)
		num[0] = '-';
	if (n == -2147483648)
	{
		num[1] = '2';
		n += 2000000000;
	}
	if (n < 0)
		n *= -1;
	while (n)
	{
		num[--len] = n % 10 + '0';
		n /= 10;
	}
	return (num);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkrechun <rkrechun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 10:54:17 by rkrechun          #+#    #+#             */
/*   Updated: 2023/11/18 15:17:12 by rkrechun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*m;

	i = start;
	j = 0;
	if (i >= ft_strlen((char *)s))
		return (ft_strdup(""));
	else if (len > ft_strlen((char *)s))
		len = ft_strlen((char *)s) - start;
	m = malloc(sizeof(char) * (len + 1));
	if (m == NULL)
		return (NULL);
	while (s[i] != '\0' && j < len)
	{
		m[j] = s[i];
		i++;
		j++;
	}
	m[j] = '\0';
	return (m);
}

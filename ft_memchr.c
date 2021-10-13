/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyelena <cyelena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 17:17:05 by cyelena           #+#    #+#             */
/*   Updated: 2021/10/13 18:19:58 by cyelena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (((char *)s)[i] == c)
			return (&((unsigned char *)s)[i]);
		i++;
	}
	if (c == '\0')
		return (&((unsigned char *)s)[i]);
	return (0);
}

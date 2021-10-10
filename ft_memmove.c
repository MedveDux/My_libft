/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyelena <cyelena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 16:52:38 by cyelena           #+#    #+#             */
/*   Updated: 2021/10/10 19:28:21 by cyelena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	char			*bufdest;

	if (dest > src)
		ft_memcpy(dest, src, n);
	else
	{
		bufdest = dest + n;
		i = (int)n;
		while (n-- > 0)
		{
			*(char *)(--bufdest) = *(char *)(src + --i);
		}
	}
	return (dest);
}

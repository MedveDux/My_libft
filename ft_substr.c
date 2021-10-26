/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyelena <cyelena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 15:32:13 by cyelena           #+#    #+#             */
/*   Updated: 2021/10/25 19:34:30 by cyelena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*my_s;

	if (!s)
		return (0);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	i = 0;
	my_s = malloc(len + 1);
	if (!my_s)
		return (0);
	while (i < len)
	{
		my_s[i++] = s[start++];
	}
	my_s[i] = '\0';
	return (my_s);
}

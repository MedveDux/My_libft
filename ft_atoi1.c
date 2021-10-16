/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyelena <cyelena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 19:19:26 by cyelena           #+#    #+#             */
/*   Updated: 2021/10/16 19:29:07 by cyelena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int	ft_atoi(const char *nptr)
{
	int	minus;
	int	i;
	int	sum;
	int	plus;	

	minus = 0;
	i = 0;
	sum = 0;
	plus = 0;
	while (nptr[i] < 48 || nptr[i] > 57)
	{
		if (nptr[i] == 43)
			plus++;
		if (nptr[i] == 45)
			minus++;
		if (nptr[i] != ' ' && nptr[i] != '\t' && nptr[i] != '-' \
			&& nptr[i] != '+' && nptr[i] != '\n' && nptr[i] != '\r'\
			&& nptr[i] != '\v' && nptr[i] != '\f')
			return (0);
		i++;
	}
	if (minus > 1 || plus > 1 || (minus == 1 && plus == 1))
		return (0);
	while (nptr[i] >= 48 && nptr[i] <= 57)
	{
		sum = sum * 10 + (nptr[i] - '0');
		i++;
	}
	if (minus == 1)
		return (-sum);
	return (sum);
}

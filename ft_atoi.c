/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyelena <cyelena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 18:15:02 by cyelena           #+#    #+#             */
/*   Updated: 2021/10/25 21:56:34 by cyelena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


static void	ft_index(int *i, int *sign, int *s);
static int	ft_body(const char *nptr, int i, int s, int sign);

int	ft_atoi(const char *nptr)
{
	int			i;
	int			sign;
	int			s;

	ft_index(&i, &sign, &s);
	while (nptr[i] == ' ' || nptr[i] == '\t' || nptr[i] == '-' \
			|| nptr[i] == '+' || nptr[i] == '\n' || nptr[i] == '\r'\
			|| nptr[i] == '\v' || nptr[i] == '\f')
	{
		if (nptr[i] == '-')
		{
			sign *= -1;
			if (nptr[i + 1] < 48 || nptr[i + 1] > 57)
				return (0);
		}	
		if (nptr[i] == '+')
		{
			if (nptr[i + 1] < 48 || nptr[i + 1] > 57)
				return (0);
		}
		i++;
	}
	return (ft_body(nptr, i, s, sign));
}

static int	ft_body(const char *nptr, int i, int s, int sign)
{
	long int	sum;

	sum = 0;
	while (nptr[i] >= 48 && nptr[i] <= 57)
	{
		sum = sum * 10 + (nptr[i] - '0');
		i++;
		s++;
	}
	if (s * sign >= 19)
		return (-1);
	if (s * sign <= -19)
		return (0);
	return (sum * sign);
}

static void	ft_index(int *i, int *sign, int *s)
{
	*i = 0;
	*sign = 1;
	*s = 0;
}

int main(void)
{
	printf("%d %d", atoi("-67867867567576"), atoi("00000000000000000000000000000000123"));
	return (0);
}
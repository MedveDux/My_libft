/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyelena <cyelena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 10:46:28 by cyelena           #+#    #+#             */
/*   Updated: 2021/10/10 18:15:59 by cyelena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <string.h>
#include "libft.h"
int	main()
{
	char n[] = "asdadf";
	int i = 0;
	while (n[i])
	{
	write(1, "48", 1);
	i++;
	}
	printf("%d\n", atoi("-42"));
	printf("%d\n", ft_atoi(" -425       "));
	return (0);
}
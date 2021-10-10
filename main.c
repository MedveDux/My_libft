/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyelena <cyelena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 10:46:28 by cyelena           #+#    #+#             */
/*   Updated: 2021/10/10 19:13:06 by cyelena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <string.h>
#include "libft.h"
int	main()
{

	char a[20] = "123456789";
	char b[20] = "123456789";
	
	// char n[] = "asdadf";
	// int i = 0;
	// while (n[i])
	// {
	// write(1, "48", 1);
	// i++;
	// }
	// printf("%d\n", atoi("-42"));
	// printf("%d\n", ft_atoi(" -425       "));
	// if (&a[4] > &a[1])
	// 	printf("true");
	printf("%s\n", ft_memmove(a, &a[4], 4));
	printf("%s\n", memmove(b, &b[4], 4));
	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyelena <cyelena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 10:46:28 by cyelena           #+#    #+#             */
/*   Updated: 2021/10/13 19:27:56 by cyelena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <string.h>
#include "libft.h"

int	main()
{
	char a[20] = "";
	char b[20] = "4";

	printf("%d\n", memchr( a, '4', 5));
	// printf("%d\n", ft_strncmp( a, b, 1));
//	printf("%s\n", memmove(&b[0], &b[4], 9));
	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyelena <cyelena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 10:46:28 by cyelena           #+#    #+#             */
/*   Updated: 2021/10/12 20:23:45 by cyelena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <string.h>
#include "libft.h"
int	main()
{
	char a[20] = "89abcd11111e";
	char b[20] = "12345abcde";

	printf("%lu\n", strlcat( a, b, 0));
//	printf("%s\n", memmove(&b[0], &b[4], 9));
	return (0);
}
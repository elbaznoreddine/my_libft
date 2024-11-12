/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noel-baz <noel-baz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 14:12:55 by noel-baz          #+#    #+#             */
/*   Updated: 2024/11/12 15:36:38 by noel-baz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t len)
{
	unsigned char	*b;

	b = (unsigned char *)str;
	while (len--)
	{
		*b = (unsigned char)c;
		b++;
	}
	return (str);
}
#include <libc.h>
int main()
{
	int u[2] = {INT_MAX, INT_MIN};
	printf("%d   %d\n", u[0], u[1]);
	//00000111 11010100
	ft_memset(&u[0], 0, 4);
	ft_memset(&u[0], 0b00000111, 2);
	ft_memset(&u[0], 0b11010100, 1);
	//11111000 00101110
	ft_memset(&u[1], 255, 4);
	ft_memset(&u[1], 0b11111000, 2);
	ft_memset(&u[1], 0b00101110, 1);
	printf("%d   %d\n", u[0], u[1]);
	
}

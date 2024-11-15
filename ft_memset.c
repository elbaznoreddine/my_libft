/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noel-baz <noel-baz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 14:12:55 by noel-baz          #+#    #+#             */
/*   Updated: 2024/11/09 14:44:52 by noel-baz         ###   ########.fr       */
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

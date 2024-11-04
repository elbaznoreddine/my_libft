/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noel-baz <noel-baz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 14:12:46 by noel-baz          #+#    #+#             */
/*   Updated: 2024/11/04 10:50:41 by noel-baz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*dest_char;
	const unsigned char	*src_char;
	size_t				i;

	dest_char = (unsigned char *)dst;
	src_char = (const unsigned char *)src;
	i = 0;
	if (dest_char < src_char)
	{
		while (i < len)
		{
			dest_char[i] = src_char[i];
			i++;
		}
	}
	else
	{
		while (len--)
		{
			dest_char[len] = src_char[len];
		}
	}
	return (dst);
}

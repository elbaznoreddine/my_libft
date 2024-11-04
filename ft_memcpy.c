/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noel-baz <noel-baz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 14:12:36 by noel-baz          #+#    #+#             */
/*   Updated: 2024/11/04 10:50:58 by noel-baz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*dest_char;
	unsigned const char	*src_char;
	size_t				i;

	dest_char = dst;
	src_char = src;
	i = 0;
	if (dst == NULL)
		return (NULL);
	while (i < n)
	{
		dest_char[i] = src_char[i];
		i++;
	}
	return (dst);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noel-baz <noel-baz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 14:10:51 by noel-baz          #+#    #+#             */
/*   Updated: 2024/11/15 14:22:59 by noel-baz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	bytes;

	if (!count || !size)
		return (malloc(0));
	bytes = size * count;
	if (bytes / count != size)
		return (NULL);
	ptr = malloc((bytes));
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, bytes);
	return (ptr);
}

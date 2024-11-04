/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noel-baz <noel-baz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 14:13:52 by noel-baz          #+#    #+#             */
/*   Updated: 2024/11/04 09:24:55 by noel-baz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	len;

	i = 0;
	len = ft_strlen(needle);
	if (len == 0 || n == 0)
		return ((char *) haystack);
	while (haystack[i] && n > i)
	{
		j = 0;
		while (needle[j] && haystack[i + j] == needle[j])
			j++;
		if (len == j)
			return ((char *) haystack + i);
		i++;
	}
	return (NULL);
}

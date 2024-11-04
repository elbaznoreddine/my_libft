/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noel-baz <noel-baz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 14:49:55 by noel-baz          #+#    #+#             */
/*   Updated: 2024/10/31 19:29:43 by noel-baz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	len_src;
	char	*substr;

	len_src = ft_strlen(s);
	if (len_src == 0)
		return (0);
	if (len + start > len_src)
		len = len_src - start;
	substr = malloc(len + 1);
	if (substr == NULL)
		return (0);
	ft_memmove(substr, s + start, len);
	return (substr);
}

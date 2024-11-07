/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noel-baz <noel-baz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 14:14:06 by noel-baz          #+#    #+#             */
/*   Updated: 2024/11/06 10:11:26 by noel-baz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	start;

	i = 0;
	start = -1;
	while (s[i])
	{
		if (s[i] == (char)c)
			start = i;
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)s + i);
	if (start == -1)
		return (NULL);
	return ((char *)s + start);
}

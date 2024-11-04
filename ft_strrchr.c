/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noel-baz <noel-baz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 14:14:06 by noel-baz          #+#    #+#             */
/*   Updated: 2024/10/31 19:26:26 by noel-baz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	start;

	i = 0;
	start = 0;
	while (s[i])
	{
		if (s[i] == c)
			start = i;
		i++;
	}
	return (ft_strchr(s + start, c));
}

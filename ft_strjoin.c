/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noel-baz <noel-baz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 17:15:19 by noel-baz          #+#    #+#             */
/*   Updated: 2024/11/04 10:15:24 by noel-baz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	size_t	lensrc;
	size_t	lendst;
	size_t	i;

	i = 0;
	lensrc = ft_strlen(s2);
	lendst = ft_strlen(s1);
	while (s2[i] && i < lensrc)
	{
		s1[lendst + i] = s2[i];
		i++;
	}
	s1[lendst + i] = '\0';
	return (s1);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len_s1;
	size_t	len_s2;
	char	*dst;
	char	*join;

	dst = (char *) s1;
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	join = malloc(len_s1 + len_s2 + 1);
	if (join == NULL)
		return (NULL);
	ft_memmove(join, dst, len_s1);
	ft_strcat(join, s2);
	return (join);
}

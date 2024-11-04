/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noel-baz <noel-baz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 13:29:42 by noel-baz          #+#    #+#             */
/*   Updated: 2024/11/04 10:13:02 by noel-baz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	len_words(char *str, char c)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	while (str[i])
	{
		if (str[i] != c && (str[i + 1] == c || str[i + 1] == '\0'))
			len++;
		i++;
	}
	return (len);
}

int	check_null(char **arr, int i)
{
	if (arr[i] == NULL)
	{
		while (i--)
			free(arr[i]);
		free(arr);
		return (0);
	}
	else
		return (1);
}

char	*get_word(char *str, char c)
{
	int		len;
	char	*word;

	len = 0;
	while (str[len] && str[len] != c)
		len++;
	word = malloc(len +1);
	word[len] = '\0';
	while (len--)
		word[len] = str[len];
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	char	*str;
	size_t	i;

	str = (char *) s;
	i = 0;
	if (!s)
		return (NULL);
	split = malloc((len_words(str, c) + 1) * sizeof(char *));
	while (*str)
	{
		while (*str && *str == c)
			str++;
		if (*str && *str != c)
		{
			split[i] = get_word(str, c);
			if (!check_null(split, i))
				return (NULL);
			i++;
		}
		while (*str && *str != c)
			str++;
	}
	split[i] = NULL;
	return (split);
}

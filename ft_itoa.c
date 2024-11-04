/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noel-baz <noel-baz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 17:56:59 by noel-baz          #+#    #+#             */
/*   Updated: 2024/10/31 18:42:49 by noel-baz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*res;
	int		int_min;

	int_min = -2147483648;
	res = malloc(2 * sizeof(char));
	if (!res)
		return (0);
	if (n == int_min)
		return ("-2147483648");
	else if (n < 0)
	{
		res[0] = '-';
		res[1] = '\0';
		res = ft_strjoin(res, ft_itoa(-n));
	}
	else if (n > 9)
	{
		res = ft_strjoin(ft_itoa(n / 10), ft_itoa(n % 10));
	}
	else
	{
		res[0] = n + '0';
		res[1] = '\0';
	}
	return (res);
}

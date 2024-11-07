/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noel-baz <noel-baz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 17:22:52 by noel-baz          #+#    #+#             */
/*   Updated: 2024/11/06 16:11:20 by noel-baz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		count;
	t_list	*node;

	count = 0;
	if (!lst)
		return (0);
	node = lst;
	while (node)
	{
		count++;
		node = node->next;
	}
	return (count);
}

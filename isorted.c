/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isorted.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchmouk <rchmouk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 11:29:07 by rchmouk           #+#    #+#             */
/*   Updated: 2023/01/13 12:30:14 by rchmouk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_isorted(t_stack *head)
{
	if (head != NULL)
	{
		if (head->link == NULL)
			return (1);
		if (head->link->link == NULL)
		{
			if (head->data < head->link->data)
				return (1);
			else
				return (0);
		}
		while (head->link)
		{
			if (head->data < head->link->data)
				head = head->link;
			else
				return (0);
		}
	}
	return (1);
}

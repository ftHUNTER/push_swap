/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sortestack2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchmouk <rchmouk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 21:33:18 by rchmouk           #+#    #+#             */
/*   Updated: 2022/12/30 22:08:02 by rchmouk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_a3(t_stack **head)
{
	if ((*head)->data < (*head)->link->data
		&& (*head)->data < (*head)->link->link->data)
	{
		if ((*head)->link->data > (*head)->link->link->data)
		{
			ft_rra(head);
			ft_sa(*head);
		}
	}
	else if ((*head)->data > (*head)->link->data
		&& (*head)->data > (*head)->link->link->data)
	{
		if ((*head)->link->data < (*head)->link->link->data)
			ft_ra(head);
		else if ((*head)->link->data > (*head)->link->link->data)
		{
			ft_sa(*head);
			ft_rra(head);
		}
	}
	else if ((*head)->data > (*head)->link->data)
		ft_sa(*head);
	else if ((*head)->data > (*head)->link->link->data)
		ft_rra(head);
}

void	ft_sort_5(int *T, t_stack **stack_a, t_stack **stack_b, int size)
{
	int	i;

	i = 0;
	while (i < size - 3)
	{
		while ((*stack_a)->data != T[i])
		{
			if (ft_serch(*stack_a, T[i]) == 0)
				ft_ra(stack_a);
			else
				ft_rra(stack_a);
		}
		ft_pb(stack_a, stack_b);
		i++;
	}
	ft_sort_a3(stack_a);
	while (*stack_b != NULL)
		ft_pa(stack_a, stack_b);
}

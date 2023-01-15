/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swapfun3.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchmouk <rchmouk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 12:12:14 by rchmouk           #+#    #+#             */
/*   Updated: 2023/01/13 12:15:03 by rchmouk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rrr(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*temp;
	t_stack	*temp2;

	ft_putstr("here");
	if (*stack_a != NULL && (*stack_a)->link != NULL)
	{
		temp = ft_lstlast(*stack_a);
		temp2 = ft_beforlast(*stack_a);
		temp->link = *stack_a;
		temp2->link = NULL;
		*stack_a = temp;
	}
	if (*stack_b != NULL && (*stack_b)->link != NULL)
	{
		temp = ft_lstlast(*stack_b);
		temp2 = ft_beforlast(*stack_b);
		temp->link = *stack_b;
		temp2->link = NULL;
		*stack_b = temp;
	}
}

void	ft_rr(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*temp;
	t_stack	*temp2;

	if (*stack_a != NULL && (*stack_a)->link != NULL)
	{
		temp2 = (*stack_a)->link;
		temp = ft_lstlast(*stack_a);
		temp->link = *stack_a;
		(*stack_a)->link = NULL;
		*stack_a = temp2;
	}
	if (*stack_b != NULL && (*stack_b)->link != NULL)
	{
		temp2 = (*stack_b)->link;
		temp = ft_lstlast(*stack_b);
		temp->link = *stack_b;
		(*stack_b)->link = NULL;
		*stack_b = temp2;
	}
}

void	ft_ss(t_stack *stack_a, t_stack *stack_b)
{
	int		x;
	t_stack	*temp;

	if (stack_a != NULL && stack_a->link != NULL)
	{
		temp = stack_a->link;
		x = stack_a->data;
		stack_a->data = temp->data;
		temp->data = x;
	}
	if (stack_b != NULL && stack_b->link != NULL)
	{
		temp = stack_b->link;
		x = stack_b->data;
		stack_b->data = temp->data;
		temp->data = x;
	}
}

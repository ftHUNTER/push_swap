/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swapfun.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchmouk <rchmouk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 18:43:24 by rchmouk           #+#    #+#             */
/*   Updated: 2022/12/31 17:48:03 by rchmouk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sa(t_stack *head)
{
	int		x;
	t_stack	*temp;

	if (head != NULL && head->link != NULL)
	{
		temp = head->link;
		x = head->data;
		head->data = temp->data;
		temp->data = x;
		ft_putstr("sa");
	}
}

void	ft_sb(t_stack *head)
{
	int		x;
	t_stack	*temp;

	if (head != NULL && head->link != NULL)
	{
		temp = head->link;
		x = head->data;
		head->data = temp->data;
		temp->data = x;
		ft_putstr("sb");
	}
}

void	ft_pa(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*temp;

	if (*stack_b == NULL)
		return ;
	if (*stack_a == NULL)
	{
		*stack_a = *stack_b;
		*stack_b = (*stack_b)->link;
		(*stack_a)->link = NULL;
		ft_putstr("pa");
	}
	else if (*stack_b != NULL && *stack_a != NULL)
	{
		temp = *stack_a;
		*stack_a = *stack_b;
		*stack_b = (*stack_b)->link;
		(*stack_a)->link = temp;
		ft_putstr("pa");
	}
}

void	ft_pb(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*temp;

	if (*stack_a == NULL)
		return ;
	if (*stack_b == NULL)
	{
		*stack_b = *stack_a;
		*stack_a = (*stack_a)->link;
		(*stack_b)->link = NULL;
		ft_putstr("pb");
	}
	else if (*stack_b != NULL && *stack_a != NULL)
	{
		temp = *stack_b;
		*stack_b = *stack_a;
		*stack_a = (*stack_a)->link;
		(*stack_b)->link = temp;
		ft_putstr("pb");
	}
}

void	ft_ra(t_stack **stack_a)
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
		ft_putstr("ra");
	}
}

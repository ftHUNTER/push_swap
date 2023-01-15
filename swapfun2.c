/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swapfun2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchmouk <rchmouk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 17:46:45 by rchmouk           #+#    #+#             */
/*   Updated: 2023/01/14 23:06:11 by rchmouk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rb(t_stack **stack_b)
{
	t_stack	*temp;
	t_stack	*temp2;

	if (*stack_b != NULL && (*stack_b)->link != NULL)
	{
		temp2 = (*stack_b)->link;
		temp = ft_lstlast(*stack_b);
		temp->link = *stack_b;
		(*stack_b)->link = NULL;
		*stack_b = temp2;
		ft_putstr("rb");
	}
}

void	ft_rra(t_stack **stack_a)
{
	t_stack	*temp;
	t_stack	*temp2;

	if (*stack_a == NULL || (*stack_a)->link == NULL)
		return ;
	if (*stack_a != NULL)
	{
		temp = ft_lstlast(*stack_a);
		temp2 = ft_beforlast(*stack_a);
		temp->link = *stack_a;
		temp2->link = NULL;
		*stack_a = temp;
		ft_putstr("rra");
	}
}

void	ft_rrb(t_stack **stack_b)
{
	t_stack	*temp;
	t_stack	*temp2;

	if (*stack_b == NULL || (*stack_b)->link == NULL)
		return ;
	if (*stack_b != NULL)
	{
		temp = ft_lstlast(*stack_b);
		temp2 = ft_beforlast(*stack_b);
		temp->link = *stack_b;
		temp2->link = NULL;
		*stack_b = temp;
		ft_putstr("rrb");
	}
}

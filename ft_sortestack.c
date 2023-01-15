/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sortestack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchmouk <rchmouk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 21:22:01 by rchmouk           #+#    #+#             */
/*   Updated: 2022/12/30 22:07:45 by rchmouk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_part2(t_stack **stack_a, t_stack **stack_b, int down)
{
	down++;
	ft_pa(stack_a, stack_b);
	ft_ra(stack_a);
	return (down);
}

void	ft_part3(t_stack **stack_b, int *T, int i)
{
	if (ft_serch(*stack_b, T[i]) == 0)
		ft_rb(stack_b);
	else
		ft_rrb(stack_b);
}

int	ft_part(t_stack **stack_a, t_stack **stack_b, int *T, int i)
{
	int	down;

	down = 0;
	while (*stack_b != NULL)
	{
		if (ft_srech_2(*stack_b, T[i]) == 1)
		{
			if ((*stack_b)->data == T[i])
			{
				ft_pa(stack_a, stack_b);
				i--;
			}
			else if (down == 0 || (*stack_b)->data > ft_lstlast(*stack_a)->data)
				down = ft_part2(stack_a, stack_b, down);
			else
				ft_part3(stack_b, T, i);
		}
		else
		{
			ft_rra(stack_a);
			down--;
			i--;
		}
	}
	return (down);
}

void	ft_sort_100(t_stack **stack_a, t_stack **stack_b, int *T, int i)
{
	int	down;

	down = ft_part(stack_a, stack_b, T, i);
	while (down)
	{
		ft_rra(stack_a);
		down--;
	}
}

void	ft_sortstack(t_stack **stack_a, t_stack **stack_b, int *T, int size)
{
	int	i;

	if (size == 2)
	{
		if ((*stack_a)->data > (*stack_a)->link->data)
			ft_sa(*stack_a);
	}
	else if (size == 3)
		ft_sort_a3(stack_a);
	else if (size > 3 && size <= 10)
		ft_sort_5(T, stack_a, stack_b, size);
	else if (size > 10)
	{
		ft_a_to_b(stack_a, stack_b, T, size);
		i = size - 1;
		ft_sort_100(stack_a, stack_b, T, i);
	}
}

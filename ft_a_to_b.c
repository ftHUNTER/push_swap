/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_a_to_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchmouk <rchmouk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 10:23:37 by rchmouk           #+#    #+#             */
/*   Updated: 2022/12/30 22:16:09 by rchmouk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

typedef struct range
{
	int	offset;
	int	start;
	int	mid;
	int	end;
}t_rang;

void	ft_range(t_stack **stack_a, t_stack **stack_b, int *T, t_rang r)
{
	while (ft_check_t(T, *stack_a, r.start, r.end) == 1)
	{
		if ((*stack_a)->data >= T[r.start] && (*stack_a)->data <= T[r.end])
		{
			ft_pb(stack_a, stack_b);
			if ((*stack_b)->data < T[r.mid])
				ft_rb(stack_b);
		}
		else
			ft_ra(stack_a);
	}
}

void	ft_a_to_b(t_stack	**stack_a, t_stack **stack_b, int	*T, int size)
{
	t_rang	r;

	r.mid = size / 2 - 1;
	if (size > 250)
		r.offset = size / 18;
	else
		r.offset = size / 8;
	r.start = r.mid - r.offset;
	r.end = r.mid + r.offset;
	while (size != -1)
	{
		r.start = r.start - r.offset;
		r.end = r.end + r.offset;
		if (r.start < 0)
			r.start = 0;
		if (r.end > size - 1)
			r.end = size - 1;
		if (r.start == 0 && r.end == size - 1)
			size = -1;
		ft_range(stack_a, stack_b, T, r);
	}
}

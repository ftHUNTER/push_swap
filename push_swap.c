/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchmouk <rchmouk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 16:52:35 by rchmouk           #+#    #+#             */
/*   Updated: 2023/01/13 15:06:28 by rchmouk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	int		*t;
	int		n;
	t_stack	*stack_a;
	t_stack	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (ac > 1)
	{
		if (ft_verf(av, ac) == 0)
			exit(1);
		ft_push(&stack_a, ac, av);
		if (ft_isorted(stack_a) == 1)
			exit(0);
		n = ft_lstsize(stack_a);
		t = ft_arraysort(stack_a);
		ft_sortstack(&stack_a, &stack_b, t, n);
	}
	return (0);
}

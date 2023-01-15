/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchmouk <rchmouk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 18:06:53 by rchmouk           #+#    #+#             */
/*   Updated: 2023/01/13 14:56:08 by rchmouk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "push_swap.h"

int	ft_applic(char *s, t_stack **stack_a, t_stack **stack_b)
{
	if (s[0] == 'p' && s[1] == 'a' && s[2] == '\n')
		ft_pa(stack_a, stack_b);
	else if (s[0] == 'p' && s[1] == 'b' && s[2] == '\n')
		ft_pb(stack_a, stack_b);
	else if (s[0] == 's' && s[1] == 'a' && s[2] == '\n')
		ft_sa(*stack_a);
	else if (s[0] == 's' && s[1] == 'b' && s[2] == '\n')
		ft_sb(*stack_b);
	else if (s[0] == 's' && s[1] == 's' && s[2] == '\n')
		ft_ss(*stack_b, *stack_b);
	else if (s[0] == 'r' && s[1] == 'r' && s[2] == 'a' && s[3] == '\n')
		ft_rra(stack_a);
	else if (s[0] == 'r' && s[1] == 'r' && s[2] == 'b' && s[3] == '\n')
		ft_rrb(stack_b);
	else if (s[0] == 'r' && s[1] == 'r' && s[2] == 'r' && s[3] == '\n')
		ft_rrr(stack_a, stack_b);
	else if (s[0] == 'r' && s[1] == 'a' && s[2] == '\n')
		ft_ra(stack_a);
	else if (s[0] == 'r' && s[1] == 'b' && s[2] == '\n')
		ft_rb(stack_b);
	else if (s[0] == 'r' && s[1] == 'r' && s[2] == '\n')
		ft_rr(stack_a, stack_b);
	else
		return (1);
	return (0);
}

int	main(int ac, char **av)
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	char	*str;

	stack_a = NULL;
	stack_b = NULL;
	if (ft_verf(av, ac) == 0)
		exit(1);
	ft_push(&stack_a, ac, av);
	str = get_next_line(0);
	while (str)
	{
		if (ft_applic(str, &stack_a, &stack_b) == 1)
		{
			write(2, "Error!", 6);
			exit(1);
		}
		free(str);
		str = get_next_line(0);
	}
	if (ft_isorted(stack_a) == 1 && stack_b == NULL)
		ft_putstr("OK!");
	else
		ft_putstr("KO!");
}

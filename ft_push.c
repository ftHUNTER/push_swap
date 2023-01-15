/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchmouk <rchmouk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 14:35:25 by rchmouk           #+#    #+#             */
/*   Updated: 2023/01/13 14:55:03 by rchmouk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

typedef struct sv_v
{
	int		i;
	int		j;
	long	x;
	t_stack	*temp;
}t_sv;

int	ft_verf(char **av, int ac)
{
	int	i;

	i = 1;
	if (ac < 2)
	{
		write(2, "Error!", 6);
		return (0);
	}
	while (i < ac)
	{
		if (ft_check_1(av[i]) == 0)
		{
			write(2, "Error!", 6);
			return (0);
		}
		i++;
	}
	return (1);
}

void	ft_hz_hot(t_stack **stack_a, int ac, char **av, t_sv r)
{
	while (++r.i < ac)
	{
		r.j = -1;
		while (av[r.i][++r.j])
		{
			if (ft_isdigit(av[r.i][r.j]) == 1
					&& ((av[r.i][r.j +1] == ' ') || (av[r.i][r.j + 1] == '\0')))
			{
				r.x = ft_catch(av[r.i], r.j);
				if (r.x > 2147483647 || r.x < -2147483648)
				{
					write(2, "Error!", 6);
					exit(1);
				}
				if (ft_dup(*stack_a, r.x) == 0)
					exit(1);
				r.temp->data = r.x;
				r.temp->link = ft_lstnew(0);
				r.temp = r.temp->link;
			}
		}
	}
}

void	ft_push(t_stack **stack_a, int ac, char **av)
{
	t_sv	r;

	r.temp = NULL;
	r.i = 0;
	*stack_a = ft_lstnew(0);
	r.temp = *stack_a;
	ft_hz_hot(stack_a, ac, av, r);
	dellast(*stack_a);
}

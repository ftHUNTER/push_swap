/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorte.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchmouk <rchmouk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 09:45:38 by rchmouk           #+#    #+#             */
/*   Updated: 2022/12/30 22:07:28 by rchmouk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*ft_sort(int *T, int size)
{
	int	i;
	int	j;
	int	swap;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (T[i] > T[j])
			{
				swap = T[i];
				T[i] = T[j];
				T[j] = swap;
			}
			j++;
		}
		i++;
	}
	return (T);
}

int	*ft_arraysort(t_stack *head)
{
	int	*t;
	int	i;
	int	n;

	n = ft_lstsize(head);
	i = 0;
	t = malloc(sizeof(int) * n);
	while (i < n)
	{
		t[i] = head->data;
		head = head->link;
		i++;
	}
	t = ft_sort(t, n);
	return (t);
}

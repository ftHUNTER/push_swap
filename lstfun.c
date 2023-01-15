/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstfun.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchmouk <rchmouk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 13:18:57 by rchmouk           #+#    #+#             */
/*   Updated: 2023/01/13 14:55:18 by rchmouk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_lstnew(int a)
{
	t_stack	*new;

	new = malloc(sizeof(t_stack));
	new->data = a;
	new->link = NULL;
	return (new);
}

int	ft_lstsize(t_stack *lst)
{
	int	x;

	x = 0;
	while (lst != NULL)
	{
		x++;
		lst = lst->link;
	}
	return (x);
}

void	dellast(t_stack *head)
{
	t_stack	*tmp;

	tmp = head;
	while (head->link->link != NULL)
		head = head->link;
	while (tmp->link != NULL)
		tmp = tmp->link;
	free(tmp);
	head->link = NULL;
}

int	ft_dup(t_stack *head, int x)
{
	if (head->link == NULL)
		head = head->link;
	else
	{
		while (head->link != NULL)
		{
			if (head->data == x)
			{
				write(2, "Error!", 6);
				return (0);
			}
			head = head->link;
		}
	}
	return (1);
}

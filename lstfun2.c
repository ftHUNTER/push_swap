/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstfun2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchmouk <rchmouk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 20:52:38 by rchmouk           #+#    #+#             */
/*   Updated: 2022/12/31 17:45:48 by rchmouk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_lstlast(t_stack *lst)
{
	while (lst != NULL)
	{
		if (lst->link == NULL)
			break ;
		lst = lst->link;
	}
	return (lst);
}

t_stack	*ft_beforlast(t_stack *head)
{
	while (head->link->link != NULL)
		head = head->link;
	return (head);
}

int	ft_check_t(int *T, t_stack *head, int start, int end)
{
	while (start <= end)
	{
		if (ft_srech_2(head, T[start]) == 1)
			return (1);
		start++;
	}
	return (0);
}

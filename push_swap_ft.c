/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_ft.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchmouk <rchmouk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 16:52:43 by rchmouk           #+#    #+#             */
/*   Updated: 2023/01/14 23:26:10 by rchmouk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <unistd.h>

int	ft_check_1(char *s)
{
	int	i;

	i = 0;
	if (s[i] == 0)
		return (0);
	while (s[i] == 32)
		i++;
	if (i == (int)ft_strlen(s))
		return (0);
	while (s[i])
	{
		if ((ft_isdigit(s[i]) == 1) && (s[i + 1] == '\0' || s[i + 1] == ' '
				|| (ft_isdigit(s[i + 1]) == 1)))
			i++;
		else if ((s[i] == '+' || s[i] == '-') && (s[i + 1] == '\0' || s[i
					+ 1] == ' '))
			return (0);
		else if (s[i] == 32)
			i++;
		else if (s[i] == '-' || s[i] == '+')
			i++;
		else
			return (0);
	}
	return (1);
}

long	ft_catch(char *s, int i)
{
	int		y;
	char	*str;

	y = i;
	while (y > 0)
	{
		if (s[y] == ' ')
			break ;
		y--;
	}
	str = ft_substr(s, y, i - y + 1);
	if (ft_strlen(str) > 11)
		ft_displyerror();
	y = ft_atoi(str);
	free(str);
	return (y);
}

int	ft_serch(t_stack *head, int x)
{
	int		i;
	t_stack	*tmp;

	i = 0;
	tmp = head;
	while (head != NULL)
	{
		if (x == head->data)
			break ;
		else
			head = head->link;
		i++;
	}
	if (i > ft_lstsize(tmp) / 2)
		return (1);
	return (0);
}

int	ft_serch3(t_stack *head, int x)
{
	int	i;

	i = 0;
	while (head != NULL)
	{
		if (x == head->data)
			break ;
		head = head->link;
		i++;
	}
	return (i);
}

int	ft_srech_2(t_stack *head, int x)
{
	while (head != NULL)
	{
		if (x == head->data)
			return (1);
		head = head->link;
	}
	return (0);
}

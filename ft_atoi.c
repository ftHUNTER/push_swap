/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchmouk <rchmouk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:53:12 by rchmouk           #+#    #+#             */
/*   Updated: 2023/01/14 23:29:53 by rchmouk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_displyerror(void)
{
	write(2, "Error\n", 6);
	exit(1);
}

int	ft_atoi(const char *str)
{
	long	i;
	long	y;
	long	x;

	i = 0;
	y = 0;
	x = 1;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			x = x * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		y = y * 10 + ((str[i] - 48) % 10);
		i++;
	}
	if ((y * x) > 2147483647 || (y * x) < -2147483648)
		ft_displyerror();
	return (y * x);
}

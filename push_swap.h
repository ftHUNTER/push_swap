/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchmouk <rchmouk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 22:02:25 by rchmouk           #+#    #+#             */
/*   Updated: 2023/01/14 23:32:22 by rchmouk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdbool.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct push_swap
{
	int					data;
	struct push_swap	*link;
}						t_stack;

int		ft_atoi(const char *str);
int		ft_check_1(char *s);
t_stack	*ft_lstnew(int a);
size_t	ft_strlen(const char *str);
int		ft_lstsize(t_stack *lst);
char	*ft_substr(char const *s, unsigned int start, size_t len);
int		ft_isdigit(int a);
long	ft_catch(char *s, int i);
void	dellast(t_stack *head);
int		ft_dup(t_stack *head, int x);
void	ft_sa(t_stack *head);
void	ft_putstr(char *s);
void	ft_putnbr(int nb);
void	ft_putchar(char c);
void	ft_pb(t_stack **stack_a, t_stack **stack_b);
void	ft_pa(t_stack **stack_a, t_stack **stack_b);
void	ft_ss(t_stack *stack_a, t_stack *stack_b);
t_stack	*ft_lstlast(t_stack *lst);
void	ft_ra(t_stack **stack_a);
void	ft_rb(t_stack **stack_b);
void	ft_rr(t_stack **stack_a, t_stack **stack_b);
void	ft_rrr(t_stack **stack_a, t_stack **stack_b);
void	ft_sb(t_stack *head);
void	ft_rra(t_stack **stack_a);
t_stack	*ft_beforlast(t_stack *head);
void	ft_rrb(t_stack **stack_a);
int		ft_verf(char **av, int ac);
void	ft_push(t_stack **stack_a, int ac, char **av);
int		*ft_arraysort(t_stack *head);
void	ft_sortstack(t_stack **stack_a, t_stack **stack_b, int *T, int size);
int		ft_serch(t_stack *head, int x);
int		ft_check_t(int *T, t_stack *head, int start, int end);
int		ft_srech_2(t_stack *head, int x);
void	ft_a_to_b(t_stack **stack_a, t_stack **stack_b, int *T, int size);
void	ft_sort_a3(t_stack **head);
void	ft_sort_5(int *T, t_stack **stack_a, t_stack **stack_b, int size);
int		ft_isorted(t_stack *head);
void	ft_displyerror(void);

#endif
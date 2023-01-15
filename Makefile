# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rchmouk <rchmouk@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/27 16:52:37 by rchmouk           #+#    #+#              #
#    Updated: 2023/01/13 14:47:48 by rchmouk          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=push_swap
NAMEBONUS=checker
CFLAGS=-Wall -Wextra -Werror #-fsanitize=address -g3
RM=rm -f
SRC = ft_atoi.c ft_strlen.c lstfun.c ft_substr.c \
ft_isdgit.c swapfun.c swapfun2.c ft_putstr.c ft_putnbr.c ft_putchar.c \
lstfun2.c ft_push.c ft_sorte.c ft_sortestack.c ft_sortestack2.c ft_a_to_b.c \
push_swap.c push_swap_ft.c isorted.c

SRCBONUS = ft_atoi.c ft_strlen.c lstfun.c ft_substr.c checker.c get_next_line.c get_next_line_utils.c \
ft_isdgit.c swapfunbonus.c swapfunbonus2.c ft_putstr.c ft_putnbr.c ft_putchar.c isorted.c swapfun3.c\
lstfun2.c ft_push.c \
push_swap_ft.c 
OBJ = $(SRC:.c=.o)
OBJBONUS = $(SRCBONUS:.c=.o)

all: $(NAME)

bonus : $(NAMEBONUS)

$(NAME): $(OBJ)
		gcc $(CFLAGS) $(SRC) -o $(NAME)

$(NAMEBONUS): $(OBJBONUS)
		gcc $(CFLAGS) $(SRCBONUS) -o $(NAMEBONUS)
clean:
		$(RM) $(OBJ) $(OBJBONUS)

fclean: clean
		$(RM) $(NAME) $(NAMEBONUS)


re: fclean all

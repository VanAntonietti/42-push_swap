# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/27 19:00:01 by vantonie          #+#    #+#              #
#    Updated: 2022/04/02 15:51:50 by vantonie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CFLAGS = -Wall -Wextra -Werror -fsanitize=leak

CC = gcc

LIBFT = ./libft/libft.a

FILES = checker_after.c		\
		checker_before.c	\
		dinit.c				\
		init.c				\
		main.c				\
		medium.c			\
		moves_push.c 		\
		moves_reverse.c		\
		moves_rotate.c		\
		moves_swap.c		\
		push_swap.c 		\
		quick_sort.c		\
		radix.c				\
		small.c				\
		utils.c			

SRC=$(addprefix src/, $(FILES))

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(LIBFT)	
	$(CC) $(SRC) $(CFLAGS) -I ./header -L ./libft -lft -g3 -o $(NAME)

$(LIBFT):
	make others -C ./libft

clean:
	rm -f $(LIBFT_OBJS) $(NAME) $(NAME_BONUS)
	make clean -C ./libft

fclean:
	make fclean -C ./libft
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
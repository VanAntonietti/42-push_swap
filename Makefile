# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/27 19:00:01 by vantonie          #+#    #+#              #
#    Updated: 2022/03/21 21:55:42 by vantonie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CFLAGS = -Wall -Wextra -Werror

CC = gcc

LIBFT = ./libft/libft.a

FILES = push_swap.c 		\
		init.c				\
		list_utils.c		\
		# push_swap_utils.c 	\
		# sorters.c 			\
		# checker.c 			\
		# moves_swap.c 		\
		# moves_rotate.c 		\
		# moves_push.c 		\
		# moves_reverse.c 

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
	rm -rf push_swap.dSYM

fclean:
	make fclean -C ./libft
	rm -f $(NAME) 

re: fclean all

.PHONY: all clean fclean re
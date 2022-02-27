# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/27 19:00:01 by vantonie          #+#    #+#              #
#    Updated: 2022/02/27 19:05:54 by vantonie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CFLAGS = -Wall -Wextra -Werror

CC = gcc

LIBFT = ./libft/libft.a

SRC = 	push_swap.c \
		push_swap_utils.c \

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(LIBFT)	
	$(CC) $(addprefix ./src/,$(SRC)) $(CFLAGS) -I .	-L ./libft -o $(NAME)

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
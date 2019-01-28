# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vgongora <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/21 12:44:53 by vgongora          #+#    #+#              #
#    Updated: 2018/09/27 13:29:49 by vgongora         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = lem-in

FLAGS = -Wall -Werror -Wall

SRC = *.c

DIR = ./libft

all: $(NAME)
$(NAME):
	make all -C $(DIR)
	gcc $(FLAGS) -o  $(NAME) $(SRC) ./libft/libft.a

clean:
	make clean -C $(DIR)

fclean: clean
	make fclean -C $(DIR)
	rm -rf $(NAME)

re: fclean all

.PHONY: clean fclean all re

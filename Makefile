# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fchanal <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/18 23:36:28 by fchanal           #+#    #+#              #
#    Updated: 2016/08/25 10:43:22 by tribeiro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = a.out
SRC = main.c
OBJ = *.o
FLAG = -Wall -Werror -Wextra

all : cc

cc:
	gcc $(FLAG) $(SRC) -I srcs -L. -lft

.PHONY:
	lib clean fclean fc re

lib:
	gcc -c srcs/*.c $(FLAG)
	ar rc libft.a *.o
	ranlib libft.a

clean: 
	@rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	rm libft.a

fc:
	rm srcs/*.c~
	rm srcs/*.h~
	rm Makefile~

re: fclean lib cc

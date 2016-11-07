# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fchanal <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/18 23:36:28 by fchanal           #+#    #+#              #
#    Updated: 2016/11/07 18:06:20 by tribeiro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = a.out
SRC = srcs/*.c
OBJ = *.o
FLAG = -Wall -Werror -Wextra

all : cc

cc:
	gcc -c $(SRC) $(FLAG)
	ar rc libft.a $(OBJ)
	ranlib libft.a

.PHONY:
	com clean fclean fc re

lib:
	gcc -shared -fPIC $(FLAG) -I./$(SRC) $(SRC) -o libft.so

com:
	gcc $(FLAG) $(SRC) -I srcs -L. -lft

clean: 
	@rm -f $(OBJ)

fclean: clean
	rm libft.a

fc:
	rm srcs/*.c~
	rm srcs/*.h~
	rm Makefile~

re: fclean cc

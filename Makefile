# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fchanal <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/18 23:36:28 by fchanal           #+#    #+#              #
#    Updated: 2016/11/13 20:02:09 by tribeiro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = srcs/*.c
OBJ = *.o
FLAG = -Wall -Werror -Wextra

all : $(NAME) cc

cc:
	gcc -c $(SRC) $(FLAG)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

.PHONY:
	com clean fclean fc re

lib:
	gcc -shared -fPIC $(FLAG) -I./$(SRC) $(SRC) -o libft.so

com:
	gcc $(FLAG) $(SRC) -I srcs -L. -lft

clean: 
	@rm -f $(OBJ)

fclean: clean
	rm -f libft.a

fc:
	rm srcs/*.c~
	rm srcs/*.h~
	rm Makefile~

re: fclean cc

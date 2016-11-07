# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fchanal <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/18 23:36:28 by fchanal           #+#    #+#              #
#    Updated: 2016/11/07 16:38:09 by tribeiro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = a.out
SRC = srcs/*.c
OBJ = *.o
FLAG = -Wall -Werror -Wextra

all : cc

cc:
	gcc -c srcs/*.c $(FLAG)
	ar rc libft.a *.o
	ranlib libft.a

.PHONY:
	com clean fclean fc re

com:
	gcc $(FLAG) $(SRC) -I srcs -L. -lft

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

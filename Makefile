# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kkihn <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/29 11:56:12 by kkihn             #+#    #+#              #
#    Updated: 2018/11/22 14:37:31 by kkihn            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS = -Wall -Wextra -Werror -c

SRC = *.c

OFILES = *.o 

all: libft.a

libft.a:
	gcc -I libft.h  $(FLAGS) $(SRC)
	ar rc libft.a $(OFILES)	

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f libft.a

re: fclean all


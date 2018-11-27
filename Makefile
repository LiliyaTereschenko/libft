# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kkihn <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/29 11:56:12 by kkihn             #+#    #+#              #
#    Updated: 2018/11/26 13:01:58 by kkihn            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS = -Wall -Wextra -Werror -c

SRC = *.c

OFILES = *.o 

NAME = libft.a

all: $(NAME)

$(NAME):
	gcc -I libft.h  $(FLAGS) $(SRC)
	ar rc libft.a $(OFILES)	

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f libft.a

re: fclean all


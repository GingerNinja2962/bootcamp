# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hwessels <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/25 10:05:18 by hwessels          #+#    #+#              #
#    Updated: 2020/01/26 17:16:20 by hwessels         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = *.c

OBJ = *.o

all: $(NAME)

$(NAME):
	gcc -Wall -Werror -Wextra -c $(SRCS)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)
	gcc -Wall -Werror -Wextra main.c libft.a -o rush-2


clean:
	/bin/rm -f $(OBJ)


fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tconceic <tconceic@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/28 19:42:56 by tconceic          #+#    #+#              #
#    Updated: 2021/08/28 19:42:56 by tconceic         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

#source code
SRC =\
	ft_isalpha.c\
	ft_isdigit.c\
	ft_isalnum.c\
	ft_isascii.c\
	ft_isprint.c\
	ft_strlen.c\
	ft_memset.c\
	ft_bzero.c\
	ft_memcpy.c\
	ft_memmove.c\
	# ft_strlcpy.c\

OBJ = $(SRC:%.c=%.o)

FLAGS = -Wall -Wextra -Werror -I. -c

all: $(NAME)

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

$(OBJ): $(SRC)
	@gcc $(FLAGS) $(SRC)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re

# Compiled Object Format
# COF = ${SRC:.c = .o}

# all: compile clear

# compile:
# 	gcc -c -Wall -Wextra -Werror ${SRC}

# clear:
# 	rm *.o

# .PHONY: main

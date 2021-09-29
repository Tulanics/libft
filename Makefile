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

#source code part 1 and 2
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
	ft_strlcpy.c\
	ft_strlcat.c\
	ft_toupper.c\
	ft_tolower.c\
	ft_strchr.c\
	ft_strrchr.c\
	ft_strncmp.c\
	ft_memcmp.c\
	ft_memchr.c\
	ft_strnstr.c\
	ft_atoi.c\
	ft_calloc.c\
	ft_strdup.c\
	ft_substr.c\
	ft_strjoin.c\
	ft_strtrim.c\
	ft_split.c\
	ft_itoa.c\
	ft_strmapi.c\
	ft_striteri.c\
	ft_putchar_fd.c\
	ft_putstr_fd.c\
	ft_putendl_fd.c\
	ft_putnbr_fd.c\

#source code bônus.
BONUS =\
		ft_lstnew.c\
		ft_lstadd_front.c\

OBJ = $(SRC:%.c=%.o)

OBJ_BONUS =  $(BONUS:%.c=%.o)

FLAGS = -Wall -Wextra -Werror -I. -c

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

$(OBJ): $(SRC)
	gcc $(FLAGS) $(SRC)

$(OBJ_BONUS):
	gcc $(FLAGS) $(BONUS)

clean:
	rm -f $(OBJ) $(OBJ_BONUS)

fclean: clean
	rm -f $(NAME)

re: fclean all

bonus: $(OBJ) $(OBJ_BONUS)
	ar rcs $(NAME) $(OBJ) $(OBJ_BONUS)

.PHONY: clean fclean all re

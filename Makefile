# NAME = libft.a

# SRC = ft_isalpha.c

# FLAGS = -Wall -Wextra -Werror -c

# OBJS = ${SRC: .c = .o}

# all:
# 	clang ${FLAGS} ${SRC}


all: compile

compile:
	gcc -c -Wall -Wextra -Werror ft_isalpha.c -o

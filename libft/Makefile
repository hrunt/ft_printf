# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mrk <marvin@42.fr>                         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/13 14:09:47 by mrk               #+#    #+#              #
#    Updated: 2024/03/13 15:45:06 by mrk              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
AR = ar rcs
RM = rm -rf
FLAGS = -Wall -Wextra -Werror
NAME = libft.a
SRC = ft_atoi.c \
	ft_bzero.c \
	ft_calloc.c \
	ft_isalnum.c \
	ft_isalpha.c \
	ft_isascii.c \
	ft_isdigit.c \
	ft_isprint.c \
	ft_itoa.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_memset.c \
	ft_putchar_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c \
	ft_putstr_fd.c \
	ft_split.c \
	ft_strchr.c \
	ft_strdup.c \
	ft_striteri.c \
	ft_strjoin.c \
	ft_strlcat.c \
	ft_strlcpy.c \
	ft_strlen.c \
	ft_strmapi.c \
	ft_strncmp.c \
	ft_strnstr.c \
	ft_strrchr.c \
	ft_strtrim.c \
	ft_substr.c  \
	ft_tolower.c \
	ft_toupper.c \
	
OBJ = $(SRC:.c=.o)
	
all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $@ $(OBJ)

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@	
	
clean :
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

tests:
	@$(CC) -o tests.out .tests.c -L. -lft -I./
	@touch endl.txt nbr.txt str.txt char.txt 
	@./tests.out
	@rm -f tests.out
	
memory_leaks:
	@$(CC) -o tests.out .tests.c -L. -lft -I./
	@touch endl.txt nbr.txt str.txt char.txt 
	valgrind --leak-check=full --show-leak-kinds=all ./tests.out
	@rm -f tests.out
	
bonus_tests:
	@$(CC) -o bonus_tests.out .bonus_tests.c -L. -lft -I./
	valgrind --leak-check=full --show-leak-kinds=all ./bonus_tests.out
	@rm -f bonus_tests.out

.PHONY: all, clean, fclean, re

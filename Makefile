# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lanselin <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/20 16:56:09 by lanselin          #+#    #+#              #
#    Updated: 2020/12/20 16:56:22 by lanselin         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
OBJ = $(SRC:.c=.o)
OBJB = $(SRCB:.c=.o)
SRC = ft_atoi.c \
		ft_bzero.c \
		ft_calloc.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_itoa.c \
		ft_memccpy.c \
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
		ft_strcpy.c \
		ft_strdup.c \
		ft_strjoin.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strlen.c \
		ft_strmapi.c \
		ft_strncmp.c \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_strtrim.c \
		ft_substr.c \
		ft_tolower.c \
		ft_toupper.c
SRCB = ft_lstnew.c \
		ft_lstadd_front.c \
		ft_lstsize.c \
		ft_lstlast.c \
		ft_lstadd_back.c \
		ft_lstdelone.c \
		ft_lstclear.c \
		ft_lstiter.c \
		ft_lstmap.c


all: $(NAME)

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@echo "archive $(NAME) has been created."
	@ranlib $(NAME)
	@echo "archive $(NAME) has been indexed."

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@
	
bonus: $(OBJ) $(OBJB)
	@ar rc $(NAME) $(OBJ) $(OBJB)
	@echo "archive $(NAME) has been created."
	@ranlib $(NAME)
	@echo "archive $(NAME) has been indexed."

clean:
	@rm -f $(OBJ)
	@rm -f $(OBJB)
	@echo "All objects have been deleted."

fclean: clean
	@rm -f $(NAME)
	@echo "archive $(NAME) has been deleted."

re: fclean all

.PHONY: all, clean, fclean, re


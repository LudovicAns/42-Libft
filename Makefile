# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lanselin <lanselin@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/25 14:13:13 by lanselin          #+#    #+#              #
#    Updated: 2021/08/25 14:13:13 by lanselin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ----- Library Name ----- #
NAME		=	libft.a

# ----- Compiling Variables ----- #
CC			=	gcc
CFLAGS		=	-Wall -Wextra -Werror
RM			=	rm -f

# -----  Main Variables ----- #
OBJ			=	$(SRC:.c=.o)
SRC			= 	ft_atoi.c \
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
				ft_toupper.c \
				ft_lstnew.c \
				ft_lstadd_front.c \
				ft_lstsize.c \
				ft_lstlast.c \
				ft_lstadd_back.c \
				ft_lstdelone.c \
				ft_lstclear.c \
				ft_lstiter.c \
				ft_lstmap.c \
				ft_abs.c \
				ft_isspace.c \
				ft_nbrlen.c \
				ft_putstr_color_fd.c \
				ft_str_isnumeric.c \
				ft_strjoin_char.c \
				ft_swapint.c \
				ft_isnormal_int.c \
				ft_strcmp.c
INC			=	-I.

# -----  Stack Variables ----- #
STACK_DIR	=	./stack
SRC_STACK	=	$(STACK_DIR)/ft_stack_create.c \
				$(STACK_DIR)/ft_stack_getfirst.c \
				$(STACK_DIR)/ft_stack_remove.c \
				$(STACK_DIR)/ft_stack_addfront.c \
				$(STACK_DIR)/ft_stack_addback.c \
				$(STACK_DIR)/ft_stack_getlast.c \
				$(STACK_DIR)/ft_stack_dispfrom_f.c \
				$(STACK_DIR)/ft_stack_issorted.c \
				$(STACK_DIR)/ft_stack_clear.c \
				$(STACK_DIR)/ft_stack_size.c \
				$(STACK_DIR)/ft_stack_has_dup.c \
				$(STACK_DIR)/ft_stack_duplicate.c \
				$(STACK_DIR)/ft_stack_count.c \
				$(STACK_DIR)/ft_stack_sort.c \
				$(STACK_DIR)/ft_stack_getmax.c \
				$(STACK_DIR)/ft_stack_getmin.c \
				$(STACK_DIR)/ft_stack_find.c \
				$(STACK_DIR)/ft_stack_copy.c \
				$(STACK_DIR)/ft_stack_getvalue.c \
				$(STACK_DIR)/ft_stack_hasbigger.c \
				$(STACK_DIR)/ft_stack_contain.c
OBJ_STACK	=	$(SRC_STACK:.c=.o)
INC_STACK	=	-I$(STACK_DIR)

# -----  GNL Variables ----- #
GNL_DIR	=	./gnl
SRC_GNL	=	$(GNL_DIR)/get_next_line.c \
			$(GNL_DIR)/get_next_line_utils.c
OBJ_GNL	=	$(SRC_GNL:.c=.o)
INC_GNL	=	-I$(GNL_DIR)

# ----- Colors ----- #
GREEN		=	\e[38;5;118m
YELLOW		=	\e[38;5;226m
RESET		=	\e[0m
_SUCCESS	=	[$(GREEN)SUCCESS$(RESET)]
_INFO		=	[$(YELLOW)INFO$(RESET)]

all: $(NAME)

$(NAME): $(OBJ) $(OBJ_STACK) $(OBJ_GNL)
	@ ar rc $(NAME) $(OBJ) $(OBJ_STACK) $(OBJ_GNL)
	@ ranlib $(NAME)
	@ printf "$(_SUCCESS) Compilation complete.\n"

%.o: %.c
	@ $(CC) $(CFLAGS) $(INC) $(INC_STACK) $(INC_GNL) -c $< -o $@
	@ printf '$(_INFO) 🔨 Compiling %s from %s.\n' "$@" "$<"

clean:
	@ $(RM) $(OBJ)
	@ $(RM) $(OBJB)
	@ $(RM) $(OBJ_STACK)
	@ $(RM) $(OBJ_GNL)
	@ printf "$(_INFO) Cleaned all object files\n"

fclean: clean
	@ rm -f $(NAME)
	@ printf "$(_INFO) Cleaned all object files an libft.a\n"

re: fclean all

.PHONY: all clean fclean re


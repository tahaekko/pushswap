# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msamhaou <msamhaou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/05 01:49:18 by msamhaou          #+#    #+#              #
#    Updated: 2023/02/07 01:56:03 by msamhaou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
FLAGS = -Wall -Wextra -Werror

LIBFT_DIR = libft/
LIBFT = libft.a
INCLUDE = include
SRC_DIR = src/
SRC_FILE = main.c	init.c	lstfunc.c	ft_instruction.c	ft_limits.c\
ft_index.c	do_instruction.c	ft_cost.c	ft_sort.c

OBJ_DIR = obj/
OBJ_FILE = $(SRC_FILE:.c=.o)

SRC = $(addprefix $(SRC_DIR),$(SRC_FILE))
OBJ = $(addprefix $(OBJ_DIR),$(OBJ_FILE))

NAME = pushswap

all : $(NAME)

$(NAME) : $(LIBFT) $(OBJ_DIR) $(OBJ)
	$(CC) $(FLAGS) $(OBJ) $(LIBFT) -o $(NAME)

$(LIBFT) : $(LIBFT_DIR)
	make -C $(LIBFT_DIR)
	make bonus -C $(LIBFT_DIR)
	cp $(LIBFT_DIR)$(LIBFT) .

$(OBJ_DIR)%.o : $(SRC_DIR)%.c
	$(CC) -c $(FLAGS) $< -o $@ -I $(INCLUDE)

$(OBJ_DIR) : 
	mkdir -p $(OBJ_DIR)

clean : 
	make clean -C $(LIBFT_DIR)
	rm -rf $(OBJ)
	rm -rf $(OBJ_DIR)

fclean : clean
	make fclean -C $(LIBFT_DIR)
	rm -rf $(NAME) $(LIBFT)

re : fclean all
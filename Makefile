# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msamhaou <msamhaou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/05 01:49:18 by msamhaou          #+#    #+#              #
#    Updated: 2023/02/10 04:06:51 by msamhaou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC =		cc
FLAGS =		-Wall -Wextra -Werror

LIBFT_DIR = libft/
LIBFT =		libft.a
INCLUDE =	include
SRC_DIR =	src/
SRC_FILE =	main.c	init.c	lstfunc.c	ft_instruction.c	ft_limits.c\
			ft_index.c	do_instruction_a.c	do_instruction_b.c	ft_cost.c	ft_sort.c\
			ft_tool.c	do_instruction_both.c

OBJ_DIR =	obj/
OBJ_FILE =	$(SRC_FILE:.c=.o)

SRC =		$(addprefix $(SRC_DIR),$(SRC_FILE))
OBJ =		$(addprefix $(OBJ_DIR),$(OBJ_FILE))

NAME = push_swap

#------BONUS----- -#

SRC_DIR_BONUS =		src_bonus/
SRC_FILE_BONUS =	checker_bonus.c	get_next_line.c	get_next_line_utils.c	ft_instruction_bonus.c\
					lstfunc_bonus.c	init_bonus.c	checker_utils_bonus.c
SRC_BONUS =			$(addprefix $(SRC_DIR_BONUS),$(SRC_FILE_BONUS))

OBJ_DIR_BONUS =		obj_bonus/
OBJ_FILE_BONUS =	$(SRC_FILE_BONUS:.c=.o)
OBJ_BONUS =			$(addprefix $(OBJ_DIR_BONUS),$(OBJ_FILE_BONUS))
NAME_BONUS =		checker

#----------------#

all : $(NAME)

$(NAME) : $(LIBFT) $(OBJ_DIR) $(OBJ)
	$(CC) $(FLAGS) $(OBJ) $(LIBFT) -o $(NAME)

$(LIBFT) : $(LIBFT_DIR)
	make -C $(LIBFT_DIR)
	make bonus -C $(LIBFT_DIR)
	cp $(LIBFT_DIR)$(LIBFT) .

$(OBJ_DIR)%.o : $(SRC_DIR)%.c include/push_swap.h
	$(CC) -c $(FLAGS) $< -o $@ -I $(INCLUDE)

$(OBJ_DIR) :
	mkdir -p $(OBJ_DIR)

#-----make_bonus------

bonus : $(NAME_BONUS)

$(NAME_BONUS) : $(LIBFT) $(OBJ_DIR_BONUS) $(OBJ_BONUS)
	$(CC) $(FLAGS) $(OBJ_BONUS) $(LIBFT) -o $(NAME_BONUS)
$(OBJ_DIR_BONUS)%.o : $(SRC_DIR_BONUS)%.c include/push_swap_bonus.h
	$(CC) $(FLAGS) -c $< -o $@ -I $(INCLUDE)
$(OBJ_DIR_BONUS) :
	mkdir -p $(OBJ_DIR_BONUS)
bclean : 
	rm -rf $(OBJ_BONUS)
	rm -rf $(OBJ_DIR_BONUS)
bfclean : bclean
	rm -rf $(NAME_BONUS)

#----------------#

clean : bclean
	make clean -C $(LIBFT_DIR)
	rm -rf $(OBJ)
	rm -rf $(OBJ_DIR)

fclean : clean bclean bfclean
	make fclean -C $(LIBFT_DIR)
	rm -rf $(NAME) $(LIBFT)

re : fclean all
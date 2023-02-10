# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msamhaou <msamhaou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/05 01:49:18 by msamhaou          #+#    #+#              #
#    Updated: 2023/02/10 18:22:58 by msamhaou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC =		cc
FLAGS =		-Wall -Wextra -Werror

LIBFT_DIR = libft/

INCLUDE =	include

HEADERS = push_swap.h	get_next_line.h

#------------SRC && OBJ-------------#
SRC_DIR =	src/
SRC_FILE =	main.c	init.c	lstfunc.c	ft_instruction.c	ft_limits.c\
			ft_index.c	do_instruction_a.c	do_instruction_b.c	ft_cost.c	ft_sort.c\
			ft_tool.c	do_instruction_both.c

OBJ_DIR =	obj/
OBJ_FILE =	$(SRC_FILE:.c=.o)

SRC =		$(addprefix $(SRC_DIR),$(SRC_FILE))
OBJ =		$(addprefix $(OBJ_DIR),$(OBJ_FILE))
#------------------------------#

#---------Lib SRC && OBJ--------#
LIB_SRC = libft/ft_atoi.c         libft/ft_lstadd_back.c  libft/ft_memcmp.c       libft/ft_strchr.c       libft/ft_strnstr.c\
libft/ft_bzero.c        libft/ft_lstadd_front.c libft/ft_memcpy.c       libft/ft_strdup.c       libft/ft_strrchr.c\
libft/ft_calloc.c       libft/ft_lstclear.c     libft/ft_memmove.c      libft/ft_striteri.c     libft/ft_strtrim.c\
libft/ft_isalnum.c      libft/ft_lstdelone.c    libft/ft_memset.c       libft/ft_substr.c\
libft/ft_isascii.c      libft/ft_lstiter.c      libft/ft_putchar_fd.c   libft/ft_strlcat.c      libft/ft_tolower.c\
libft/ft_isdigit.c      libft/ft_lstlast.c      libft/ft_putendl_fd.c   libft/ft_strlcpy.c      libft/ft_toupper.c\
libft/ft_islpha.c       libft/ft_lstnew.c       libft/ft_putnbr_fd.c    libft/ft_strlen.c\
libft/ft_isprint.c      libft/ft_lstsize.c      libft/ft_putstr_fd.c    libft/ft_strmapi.c\
libft/ft_itoa.c         libft/ft_memchr.c       libft/ft_split.c        libft/ft_strncmp.c

LIB_OBJ = $(LIB_SRC:.c=.o)
#------------------------------#

#------BONUS SRC && OBJ----- -#

SRC_DIR_BONUS =		src_bonus/
SRC_FILE_BONUS =	checker_bonus.c	get_next_line.c	get_next_line_utils.c	ft_instruction_bonus.c\
					lstfunc_bonus.c	init_bonus.c	checker_utils_bonus.c
SRC_BONUS =			$(addprefix $(SRC_DIR_BONUS),$(SRC_FILE_BONUS))

OBJ_DIR_BONUS =		obj_bonus/
OBJ_FILE_BONUS =	$(SRC_FILE_BONUS:.c=.o)
OBJ_BONUS =			$(addprefix $(OBJ_DIR_BONUS),$(OBJ_FILE_BONUS))
NAME_BONUS =		checker

#------------------------------#

NAME = push_swap

all : $(NAME)

$(NAME) : $(LIB_OBJ) $(OBJ_DIR) $(OBJ)
	$(CC) $(FLAGS) $(OBJ) $(LIB_OBJ) -o $(NAME)

#---------LIBFT--------#
$(LIBFT_DIR)%.o : $(LIBFT_DIR)%.c include/libft.h
	$(CC) $(FLAGS) -c $< -o $@ -I $(INCLUDE)
#------------------------#

$(OBJ_DIR)%.o : $(SRC_DIR)%.c include/push_swap.h
	$(CC) -c $(FLAGS) $< -o $@ -I $(INCLUDE)

$(OBJ_DIR) :
	mkdir -p $(OBJ_DIR)

#-----make_bonus------

bonus : $(NAME_BONUS)

$(NAME_BONUS) : $(LIB_OBJ) $(OBJ_DIR_BONUS) $(OBJ_BONUS)
	$(CC) $(FLAGS) $(OBJ_BONUS) $(LIB_OBJ) -o $(NAME_BONUS)
$(OBJ_DIR_BONUS)%.o : $(SRC_DIR_BONUS)%.c include/push_swap_bonus.h include/get_next_line.h
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
	rm -rf $(LIB_OBJ)
	rm -rf $(OBJ)
	rm -rf $(OBJ_DIR)

fclean : clean bclean bfclean
	rm -rf $(NAME)

re : fclean all

.PHONY : libft/%.c
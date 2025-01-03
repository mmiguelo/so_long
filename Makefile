# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmiguelo <mmiguelo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/30 16:51:22 by mmiguelo          #+#    #+#              #
#    Updated: 2025/01/03 14:53:48 by mmiguelo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#==============================================================================#
#                                    NAMES                                     #
#==============================================================================#

CC = cc
CFLAGS = -Wall -Wextra -Werror
INC = -I./includes
LIBFT = ./my_libft/libft.a
RM = rm -rf

GENERAL = main kill
PARSING = extension
MAP = utils

NAME = so_long

#==============================================================================#
#                                    PATHS                                     #
#==============================================================================#

VPATH += src
VPATH += src/parsing
VPATH += src/map

#==============================================================================#
#                                    FILES                                     #
#==============================================================================#

SRC +=	$(addsuffix .c, $(GENERAL))
SRC +=	$(addsuffix .c, $(PARSING))
SRC +=	$(addsuffix .c, $(MAP))

OBJ_DIR = obj
OBJS = $(SRC:%.c=$(OBJ_DIR)/%.o)

#==============================================================================#
#                                    RULES                                     #
#==============================================================================#

all: $(NAME)

$(LIBFT):
	$(MAKE) -C ./my_libft

$(OBJ_DIR):
	mkdir -p obj

$(OBJ_DIR)/%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@ $(INC)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@ $(BONUS_INC)

$(NAME): $(OBJ_DIR) $(OBJS) $(LIBFT)
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT) -o $(NAME)

clean:
	$(MAKE) clean -C ./my_libft
	$(RM) $(OBJS)

fclean: clean
	$(MAKE) fclean -C ./my_libft
	$(RM) $(NAME) $(OBJ_DIR)

re: fclean all

.SILENT:
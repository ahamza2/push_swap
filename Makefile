# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: haarab <haarab@student.1337.ma>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/15 00:42:39 by haarab            #+#    #+#              #
#    Updated: 2023/04/15 15:54:36 by haarab           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#
NAME		=	push_swap
CC			=	cc
FLAGS		=	-Wall -Wextra -Werror
OBJ			=	$(patsubst src%, obj%, $(SRC:.c=.o))
SRC			=	check_code.c check_doubleelement.c checkargisfree.c ft_count.c ft_split.c libft.c maxint_minint.c push_swap.c return_integer.c reverse_rotate.c rotate.c sort_element.c sortelement_smalltolarg.c swap.c

all:		$(NAME)

$(NAME):	$(OBJ)
			$(CC) $(FLAGS) -o $@ $^ $(LIB)


obj/%.o:	src/%.c
			$(CC) $(FLAGS)  -o $@ -c $<

clean:
			@rm -rf $(OBJ) obj
			@echo "object files removed."

fclean:		clean
			@rm -rf $(NAME)
			@echo "binary file removed."

re:			fclean all

.PHONY:		all clean fclean re






















# NAME = push_swap

# CC = cc
# CFLAGS = -Wall -Wextra -Werror
# RM = rm -f

# src = check_code.c check_doubleelement.c checkargisfree.c ft_count.c ft_split.c libft.c maxint_minint.c push_swap.c return_integer.c reverse_rotate.c rotate.c sort_element.c sortelement_smalltolarg.c swap.c

# OBJS = check_code.o check_doubleelement.o checkargisfree.o ft_count.o ft_split.o libft.o maxint_minint.o push_swap.o return_integer.o reverse_rotate.o rotate.o sort_element.o sortelement_smalltolarg.o swap.o

# all: $(NAME)


# $(NAME) : $(OBJS)
# 	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)


# clean:
# 	$(RM) $(OBJS)
	
# fclean: clean
# 	$(RM) $(NAME)

# re: fclean all
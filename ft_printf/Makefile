# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ral-dhah < ral-dhah@student.42abudhabi.ae> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/07 18:38:24 by ral-dhah          #+#    #+#              #
#    Updated: 2022/07/07 18:53:44 by ral-dhah         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a

SRCS	= ft_print_ptr.c ft_print_hex.c ft_extra.c ft_print_nbr.c \
		  ft_print_uint.c ft_printf.c

OBJS	= $(SRCS:.c=.o)

RM		= rm -rf

CC		= gcc 

CFLAGS	= -Wall -Wextra -Werror

all:	$(NAME)

$(NAME):	$(OBJS)
				ar -rcs $(NAME) $(OBJS)

clean:		
				$(RM) $(OBJS)

fclean:		clean
				$(RM) $(NAME)
				
re:			fclean all

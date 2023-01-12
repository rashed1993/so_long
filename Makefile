# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ral-dhah < ral-dhah@student.42abudhabi.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/12 14:40:03 by ral-dhah          #+#    #+#              #
#    Updated: 2023/01/04 16:29:17 by ral-dhah         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long

CC = gcc

CFLAGS = -Wall -Wextra -Werror -g -fsanitize=address
LIBFT = libft/libft.a
PRINTF = ft_printf/libftprintf.a
MLX = mlx/libmlx.dylib

SRCS  =	check_parse.c \
		get_map.c \
		movments.c \
		movments1.c \
		parse_maps.c \
		putimage.c \
		render_next_frame.c \
		so_long.c \


OBJ = $(SRCS:%c=%o)

%.o : %.c
	$(CC) $(CFLAGS) -I. -Ift_printf -Ilibft -c $< -o $@

all: ${NAME}

$(NAME): $(OBJ) $(LIBFT) $(MLX) $(PRINTF)
	$(CC) $(CFLAGS) $(OBJ) $(PRINTF) -Lmlx -lmlx -framework OpenGL -framework AppKit -Llibft -lft ft_printf/libftprintf.a -o so_long

$(PRINTF):
	@make -C ./ft_printf

$(LIBFT):
	@make -C ./libft
	@make -C ./libft bonus
	

$(MLX):
	@make -C ./MLX
	cp $(MLX) .

clean:
	make -C ./libft clean
	make -C ./ft_printf clean
	make -C ./mlx clean
	rm -f $(OBJ)

fclean: clean
	make -C ./libft fclean
	make -C ./ft_printf fclean
	rm -f $(NAME) libmlx.dylib


re: fclean all

.PHONY: re clean fclean all
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_map.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-dhah < ral-dhah@student.42abudhabi.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 17:59:33 by ral-dhah          #+#    #+#             */
/*   Updated: 2023/01/06 17:17:56 by ral-dhah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

t_list	*read_map(char *str)
{
	int		fd;
	t_list	*list;
	char	*line;
	t_list	*el;

	fd = open(str, O_RDONLY);
	if (fd == -1)
		ft_error ();
	list = NULL;
	line = get_next_line(fd);
	if (line == NULL)
		ft_error ();
	if (ft_strlen(line) == 1 && *line == '\n')
		ft_error();
	line = ft_strtrim(line, "\n");
	while (line != NULL)
	{
		line = ft_strtrim(line, "\n");
		el = ft_lstnew(line);
		if (el == NULL)
			exit(1);
		ft_lstadd_back(&list, el);
		line = get_next_line(fd);
	}
	return (list);
}

void	draw_map(t_game *game)
{
	char	*line;
	int		col;
	int		size;
	int		row;
	t_list	*node;

	node = game->map;
	row = 0;
	size = 0;
	defin_image (game, size);
	while (node != NULL)
	{
		col = 0;
		line = node->content;
		while (line[col] != '\0')
		{
			choose_block(game, line[col], col, row);
			col++;
		}
		row++;
		node = node->next;
	}
}

void	defin_image(t_game	*game, int size)
{
	game->player = mlx_xpm_file_to_image(game->mlx, PLYAER, &size, &size);
	game->player1 = mlx_xpm_file_to_image(game->mlx, PLYAER1, &size, &size);
	game->col[0] = mlx_xpm_file_to_image(game->mlx, COIN, &size, &size);
	game->col[1] = mlx_xpm_file_to_image(game->mlx, COIN1, &size, &size);
	game->wall = mlx_xpm_file_to_image(game->mlx, WALL, &size, &size);
	game->exit = mlx_xpm_file_to_image(game->mlx, EXIT, &size, &size);
	game->grass = mlx_xpm_file_to_image(game->mlx, GRASS, &size, &size);
}

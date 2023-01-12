/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putimage.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-dhah < ral-dhah@student.42abudhabi.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 18:17:37 by ral-dhah          #+#    #+#             */
/*   Updated: 2023/01/06 15:17:42 by ral-dhah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	draw_image(t_game *game, void *img, int x, int y)
{
	int		size;
	char	*stps;

	size = 64;
	stps = ft_itoa(game->steps);
	x = x * (size - 1);
	y = y * (size - 1);
	mlx_put_image_to_window(game->mlx, game->win, game->grass, 0, 0);
	mlx_put_image_to_window(game->mlx, game->win, game->wall, 0, 0);
	mlx_string_put(game->mlx, game->win, 30, 40, 0x000000FF, "Moves");
	mlx_string_put(game->mlx, game->win, 30, 60, 0x000000FF, stps);
	mlx_put_image_to_window(game->mlx, game->win, img, x, y);
	free (stps);
}

void	choose_block(t_game *game, char c, int x, int y)
{
	if (c == '0')
		draw_image(game, game->grass, x, y);
	if (c == '1')
	{
		draw_image(game, game->grass, x, y);
		draw_image(game, game->wall, x, y);
	}
	if (c == 'C')
	{
		draw_image(game, game->grass, x, y);
		draw_image(game, game->col[1], x, y);
	}
	if (c == 'E')
		draw_image(game, game->exit, x, y);
	if (c == 'P')
	{
		draw_image(game, game->grass, x, y);
		draw_image(game, game->player, x, y);
	}
}

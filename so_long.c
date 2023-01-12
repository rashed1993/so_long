/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-dhah < ral-dhah@student.42abudhabi.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 15:26:19 by ral-dhah          #+#    #+#             */
/*   Updated: 2023/01/06 14:59:48 by ral-dhah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_close(t_game	*game)
{
	ft_printf("Thanks for playing\n");
	mlx_destroy_window(game->mlx, game->win);
	ft_lstclear (&game->map, free);
	mlx_destroy_image(game->mlx, game->img);
	exit(1);
}

int	ft_close2(t_game	*game)
{
	ft_printf("Moves = %d\n", game->steps);
	ft_printf("You have done %d of MOVES!\n", game->steps);
	ft_printf("You Won!\n");
	ft_lstclear (&game->map, free);
	mlx_destroy_image(game->mlx, game->img);
	mlx_destroy_window(game->mlx, game->win);
	exit(1);
}

int	main(int ac, char **av)
{
	t_game	game;

	(void)ac;
	game.steps = 0;
	game.face = 0;
	game.mlx = mlx_init();
	game.map = read_map (av[1]);
	final_check(game.map);
	game.win = mlx_new_window(game.mlx,
			ft_strlen((char *)game.map->content) * 63,
			ft_lstsize(game.map) * 63, "so_long");
	game.img = mlx_new_image(game.mlx, ft_strlen((char *)game.map->content)
			* 64, ft_strlen((char *)game.map->content) * 64);
	draw_map(&game);
	mlx_hook(game.win, 17, 0, ft_close, &game);
	mlx_hook(game.win, 2, 0, key_hook, &game);
	mlx_loop_hook(game.mlx, render_next_frame, &game);
	mlx_loop(game.mlx);
	ft_lstclear (&game.map, free);
	mlx_destroy_window(game.mlx, game.win);
	mlx_destroy_image(game.mlx, game.img);
}

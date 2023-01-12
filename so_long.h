/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-dhah < ral-dhah@student.42abudhabi.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 14:07:11 by ral-dhah          #+#    #+#             */
/*   Updated: 2023/01/06 15:16:46 by ral-dhah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "libft/libft.h"
# include "ft_printf/ft_printf.h"
# include <stdio.h>
# include <fcntl.h>
# include <stdio.h>
# include "mlx/mlx.h"

# define PLYAER "./Charecter.xpm"
# define PLYAER1 "./Charecter1.xpm"
# define COIN	"./Coin.xpm"
# define COIN1	"./Coin1.xpm"
# define WALL	"./Wall.xpm"
# define EXIT	"./Exit.xpm"
# define GRASS	"./Grass.xpm"

typedef struct s_game
{
	void	*img;
	void	*mlx;
	void	*win;
	t_list	*map;
	void	*player;
	void	*player1;
	int		coins;
	void	*wall;
	void	*exit;
	void	*grass;
	int		steps;
	int		face;
	void	*col[2];
	int		x_p;
	int		y_p;
	int		count_collectibles;
}t_game;

int		count_exits(t_list *map);
int		y_pos(t_list *map);
int		x_pos(t_list *map);
int		count_collectibles(t_list *map);
int		count_players(t_list *map);
int		is_rectangular(t_list *map);
int		check_chars(t_list *map);
int		check_walls(t_list *map);
int		final_check(t_list *map);
int		move_right(t_game *game);
int		move_right_helper(t_game *game, char *line, int i, int line_num);
void	defin_image(t_game	*game, int size);
int		ft_close2(t_game	*game);
int		move_up(t_game *game);
int		move_up_helper(t_list **nodes, t_game *game, int i, int cnt);
int		move_left(t_game *game);
int		move_left_helper(t_game *game, char *line, int i, int line_num);
int		move_down(t_game *game);
int		move_down_helper(t_list *node, t_game *game, int i, int cnt);
void	put_wall(t_list *map, char c, int x, int y);
void	Put_player(t_list *map, char c, int x, int y);
void	draw_map(t_game *game);
void	draw_image(t_game *game, void *img, int x, int y);
void	choose_block(t_game *game, char c, int x, int y);
t_list	*read_map(char *str);
int		key_hook(int keycode, t_game *game);
int		ft_close(t_game	*game);
void	ft_error(void);
int		render_next_frame(t_game	*game);
int		move_up_helper2(t_list **nodes, t_game *game, int i);
int		move_down_helper2(t_list *node, t_game *game, int i);
#endif

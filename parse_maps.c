/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_maps.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-dhah < ral-dhah@student.42abudhabi.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 17:12:16 by ral-dhah          #+#    #+#             */
/*   Updated: 2023/01/04 18:15:44 by ral-dhah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	count_exits(t_list	*map)
{
	char	*line;
	int		num_exits;
	int		i;

	num_exits = 0;
	while (map != NULL)
	{
		line = map->content;
		i = 0;
		while (line[i] != '\0')
		{
			if (line[i] == 'E')
				num_exits++;
			i++;
		}
		map = map->next;
	}
	return (num_exits);
}

int	count_collectibles(t_list	*map)
{
	char	*line;
	int		num_collectibles;
	int		i;

	num_collectibles = 0;
	while (map != NULL)
	{
		line = map->content;
		i = 0;
		while (line[i] != '\0')
		{
			if (line[i] == 'C')
				num_collectibles++;
			i++;
		}
		map = map->next;
	}
	return (num_collectibles);
}

int	count_players(t_list	*map)
{
	char	*line;
	int		num_players;
	int		i;

	num_players = 0;
	while (map != NULL)
	{
		line = map->content;
		i = 0;
		while (line[i] != '\0')
		{
			if (line[i] == 'P')
				num_players++;
			i++;
		}
		map = map->next;
	}
	return (num_players);
}

int	is_rectangular(t_list	*map)
{
	t_list	*node;
	int		len1;
	int		len2;

	node = map;
	while (node->next)
	{
		len1 = ft_strlen((char *)node->content);
		len2 = ft_strlen((char *)node->next->content);
		if (len1 != len2)
			return (0);
		node = node->next;
	}
	return (1);
}

int	check_chars(t_list	*map)
{
	int		i;
	char	*line;

	while (map != NULL)
	{
		i = 0;
		line = map->content;
		while (line[i] != '\0')
		{
			if (ft_strchr("01ECP", line[i]) == NULL)
				return (0);
			i++;
		}
		map = map->next;
	}
	return (1);
}

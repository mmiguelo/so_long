/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiguelo <mmiguelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 11:14:05 by mmiguelo          #+#    #+#             */
/*   Updated: 2025/01/08 15:09:18 by mmiguelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "so_long.h"

void	validate_boarders(t_map *game)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (i < game->height)
	{
		j = 0;
		while (j < game->width)
		{
			if (i == 0 || i == game ->height - 1)
				if (game->map[i][j] != '1')
					ft_kill(4);
			if (j == 0 || j == game->width -1)
				if (game->map[i][j] != '1')
					ft_kill(4);
			j++;
		}
		i++;
	}
}

void	validate_size(t_map *game)
{
	size_t	i;

	i = -1;
	while (++i < game->height)
	{
		if (count_width(game->map[i]) != game->width)
			ft_kill(3);
		if (game->width + game->height < 8 || game->width < 5 || game->height < 3)
			ft_kill(3);
	}
}

void	validate_assets(t_map *game)
{
	size_t	i;
	size_t	j;
	int player;
	int exit;
	
	player = 0;
	exit = 0;
	i = -1;
	while (++i < game->height)
	{
		j = -1;
		while (++j < game->width)
		{
			if (game->map[i][j] == 'P')
				player++;
			if (game->map[i][j] == 'E')
				exit++;
		}
	}
	if (player != 1)
		ft_kill(6);
	if (exit != 1)
		ft_kill(7);
}

void	validate_elements(t_map *game)
{
	size_t i;
	size_t j;

	i = -1;
	while (++i < game->height)
	{
		j = -1;
		while (++j < game->width)
		{
			if (game->map[i][j] != '1'
				&& game->map[i][j] != '0'
				&& game->map[i][j] != 'P'
				&& game->map[i][j] != 'E'
				&& game->map[i][j] != 'C')
				ft_kill(8);
		}
	}
}

void	validate_map(t_map *game)
{
	validate_boarders(game); // check boarders
	validate_size(game); // check map size
	validate_assets(game); // check assets
	validate_elements(game); // check map content
/* 	validate_path(game); // check valid path
	validate_collectibles(game); //check amount of collectibles */
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiguelo <mmiguelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 11:14:05 by mmiguelo          #+#    #+#             */
/*   Updated: 2025/01/10 16:33:48 by mmiguelo         ###   ########.fr       */
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
			if (i == 0 || i == game->height - 1)
				if (game->map[i][j] != '1')
					ft_kill(4, game);
			if (j == 0 || j == game->width -1)
				if (game->map[i][j] != '1')
					ft_kill(4, game);
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
			ft_kill(3, game);
		if (game->width + game->height < 8
			|| game->width < 5 || game->height < 3)
			ft_kill(3, game);
	}
}

void	validate_assets(t_map *game)
{
	size_t	i;
	size_t	j;
	int		player;
	int		exit;

	player = 0;
	exit = 0;
	i = -1;
	while (++i < game->height)
	{
		j = -1;
		while (++j < game->width)
		{
			player += (game->map[i][j] == 'P');
			exit += (game->map[i][j] == 'E');
			if (game->map[i][j] == 'P')
				game->player = (t_cell){j, i};
			if (game->map[i][j] == 'E')
				game->exit = (t_cell){j, i};
		}
	}
	if (player != 1)
		ft_kill(6, game);
	if (exit != 1)
		ft_kill(7, game);
}

void	validate_elements(t_map *game)
{
	size_t	i;
	size_t	j;

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
				ft_kill(8, game);
		}
	}
}

void	validate_map(t_map *game)
{
	validate_boarders(game);
	validate_size(game);
	validate_assets(game);
	validate_elements(game);
	validate_collectibles(game);
	validate_path(game);
}

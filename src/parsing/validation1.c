/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiguelo <mmiguelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 15:18:42 by mmiguelo          #+#    #+#             */
/*   Updated: 2025/01/10 17:08:04 by mmiguelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	validate_collectibles(t_map *game)
{
	size_t	i;
	size_t	j;

	i = -1;
	while (++i < game->height)
	{
		j = -1;
		while (++j < game->width)
		{
			if (game->map[i][j] == 'C')
				game->collectibles++;
		}
	}
	if (game->collectibles < 1)
		ft_kill(9, game);
}

void	ft_flood_fill(char **duplicate, t_map *game, size_t x, size_t y)
{
	if (x < 0 || y < 0 || x >= game->width || y >= game->height)
		return ;
	if (duplicate[y][x] == 'C')
	{
		game->gathered++;
		duplicate[y][x] = 'F';
	}
	if (duplicate[y][x] == '1' || duplicate[y][x] == 'F')
		return ;
	if (duplicate[y][x] == 'E' && game->collectibles != game->gathered)
	{
		game->exit--;
		duplicate[y][x] = 'F';
		return ;
	}
	else
		duplicate[y][x] = 'F';
	ft_flood_fill(duplicate, game, x + 1, y);
	ft_flood_fill(duplicate, game, x - 1, y);
	ft_flood_fill(duplicate, game, x, y + 1);
	ft_flood_fill(duplicate, game, x, y - 1);
}

void	validate_path(t_map *game)
{
	char		**duplicate;
	size_t		i;

	duplicate = calloc(game->height + 1, sizeof(char *));
	if (!duplicate)
		ft_kill(5, game);
	i = -1;
	while (++i < game->height)
		duplicate[i] = ft_strdup(game->map[i]);
	ft_flood_fill(duplicate, game, game->player.x, game->player.y);
	if (game->collectibles != game->gathered || game->exit)
		ft_kill(10, game);
}

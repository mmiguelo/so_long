/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movement.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiguelo <mmiguelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 13:55:51 by mmiguelo          #+#    #+#             */
/*   Updated: 2025/01/21 14:49:53 by mmiguelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	move_up(t_map *game)
{
	if (game->map[game->player.y - 1][game->player.x] == '1')
		return ;
	if (game->map[game->player.y - 1][game->player.x] == 'C')
	{
		game->player.y--;
		game->collectibles--;
		game->movement++;
	}
	if (game->map[game->player.y - 1][game->player.x] == 'E')
	{
		if (game->collectibles == 0)
		{
			game->player.y--;
			game->movement++;
			ft_kill(0, game);
		}
		game->player.y--;
		game->movement++;
	}
}

void	move_down(t_map *game)
{
	if (game->map[game->player.y + 1][game->player.x] == '1')
		return ;
	if (game->map[game->player.y + 1][game->player.x] == 'C')
	{
		game->player.y++;
		game->collectibles--;
		game->movement++;
	}
	if (game->map[game->player.y + 1][game->player.x] == 'E')
	{
		if (game->collectibles == 0)
		{
			game->player.y++;
			game->movement++;
			ft_kill(0, game);
		}
		game->player.y++;
		game->movement++;
	}
}

void	move_left(t_map *game)
{
	if (game->map[game->player.y][game->player.x - 1] == '1')
		return ;
	if (game->map[game->player.y][game->player.x - 1] == 'C')
	{
		game->player.x--;
		game->collectibles--;
		game->movement++;
	}
	if (game->map[game->player.y][game->player.x - 1] == 'E')
	{
		if (game->collectibles == 0)
		{
			game->player.x--;
			game->movement++;
			ft_kill(0, game);
		}
		game->player.x--;
		game->movement++;
	}
}

void	moe_right(t_map *game)
{
	if (game->map[game->player.y][game->player.x + 1] == '1')
		return ;
	if (game->map[game->player.y][game->player.x + 1] == 'C')
	{
		game->player.x++;
		game->collectibles--;
		game->movement++;
	}
	if (game->map[game->player.y][game->player.x + 1] == 'E')
	{
		if (game->collectibles == 0)
		{
			game->player.x++;
			game->movement++;
			ft_kill(0, game);
		}
		game->player.x++;
		game->movement++;
	}
}

/* void	check_moves(t_map *game)
{
	if (game->map())
} */
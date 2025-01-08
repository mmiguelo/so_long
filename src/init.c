/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiguelo <mmiguelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 12:33:24 by mmiguelo          #+#    #+#             */
/*   Updated: 2025/01/08 16:54:14 by mmiguelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	init_game(t_map *game)
{
	ft_memset(game, 0, sizeof(t_map));
	ft_memset(&game->player, 0, sizeof(t_cell));
	ft_memset(&game->exit, 0, sizeof(t_cell));
}

t_map	*init(void)
{
	t_map	*game;

	game = malloc(sizeof(t_map));
	if (!game)
		ft_kill(5);
	init_game(game);
	return (game);
}

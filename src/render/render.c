/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiguelo <mmiguelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 12:26:57 by mmiguelo          #+#    #+#             */
/*   Updated: 2025/01/20 13:03:21 by mmiguelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	open_window(t_map *game)
{
	if (game->mlx_ptr == NULL)
		ft_kill(10, game);
	game->win_ptr = mlx_new_window(game->mlx_ptr, game->width * SIZE, game->height * SIZE, "so_long");
}
void	render(t_map *game)
{
	
}
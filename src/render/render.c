/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiguelo <mmiguelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 12:26:57 by mmiguelo          #+#    #+#             */
/*   Updated: 2025/01/20 14:06:55 by mmiguelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	open_window(t_map *game)
{
	if (game->mlx_ptr == NULL)
		ft_kill(10, game);
	game->win_ptr = mlx_new_window(game->mlx_ptr, game->width * SIZE,
			game->height * SIZE, "so_long");
	if (game->win_ptr == NULL)
		ft_kill(10, game);
	game->image.img = mlx_new_image(game->mlx_ptr, game->width * SIZE,
			game->height * SIZE);
	game->image.addr = mlx_get_data_addr(game->image.img,
			&game->image.bits_per_pixel, &game->image.line_length,
			&game->image.endian);
}

void	render(t_map *game)
{
	open_window(game);
	if (!game->win_ptr)
		ft_kill(10, game);
	
}

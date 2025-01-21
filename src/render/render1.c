/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiguelo <mmiguelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 10:22:09 by mmiguelo          #+#    #+#             */
/*   Updated: 2025/01/21 17:43:05 by mmiguelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	render_image(t_map *game, char *xpm, int x, int y)
{
	/* if (game->image.img)
	{
		mlx_destroy_image(game->mlx_ptr, game->image.img);
		game->image.img = 0;
	} */
	game->image.img = mlx_xpm_file_to_image(game->mlx_ptr, xpm, &x, &y);
	mlx_put_image_to_window(game->mlx_ptr, game->win_ptr, game->image.img, 
					x, y);
}

void	insert_wall(t_map *game, int x, int y)
{
	if (x == '0')
		render_image(game, "textures/brick_wall.xpm", x * SIZE, y * SIZE);
}

void	insert_floor(t_map *game, int x, int y)
{
	if (game->map[y][x] == '0')
		render_image(game, "textures/floor1.xpm", x * SIZE, y * SIZE);
}
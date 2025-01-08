/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiguelo <mmiguelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 15:18:42 by mmiguelo          #+#    #+#             */
/*   Updated: 2025/01/08 16:58:59 by mmiguelo         ###   ########.fr       */
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
		ft_kill(9);
}

void	validate_path(t_map *game)
{

}

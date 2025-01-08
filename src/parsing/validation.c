/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiguelo <mmiguelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 11:14:05 by mmiguelo          #+#    #+#             */
/*   Updated: 2025/01/08 11:14:06 by mmiguelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "so_long.h"

void	validate_boarders(t_map *game)
{
	int	i;
	int	j;

	i = 0;
	while (i < game->height)
	{
		j = 0;
		while (j < game->width)
		{
			if (i == 0 || i == game ->height - 1)
				if (game->map[i][j] != '1')
					ft_kill(4);
		}
	}
}

void	validate_map(t_map *game)
{
	validate_boarders(game); // check boarders
	validate_size(game); // check map size
	validate_elements(game); // check map content
	validate_path(game); // check valid path
	validate_collectibles(game); //check amount of collectibles
	validate_P_E(game); // check assets
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiguelo <mmiguelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 11:14:05 by mmiguelo          #+#    #+#             */
/*   Updated: 2025/01/08 12:24:40 by mmiguelo         ###   ########.fr       */
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

	i = 0;
	while (i < game->height)
	{
		if (ft_strlen(game->map[i]) != game->width)
			ft_kill(3);
	}
}

void	validate_map(t_map *game)
{
	validate_boarders(game); // check boarders
	validate_size(game); // check map size
	/* validate_elements(game); // check map content
	validate_path(game); // check valid path
	validate_collectibles(game); //check amount of collectibles
	validate_P_E(game); // check assets */
}

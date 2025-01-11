/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiguelo <mmiguelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 16:53:02 by mmiguelo          #+#    #+#             */
/*   Updated: 2025/01/11 17:29:00 by mmiguelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

/* void	ft_free_map(t_map *game)
{
	
} */

void	ft_free_array(char **duplicate, size_t height)
{
	size_t	y;

	y = 0;
	if (duplicate)
	{
		while (y < height)
		{
			free(duplicate[y]);
			y++;
		}
		free(duplicate);
	}
}

void	ft_free_map(t_map *game)
{
	size_t	y;

	y = 0;
	if (game->map)
	{
		while (game->map)
		{
			free(game->map[y]);
			y++;
		}
		free(game->map);
	}
	free(game);
}

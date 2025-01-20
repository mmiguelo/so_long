/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiguelo <mmiguelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 16:53:02 by mmiguelo          #+#    #+#             */
/*   Updated: 2025/01/20 13:14:38 by mmiguelo         ###   ########.fr       */
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
	if(!duplicate[0])
	{
		free(duplicate);
		return ;
	}
	while (y < height)
	{
		free(duplicate[y]);
		y++;
	}
	free(duplicate);
}

void	ft_free_map(t_map *game)
{
	size_t	y;

	y = 0;
	if(!game->map[0])
	{
		free(game->map);
		return ;
	}
	while (y < game->height)
	{
		free(game->map[y]);
		y++;
	}
	free(game->map);
}

void	ft_free_all(t_map *game)
{
	if(!game)
		return ;
	if(game->map)
		ft_free_map(game);
	free(game);
	exit(1);
}

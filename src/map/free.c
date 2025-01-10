/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiguelo <mmiguelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 16:53:02 by mmiguelo          #+#    #+#             */
/*   Updated: 2025/01/10 17:08:16 by mmiguelo         ###   ########.fr       */
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
	while (duplicate)
	{
		free(duplicate[y]);
		y++;
	}
	free(duplicate);
}

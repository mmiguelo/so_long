/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   kill.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiguelo <mmiguelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 11:31:01 by mmiguelo          #+#    #+#             */
/*   Updated: 2025/01/10 16:23:13 by mmiguelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_kill(int number, t_map *game)
{
	ft_printf("Error\n");
	if (number == 1)
		ft_printf("%s\n", EXTENSION_ERROR);
	if (number == 2)
		ft_printf("%s\n", MAP_ERROR);
	if (number == 3)
		ft_printf("%s\n", SIZE_ERROR); // malloc game
	if (number == 4)
		ft_printf("%s\n", BOARDER_ERROR); // malloc game
	if (number == 5)
		ft_printf("%s\n", MALLOC_ERROR); // malloc game
	if (number == 6)
		ft_printf("%s\n", PLAYER_ERROR); // malloc game
	if (number == 7)
		ft_printf("%s\n", ASSETS_ERROR); // malloc game
	if (number == 8)
		ft_printf("%s\n", COLLECTIBLES_ERROR); // malloc game
	if (number > 2)
		ft_free_map(game);
	exit(1);
}

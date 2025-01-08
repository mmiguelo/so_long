/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   kill.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiguelo <mmiguelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 11:31:01 by mmiguelo          #+#    #+#             */
/*   Updated: 2025/01/08 15:26:26 by mmiguelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_kill(int number)
{
	ft_printf("Error\n");
	if (number == 1)
		ft_printf("%s\n", EXTENSION_ERROR);
	if (number == 2)
		ft_printf("%s\n", MAP_ERROR);
	if (number == 3)
		ft_printf("%s\n", SIZE_ERROR);
	if (number == 4)
		ft_printf("%s\n", BOARDER_ERROR);
	if (number == 5)
		ft_printf("%s\n", MALLOC_ERROR);
	if (number == 6)
		ft_printf("%s\n", PLAYER_ERROR);
	if (number == 7)
		ft_printf("%s\n", EXIT_ERROR);
	if (number == 8)
		ft_printf("%s\n", ASSETS_ERROR);
	if (number == 9)
		ft_printf("%s\n", COLLECTIBLES_ERROR);
	exit(1);
}

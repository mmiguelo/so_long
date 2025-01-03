/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   kill.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiguelo <mmiguelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 11:31:01 by mmiguelo          #+#    #+#             */
/*   Updated: 2025/01/03 12:07:15 by mmiguelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	kill(int number)
{
	ft_printf("Error\n");
	if (number == 1)
		ft_printf("%s\n", EXTENSION_ERROR);
	if (number == 2)
		ft_printf("%s\n", MAP_ERROR);
	exit(1);
}

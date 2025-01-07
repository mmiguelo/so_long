/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiguelo <mmiguelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 15:34:53 by mmiguelo          #+#    #+#             */
/*   Updated: 2025/01/07 15:54:14 by mmiguelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	validate_map(t_map *game)
{
	validate_boarders(game); // check boarders
	validate_size(game); // check map size
	validate_elements(game); // check map content
	validate_path(game); // check valid path
	validate_collectibles(game); //check amount of collectibles
	validate_P_E(game); // check assets
}

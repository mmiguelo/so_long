/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extension.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiguelo <mmiguelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 11:22:56 by mmiguelo          #+#    #+#             */
/*   Updated: 2025/01/10 16:33:26 by mmiguelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	check_extension(char *file)
{
	if (ft_strcmp((file + (ft_strlen(file) - 4)), ".ber") != 0)
		ft_kill (1, NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiguelo <mmiguelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 16:56:06 by mmiguelo          #+#    #+#             */
/*   Updated: 2025/01/03 13:42:42 by mmiguelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "../my_libft/libft.h"

# define EXTENSION_ERROR "map extension is wrong. correct map extension is .ber"
# define MAP_ERROR "couldn't open map"

typedef struct s_map
{
	int		width;
	int		height;
}	t_map;

/*=============================================================================#
#                               GENERAL                                        #
#=============================================================================*/

void	ft_kill(int number);
void	read_map(char **argv, t_map game);

/*=============================================================================#
#                               CHECKERS                                       #
#=============================================================================*/

void	check_extension(char *file);

#endif
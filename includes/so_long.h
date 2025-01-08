/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiguelo <mmiguelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 16:56:06 by mmiguelo          #+#    #+#             */
/*   Updated: 2025/01/08 11:11:19 by mmiguelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "../my_libft/libft.h"

# define EXTENSION_ERROR "map extension is wrong. correct map extension is .ber"
# define MAP_ERROR "couldn't open map"
# define SIZE_ERROR "size of the map is wrong"
# define BOARDER_ERROR "map is not surrounded by walls"

typedef struct s_player
{
	int	x;
	int	y;
}	t_player;

typedef struct s_map
{
	size_t			width;
	int				height;
	int				collectibles;
	int				exit;
	int				movement;
	char			**map;
	t_player		player;
}					t_map;

/*=============================================================================#
#                               GENERAL                                        #
#=============================================================================*/

void	ft_kill(int number);
void	read_map(char *argv, t_map *game);
void	initialize_game(t_map *game);
void	copy_map(int fd, t_map *game);

/*=============================================================================#
#                               CHECKERS                                       #
#=============================================================================*/

void	check_extension(char *file);
void	validate_map(t_map *game);

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiguelo <mmiguelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 16:56:06 by mmiguelo          #+#    #+#             */
/*   Updated: 2025/01/08 11:35:43 by mmiguelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "../my_libft/libft.h"

# define EXTENSION_ERROR "map extension is wrong. correct map extension is .ber"
# define MAP_ERROR "couldn't open map"
# define SIZE_ERROR "size of the map is wrong"
# define BOARDER_ERROR "map is not surrounded by walls"
# define ASSETS_ERROR "map is missing assets"
# define PATH_ERROR "map has no valid path"
# define COLLECTIBLES_ERROR "map has no collectibles"
# define PLAYER_ERROR "map has no player"
# define EXIT_ERROR "map has no exit"
# define MOVEMENT_ERROR "map has no movement"


typedef struct s_player
{
	int	x;
	int	y;
}	t_player;

typedef struct s_map
{
	int			width;
	int			height;
	int			collectibles;
	int			exit;
	int			movement;
	char		**map;
	t_player	player;
}				t_map;

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
void	validate_boarders(t_map *game);

#endif
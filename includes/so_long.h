/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiguelo <mmiguelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 16:56:06 by mmiguelo          #+#    #+#             */
/*   Updated: 2025/01/11 17:24:39 by mmiguelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "../my_libft/libft.h"

# define EXTENSION_ERROR "map extension is wrong. correct map extension is .ber"
# define MAP_ERROR "couldn't open map"
# define SIZE_ERROR "size of the map is wrong"
# define BOARDER_ERROR "map is not surrounded by walls"
# define MALLOC_ERROR "memory allocation failed"
# define PLAYER_ERROR "Map has to be one player"
# define EXIT_ERROR "Map has to be one exit"
# define ASSETS_ERROR "The assets in the map are wrong"
# define COLLECTIBLES_ERROR "map has no collectibles"
# define PATH_ERROR "map has no valid path"
# define MOVEMENT_ERROR "map has no movement"

typedef struct s_point
{
	int	x; // width
	int	y; // height
}	t_cell;

typedef struct t_point
{
	size_t		width;
	size_t		height;
	size_t		collectibles;
	size_t		gathered;
	int			movement;
	char		**map;
	t_cell		player;
	int			exit;
}				t_map;

/*=============================================================================#
#                               GENERAL                                        #
#=============================================================================*/

t_map	*init(void);
void	init_game(t_map *game);
void	read_map(char *argv, t_map *game);
size_t	count_width(const char *str);
size_t	count_lines(char *file);
void	copy_map(int fd, t_map *game);
void	ft_free_array(char **duplicate, size_t height);
void	ft_free_map(t_map *game);
void	ft_kill(int number, t_map *game);

/*=============================================================================#
#                               CHECKERS                                       #
#=============================================================================*/

void	check_extension(char *file);
void	validate_map(t_map *game);
void	validate_boarders(t_map *game);
void	validate_size(t_map *game);
void	validate_assets(t_map *game);
void	validate_elements(t_map *game);
void	validate_collectibles(t_map *game);
void	validate_path(t_map *game);
void	ft_flood_fill(char **duplicate, t_map *game, size_t x, size_t y);

#endif
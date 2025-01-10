/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiguelo <mmiguelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 13:00:50 by mmiguelo          #+#    #+#             */
/*   Updated: 2025/01/10 16:27:05 by mmiguelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

size_t	count_width(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\n' && str[i] != '\r' && str[i] != '\0')
		i++;
	return (i);
}

size_t	count_lines(char *file)
{
	size_t		lines;
	int			fd;
	char		*temp;

	lines = 0;
	fd = open(file, O_RDONLY);
	if (fd < 0)
		ft_kill (2);
	temp = get_next_line(fd);
	while (temp)
	{
		lines++;
		free(temp);
		temp = get_next_line(fd);
	}
	close(fd);
	return (lines);
}

void	copy_map(int fd, t_map *game)
{
	int		i;
	char	*temp;

	i = 0;
	temp = get_next_line(fd);
	while (temp)
	{
		game->map[i] = ft_strdup(temp);
		free(temp);
		temp = get_next_line(fd);
		i++;
	}
	game->map[i] = NULL;
}

void	read_map(char *file, t_map *game)
{
	int		fd;

	game->height = count_lines(file);
	if (game->height <= 0)
		ft_kill(3);
	fd = open(file, O_RDONLY);
	if (fd < 0)
		ft_kill(2);
	game->map = ft_calloc(game->height + 1, sizeof(char *));
	if (!game->map)
		ft_kill(6);
	copy_map(fd, game);
	game->width = count_width(game->map[0]);
	close(fd);
}

void	ft_free_map(t_map *game)
{
	size_t	y;

	y = -1;
	while (++y < game->height)
		free(game->map[y]);
	free(game->map);
}

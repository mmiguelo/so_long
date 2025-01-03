/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiguelo <mmiguelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 13:00:50 by mmiguelo          #+#    #+#             */
/*   Updated: 2025/01/03 14:55:55 by mmiguelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	count_lines(char *file)
{
	int		lines;
	int		fd;
	char	*temp;

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

void	read_map(char *file, t_map *game)
{
	int	fd;

	game->height = count_lines(file);
	fd = open(file, O_RDONLY);
	if (fd < 0)
		ft_kill (2);
	game->map = (char **)malloc(sizeof(char *) * game->height);
	if (!game->map)
		ft_kill(3);
	game->width = ft_strlen(get_next_line(fd));
	close(fd);
}

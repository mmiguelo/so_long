/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiguelo <mmiguelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 13:00:50 by mmiguelo          #+#    #+#             */
/*   Updated: 2025/01/03 13:48:30 by mmiguelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "so_long.h"

int count_lines(char *file)
{
	int lines;
	int fd;
	char *temp;

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
	return(lines);
}

void	read_map(char **argv, t_map game)
{
	int fd;
}
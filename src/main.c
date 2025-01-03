/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiguelo <mmiguelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 11:30:19 by mmiguelo          #+#    #+#             */
/*   Updated: 2025/01/03 16:32:18 by mmiguelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int argc, char **argv)
{
	int		fd;
	t_map	*game;

	if (argc == 2)
	{
		check_extension(argv[1]);
		game = malloc(1 * sizeof(t_map));
		fd = open(argv[1], O_RDONLY);
		if (fd == -1)
			ft_kill (2);
		read_map(argv[1], game);
	}
	return (0);
}

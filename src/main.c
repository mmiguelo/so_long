/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiguelo <mmiguelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 11:30:19 by mmiguelo          #+#    #+#             */
/*   Updated: 2025/01/08 13:03:26 by mmiguelo         ###   ########.fr       */
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
		fd = open(argv[1], O_RDONLY);
		if (fd == -1)
			ft_kill (2);
		game = init();
	/* 	read_map(argv[1], game);
		validate_map(game); */
		printf("\nx=%d\ny=%d\n", game->coordenates.x, game->coordenates.y);
	}
	return (0);
}

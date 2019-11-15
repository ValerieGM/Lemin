/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzungula <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/26 09:58:30 by yzungula          #+#    #+#             */
/*   Updated: 2019/11/15 15:42:59 by vgongora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/lemin.h"

void		init_farm(t_farm *farm)
{
	farm->nb_ants = 0;
	farm->nb_rooms = 0;
	farm->line = NULL;
	farm->start_name = NULL;
	farm->end_name = NULL;
	farm->rooms = NULL;
	farm->file = NULL;
}

int			main(void)
{
	t_farm	farm;
	t_path	*path;

	init_farm(&farm);
	get_num_ants(&farm);
	parse_rooms(&farm);
	parse_links(&farm);
	check_error(&farm);
	print_file(farm.file);
	path = find_start(&farm);
	print_path(path, &farm);
	map_to_valhalla(path);
}

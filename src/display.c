/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgongora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 15:27:59 by vgongora          #+#    #+#             */
/*   Updated: 2019/11/15 15:44:05 by vgongora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/lemin.h"

void        print_links(t_room *rooms)
{
	t_room  *room;
	t_link  *link;

	room = rooms;
	while (room)
	{
		link = room->link;
		printf("\nNAME: %s ADDRESS:%p\n", room->name, room);
		printf("=--------------------------------------=\n");
		while (link)
		{
			printf("--->Name:%s Address: %p\n", link->room->name, link->room);
			link = link->next;
		}
		room = room->next;
	}
}

void        print_ants(t_path *path, int ant)
{
	ft_putchar('L');
	ft_putnbr(ant);
	ft_putchar('-');
	ft_putstr(path->name);
	ft_putchar(' ');
}

void        print_path(t_path *valhalla, t_farm *farm)
{
	int counter;
	t_path *valkyrie;

	counter = 1;
	valkyrie = NULL;
	while (counter <= farm->nb_ants)
	{
		valkyrie = valhalla;
		while (valkyrie)
		{
			print_ants(valkyrie, counter);
			valkyrie = valkyrie->next;
		}
		ft_putendl("");
		counter++;
	}
}

void	map_to_valhalla(t_path *valhalla)
{
	while (valhalla)
	{
		ft_putstr(valhalla->name);
		if (valhalla->next)
			ft_putstr("->");
		valhalla = valhalla->next;
	}
}

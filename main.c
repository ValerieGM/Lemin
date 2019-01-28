/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgongora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/30 01:03:11 by vgongora          #+#    #+#             */
/*   Updated: 2018/11/02 23:02:36 by vgongora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem.h"

void	init(t_lem *lib)
{
	lib->ants = -1;
	lib->start = NULL;
	lib->end = NULL;
}

int		er(void)
{
	ft_putendl_fd("ERROR", 2);
	return (0);
}

int		main(void)
{
	int		v;
	char	**str;
	t_lem	lib;

	str = rdmap();
	if (*str == NULL)
		return (er());
	init(&lib);
	rd(str, &lib);
	v = -1;
	if (lib.start == NULL || lib.end == NULL || lib.ants <= 0)
		return (er());
	else
	{
		while (str[++v] != NULL)
			ft_putendl(str[v]);
	}
	return (0);
}

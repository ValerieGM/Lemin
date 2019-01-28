/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgongora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/29 22:00:33 by vgongora          #+#    #+#             */
/*   Updated: 2018/11/02 23:09:48 by vgongora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem.h"

char			**rdmap(void)
{
	int		v;
	char	*s;
	char	**str;
	char	temp[32];

	s = (char *)malloc(sizeof(char));
	*s = '\0';
	while ((v = read(0, temp, 32)) != 0)
	{
		temp[v] = '\0';
		s = ft_strjoin(s, temp);
	}
	str = ft_strsplit(s, '\n');
	if (str == NULL)
		return (NULL);
	return (str);
}

static int		ants(char **str, t_lem *lib)
{
	int v;

	v = 0;
	while (str[0][v] != '\0')
	{
		if (str[0][v++] == 0)
			return (-1);
	}
	str[0][v] = '\0';
	lib->ants = ft_atoi(str[0]);
	return (1);
}

static char		*cp(char *src, char *dest)
{
	int v;
	int t;

	v = 0;
	t = -1;
	while (src[v] && src[v] != ' ')
		v++;
	if (v > 0)
	{
		dest = (char *)malloc(sizeof(char) * v + sizeof(char));
		if (dest == NULL)
			return (NULL);
		while (++t < v)
			dest[t] = src[t];
		dest[v] = '\0';
		return (dest);
	}
	return (NULL);
}

static void		stend(char **str, t_lem *lib)
{
	int v;

	v = 0;
	while (str[v] && str[v + 1])
	{
		if (ft_strcmp("##start", str[v]) == 0)
			lib->start = cp(str[v + 1], lib->start);
		if (ft_strcmp("##end", str[v]) == 0)
			lib->end = cp(str[v + 1], lib->end);
		v++;
	}
}

void			rd(char **str, t_lem *lib)
{
	ants(str, lib);
	stend(str, lib);
}

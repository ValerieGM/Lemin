/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lem.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgongora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/29 21:56:31 by vgongora          #+#    #+#             */
/*   Updated: 2018/11/02 22:49:18 by vgongora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LEM_H
# define LEM_H

# include "./libft/libft.h"
# include <stdio.h>

typedef struct		s_lem
{
	int				ants;
	char			*start;
	char			*end;
}					t_lem;

char				**rdmap(void);
void				rd(char **str, t_lem *lib);

#endif

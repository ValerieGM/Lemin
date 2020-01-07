/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_2D_array_size.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzungula <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/22 14:37:10 by yzungula          #+#    #+#             */
/*   Updated: 2018/09/22 14:37:12 by yzungula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_get_2D_array_size(char **arr)
{
	int		size;

	size = 0;
	while (arr[size])
		size++;
	return (size);
}

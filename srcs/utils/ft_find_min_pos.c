/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_min_pos.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlafarge <nlafarge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 22:40:36 by nlafarge          #+#    #+#             */
/*   Updated: 2021/08/31 01:42:34 by nlafarge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	ft_find_min_pos(int *tab, int len)
{
	int	i;
	int	min;
	int	pos;

	i = 0;
	pos = 0;
	min = INT_MAX;
	while (i < len)
	{
		if (tab[i] < min)
		{
			min = tab[i];
			pos = i;
		}
		i++;
	}
	return (pos);
}

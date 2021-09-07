/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_range.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathanlafarge <nathanlafarge@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 03:10:45 by nathanlafar       #+#    #+#             */
/*   Updated: 2021/09/07 02:19:33 by nathanlafar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	ft_find_range(int *tab, int size)
{
	int	min;
	int	max;
	int	i;

	i = 0;
	min = INT_MAX;
	max = INT_MIN;
	while (i < size)
	{
		if (tab[i] < min)
			min = tab[i];
		if (tab[i] > max)
			max = tab[i];
		i++;
	}
	return (max - min);
}

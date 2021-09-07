/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_hundred.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathanlafarge <nathanlafarge@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 01:44:07 by nlafarge          #+#    #+#             */
/*   Updated: 2021/09/07 02:25:02 by nathanlafar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	ft_sort_hundred(t_ps *ps, int chuncks)
{
	int	range;

	ft_create_sorted_list(ps);
	range = ps->tab_a.size / chuncks;
	printf("%d", range);
}

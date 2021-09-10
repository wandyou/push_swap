/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathanlafarge <nathanlafarge@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 16:57:23 by nathanlafar       #+#    #+#             */
/*   Updated: 2021/09/10 17:01:49 by nathanlafar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	ft_sort(t_ps *ps)
{
	if (ps->nb_nums == 2)
		ft_sa(ps);
	else if (ps->nb_nums == 3)
		ft_sort_three(ps);
	else if (ps->nb_nums <= 5)
		ft_sort_five(ps);
	else if (ps->nb_nums <= 100)
		ft_sort_hundred(ps, 5);
	else
		ft_sort_hundred(ps, 11);
	ft_clean(ps);
}

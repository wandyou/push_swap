/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clean.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathanlafarge <nathanlafarge@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 18:59:02 by nlafarge          #+#    #+#             */
/*   Updated: 2021/08/24 23:32:27 by nathanlafar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	ft_clean(t_ps *ps)
{
	if (ps->tab_a.nums)
		free(ps->tab_a.nums);
	if (ps->tab_b.nums)
		free(ps->tab_b.nums);
	if (ps->tmp_a)
		free(ps->tmp_a);
	if (ps->tmp_b)
		free(ps->tmp_b);
	return (1);
}

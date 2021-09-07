/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_five.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathanlafarge <nathanlafarge@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 21:59:18 by nlafarge          #+#    #+#             */
/*   Updated: 2021/09/07 02:20:56 by nathanlafar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	ft_sort_five(t_ps *ps)
{
	int	len;

	len = ps->tab_a.size;
	while (len > 3)
	{
		ft_isloate_min(ps);
		len--;
	}
	ft_sort_three(ps);
	len = ps->tab_b.size;
	while (len > 0)
	{
		ft_pa(ps);
		len--;
	}
}

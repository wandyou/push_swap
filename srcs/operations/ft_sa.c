/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathanlafarge <nathanlafarge@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 22:38:08 by nathanlafar       #+#    #+#             */
/*   Updated: 2021/08/24 23:19:31 by nathanlafar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	ft_sa(t_ps *ps)
{
	int	tmp;

	tmp = ps->tab_a.nums[1];
	ps->tab_a.nums[1] = ps->tab_a.nums[0];
	ps->tab_a.nums[0] = tmp;
	printf("sa\n");
}

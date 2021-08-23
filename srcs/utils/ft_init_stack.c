/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlafarge <nlafarge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 01:09:03 by nlafarge          #+#    #+#             */
/*   Updated: 2021/08/24 01:19:10 by nlafarge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	ft_init_stack(t_ps *ps, int *tab)
{
	tab = (int *)malloc(ps->nb_nums * sizeof(int));
	if (!ps->tab_a.nums)
		ft_error(ft_clean(ps), "Malloc of stack failed ...");
}
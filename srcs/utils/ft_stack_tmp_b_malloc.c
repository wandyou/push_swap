/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_tmp_b_malloc.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathanlafarge <nathanlafarge@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 00:54:51 by nathanlafar       #+#    #+#             */
/*   Updated: 2021/08/27 01:00:12 by nathanlafar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	ft_stack_tmp_b_malloc(t_ps *ps, int resize)
{
	ps->tmp_b = (int *)malloc((ps->tab_b.size + resize) * sizeof(int));
	if (!ps->tmp_b)
		ft_error(ft_clean(ps), "Malloc of stack failed ...");
}

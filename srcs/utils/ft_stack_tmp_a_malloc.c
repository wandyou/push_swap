/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_tmp_a_malloc.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathanlafarge <nathanlafarge@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 00:56:37 by nathanlafar       #+#    #+#             */
/*   Updated: 2021/08/27 00:56:47 by nathanlafar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	ft_stack_tmp_a_malloc(t_ps *ps, int resize)
{
	ps->tmp_a = (int *)malloc((ps->tab_a.size + resize) * sizeof(int));
	if (!ps->tmp_a)
		ft_error(ft_clean(ps), "Malloc of stack failed ...");
}

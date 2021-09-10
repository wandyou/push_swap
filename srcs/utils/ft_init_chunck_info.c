/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_chunck_info.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathanlafarge <nathanlafarge@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 16:14:43 by nathanlafar       #+#    #+#             */
/*   Updated: 2021/09/10 16:41:42 by nathanlafar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	ft_init_chunck_info(t_ps *ps, int chuncks)
{
	ps->chunck.size = ps->nb_nums / chuncks;
	if (ps->chunck.i == chuncks - 1)
	{
		ps->chunck.size = ps->nb_nums - ((chuncks - 1) * ps->chunck.size);
		ps->chunck.min = ps->sorted[ps->nb_nums - ps->chunck.size];
		ps->chunck.max = ps->sorted[ps->nb_nums - 1];
	}
	else
	{	
		ps->chunck.min = ps->sorted[ps->chunck.size * ps->chunck.i];
		ps->chunck.max = ps->sorted[(ps->chunck.size * ps->chunck.i)
			+ ps->chunck.size - 1];
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_hundred.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlafarge <nlafarge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 01:44:07 by nlafarge          #+#    #+#             */
/*   Updated: 2021/09/08 16:50:53 by nlafarge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	ft_init_chunck_info(t_ps *ps, int chuncks)
{
	//ps->chunck.size = ps->nb_nums / chuncks;
	if (ps->chunck.i == chuncks - 1)
	{
		ps->chunck.size = ps->nb_nums - ((chuncks - 1) * ps->chunck.size);
		ps->chunck.min = ps->sorted[ps->chunck.size * ps->chunck.i];
		ps->chunck.max = ps->sorted[ps->chunck.min + ps->chunck.size];
	}
	else
	{	
		ps->chunck.min = ps->sorted[ps->chunck.size * ps->chunck.i];
		ps->chunck.max = ps->sorted[ps->chunck.min + ps->chunck.size];
	}
	//printf("%d\n%d\n%d\n%d\n\n", ps->chunck.i, ps->chunck.size, ps->chunck.min, ps->chunck.max);
}

void	ft_sort_hundred(t_ps *ps, int chuncks)
{
	int	i;

	ft_create_sorted_list(ps);
	i = 0;
	ps->chunck.size = ps->nb_nums / chuncks;
	//printf("%d\n\n", ps->sorted[ps->chunck.size * 5]);
	while (i < ps->nb_nums)
	{
		ps->chunck.i = i / ps->chunck.size;
		ft_init_chunck_info(ps, chuncks);
		i++;
	}
}

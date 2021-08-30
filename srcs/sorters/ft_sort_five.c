/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_five.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlafarge <nlafarge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 21:59:18 by nlafarge          #+#    #+#             */
/*   Updated: 2021/08/31 01:42:17 by nlafarge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	ft_sort_five(t_ps *ps)
{
	if (ps->nb_nums == 5)
		ft_isloate_min(ps);
	ft_isloate_min(ps);
	ft_sort_three(ps);
	ft_pa(ps);
	ft_pa(ps);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_duplicate.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlafarge <nlafarge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 23:38:31 by nlafarge          #+#    #+#             */
/*   Updated: 2021/08/23 23:47:43 by nlafarge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	ft_check_duplicate(t_ps *ps, int num)
{
	int	i;

	i = 0;
	while (i < ps->nb_nums)
	{
		if (num == ps->tab_a[i])
			return (0);
		i++;
	}
	return (1);
}

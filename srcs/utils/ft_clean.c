/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clean.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlafarge <nlafarge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 18:59:02 by nlafarge          #+#    #+#             */
/*   Updated: 2021/08/24 01:06:32 by nlafarge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	ft_clean(t_ps *ps)
{
	if (ps->tab_a.nums)
		free(ps->tab_a.nums);
	if (ps->tab_b.nums)
		free(ps->tab_b.nums);
	return (1);
}

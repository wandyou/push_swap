/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_ordered.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlafarge <nlafarge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 23:50:45 by nlafarge          #+#    #+#             */
/*   Updated: 2021/08/24 00:45:13 by nlafarge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	ft_is_ordered(int *tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		if (tab[i] >= tab[i + 1])
			return (0);
		i++;
	}
	return (1);
}

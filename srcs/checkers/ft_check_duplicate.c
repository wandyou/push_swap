/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_duplicate.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlafarge <nlafarge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 23:38:31 by nlafarge          #+#    #+#             */
/*   Updated: 2021/08/24 00:45:06 by nlafarge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	ft_check_duplicate(int *stack, int len, int num)
{
	int	i;

	i = 0;
	while (i < len)
	{
		if (stack[i] == num)
			return (0);
		i++;
	}
	return (1);
}

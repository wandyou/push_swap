/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_num.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlafarge <nlafarge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 23:45:20 by nlafarge          #+#    #+#             */
/*   Updated: 2021/08/23 23:47:53 by nlafarge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	ft_check_num(long long num)
{
	if (num < INT_MIN)
		return (0);
	if (num > INT_MAX)
		return (0);
	return (1);
}

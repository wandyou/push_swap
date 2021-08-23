/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_arg.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlafarge <nlafarge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 21:12:28 by nlafarge          #+#    #+#             */
/*   Updated: 2021/08/23 23:47:30 by nlafarge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	ft_check_arg(char *arg)
{
	int	i;

	i = 0;
	while (arg[i] != '\0')
	{
		if ((arg[i] < '0' || arg[i] > '9') && arg[i] != '-')
			return (0);
		if (arg[i] == '-' && i > 0)
			return (0);
		i++;
	}
	if (i == 0)
		return (0);
	if (!ft_check_num(ft_atoi(arg)))
		return (0);
	return (1);
}

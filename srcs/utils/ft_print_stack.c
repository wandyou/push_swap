/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathanlafarge <nathanlafarge@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 23:56:57 by nlafarge          #+#    #+#             */
/*   Updated: 2021/08/25 00:05:29 by nathanlafar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	ft_print_stack(int *stack, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		printf("%d\n", stack[i]);
		i++;
	}
}

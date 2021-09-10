/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_stacks.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathanlafarge <nathanlafarge@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 23:53:45 by nathanlafar       #+#    #+#             */
/*   Updated: 2021/09/10 14:22:47 by nathanlafar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	display_stacks(t_ps *ps)
{
	int	i;

	i = 0;
	while (i < ps->nb_nums)
	{
		printf("[%d] == ", i);
		if (i < ps->tab_a.size)
			printf("%d", ps->tab_a.nums[i]);
		else
			printf(" ");
		printf("   ");
		if (i < ps->tab_b.size)
			printf("%d", ps->tab_b.nums[i]);
		else
			printf(" ");
		printf("\n");
		i++;
	}
	printf("_   _\na   b\n\n");
}

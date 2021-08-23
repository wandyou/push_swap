/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlafarge <nlafarge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 23:44:55 by nlafarge          #+#    #+#             */
/*   Updated: 2021/08/24 00:44:55 by nlafarge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	main(int argc, char **argv)
{
	t_ps	ps;
	int		i;

	i = 1;
	ft_struct_init(&ps);
	if (argc < 2)
		ft_error(ft_clean(&ps), "Missing arguments ...");
	ps.nb_nums = argc - 1;
	ps.tab_a = (int *)malloc(ps.nb_nums * sizeof(int));
	if (!ps.tab_a)
		ft_error(ft_clean(&ps), "Malloc of stack a failed ...");
	while (i < argc)
	{
		if (!ft_check_arg(argv[i]))
			ft_error(ft_clean(&ps), "There is an invalid number ...");
		if (!ft_check_duplicate(ps.tab_a, i - 1, ft_atoi(argv[i])))
			ft_error(ft_clean(&ps), "There is a duplicate ...");
		ps.tab_a[i - 1] = ft_atoi(argv[i]);
		i++;
	}
	ft_print_stack(ps.tab_a, ps.nb_nums);
}

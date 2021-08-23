/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlafarge <nlafarge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 23:44:55 by nlafarge          #+#    #+#             */
/*   Updated: 2021/08/24 01:04:03 by nlafarge         ###   ########.fr       */
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
	ps.tab_a.nums = (int *)malloc(ps.nb_nums * sizeof(int));
	if (!ps.tab_a.nums)
		ft_error(ft_clean(&ps), "Malloc of stack a failed ...");
	while (i < argc)
	{
		if (!ft_check_arg(argv[i]))
			ft_error(ft_clean(&ps), "There is an invalid number ...");
		if (!ft_check_duplicate(ps.tab_a.nums, i - 1, ft_atoi(argv[i])))
			ft_error(ft_clean(&ps), "There is a duplicate ...");
		ps.tab_a.nums[i - 1] = ft_atoi(argv[i]);
		i++;
	}
	if (ft_is_sorted(ps.tab_a.nums, ps.nb_nums))
		ft_exit(ft_clean(&ps));
	ft_print_stack(ps.tab_a.nums, ps.nb_nums);
}

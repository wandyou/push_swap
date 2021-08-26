/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathanlafarge <nathanlafarge@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 23:44:55 by nlafarge          #+#    #+#             */
/*   Updated: 2021/08/27 01:21:33 by nathanlafar      ###   ########.fr       */
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
	if (argc == 2)
		ft_success(ft_clean(&ps), "Only one number, everthing's good !");
	ps.nb_nums = argc - 1;
	ps.tab_a.size = ps.nb_nums;
	ft_stack_a_malloc(&ps);
	while (i < argc)
	{
		if (!ft_check_arg(argv[i]))
			ft_error(ft_clean(&ps), "There is an invalid number ...");
		if (!ft_check_duplicate(ps.tab_a.nums, i - 1, ft_atoi(argv[i])))
			ft_error(ft_clean(&ps), "There is a duplicate ...");
		ps.tab_a.nums[i - 1] = ft_atoi(argv[i]);
		i++;
	}
	while (!ft_is_sorted(ps.tab_a.nums, ps.nb_nums))
	{
		if (ps.nb_nums == 2)
			ft_sa(&ps);
		if (ps.nb_nums == 3)
			ft_sort_three(&ps);
	}
	ft_success(ft_clean(&ps), "The two numbers are now sorted");
}

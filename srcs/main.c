/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlafarge <nlafarge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 17:48:23 by nlafarge          #+#    #+#             */
/*   Updated: 2021/08/23 22:32:07 by nlafarge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int main(int argc, char **argv)
{
    t_ps    ps;
    int     i;
	int		a;

    i = 1;
    if (argc < 2)
        ft_error(ft_clean(&ps), "Missing arguments ...");
    ps.nb_nums = argc - 1;
    while (i < argc)
    {
        if (!ft_check_arg(argv[i]))
            ft_error(ft_clean(&ps), "There is an invalid number ...");
        i++;
    }
}
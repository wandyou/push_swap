/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlafarge <nlafarge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 17:48:23 by nlafarge          #+#    #+#             */
/*   Updated: 2021/08/23 19:21:14 by nlafarge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int main(int argc, char **argv)
{
    t_ps    ps;
    int     i;

    i = 0;
    if (argc < 2)
        ft_error(ft_clean(&ps), "Missing arguments ...");
    ps.nb_nums = argc - 1;
    while (i < ps.nb_nums)
    {
        if (!ft_check_num(ft_atoi(argv[i])))
            ft_error(ft_clean(&ps), "There is an invalid number ...");
        i++;
    }
    printf("%d", ps.nb_nums);
}
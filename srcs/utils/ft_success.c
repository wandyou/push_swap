/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_success.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathanlafarge <nathanlafarge@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 01:03:31 by nathanlafar       #+#    #+#             */
/*   Updated: 2021/08/27 01:39:21 by nathanlafar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	ft_success(int clean_success, char *msg)
{
	printf("\033[0;32mSuccess\n");
	if (!clean_success)
		printf("An error occured during cleaning process ...");
	else
		printf("%s", msg);
	printf("\n\033[0m");
	exit(EXIT_SUCCESS);
}

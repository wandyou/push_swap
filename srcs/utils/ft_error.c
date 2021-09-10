/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathanlafarge <nathanlafarge@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 18:57:28 by nlafarge          #+#    #+#             */
/*   Updated: 2021/09/10 17:28:23 by nathanlafar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	ft_error(int clean_success, char *msg)
{
	(void)msg;
	printf("Error");
	if (!clean_success)
		printf("An error occured during cleaning process ...");
	exit(EXIT_FAILURE);
}

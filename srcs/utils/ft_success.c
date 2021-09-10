/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_success.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nathanlafarge <nathanlafarge@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 01:03:31 by nathanlafar       #+#    #+#             */
/*   Updated: 2021/09/10 17:28:38 by nathanlafar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	ft_success(int clean_success, char *msg)
{
	(void)msg;
	if (!clean_success)
		printf("An error occured during cleaning process ...");
	exit(EXIT_SUCCESS);
}

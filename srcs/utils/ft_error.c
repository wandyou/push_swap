/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlafarge <nlafarge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 18:57:28 by nlafarge          #+#    #+#             */
/*   Updated: 2021/08/23 23:49:05 by nlafarge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	ft_error(int clean_success, char *msg)
{
	printf("\033[0;31mError\n");
	if (!clean_success)
		printf("An error occured during cleaning process ...");
	else
		printf("%s", msg);
	printf("\n\033[0m");
	exit(EXIT_FAILURE);
}

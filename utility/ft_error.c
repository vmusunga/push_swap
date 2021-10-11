/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 15:10:47 by vmusunga          #+#    #+#             */
/*   Updated: 2021/10/11 16:55:23 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_error(int *new, int i, char *input)				// "5452-6542" error
{
	int x;

	x = 0;
	if (ft_check_doubles(new, i) != 0)
		return (1);
	while (input[x])
	{
		if (ft_isdigit_extended(input[x]) != 1)
			return (2);
		x++;
	}
	if (new[i] >= INT_MAX || new[i] <= INT_MIN)
		return (3);
	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 15:10:47 by vmusunga          #+#    #+#             */
/*   Updated: 2022/01/09 14:31:12 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_error(int *new, int i, char *input)			// !!LEAKS!! //
{
	int	x;

	x = 0;
	if (ft_check_doubles(new, i) != 0)
		return (1);
	while (input[x])
	{
		if (ft_isdigit_extended(input[x]) != 1)
			return (2);
		if (input[x] == '-' && ft_isdigit(input[x - 1]) == 1)
			return (3);
		if (input[x] == '-' && (ft_isdigit(input[x + 1]) != 1))
			return (4);
		x++;
	}
	if (new[i] >= INT_MAX || new[i] <= INT_MIN)
		return (4);
	return (0);
}

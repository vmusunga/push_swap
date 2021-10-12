/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 15:10:47 by vmusunga          #+#    #+#             */
/*   Updated: 2021/10/12 12:20:17 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_error(int *new, int i, char *input)
{
	int x;

	x = 0;
	if (ft_check_doubles(new, i) != 0)
		return (1);
	while (input[x])
	{
		// accepted char " -123456789"
		if (ft_isdigit_extended(input[x]) != 1)
			return (2);
		// checking minus in between
		if (input[x] == '-' && input[x-1] != ' ')
			return (3);
		// checking minus at the end
		if (input[x] == '-' && (ft_isdigit(input[x+1]) != 1))
			return(4);
		// lone zero (needed?)
		if (input[x] == '0' && (ft_isdigit(input[x+1]) != 1))
			return(5);
		x++;
	}
	if (new[i] >= INT_MAX || new[i] <= INT_MIN)
		return (4);
	return (0);
}
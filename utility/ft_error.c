/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 15:10:47 by vmusunga          #+#    #+#             */
/*   Updated: 2021/10/11 15:51:33 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_input_check(char **argv)
{
	int i;
	int x;

	i = 0;
	while (agrv[1][i])
	{
		x = 0;
		while (x < i)
		{
			if (agrv[1][i] == agrv[1][x])
				return (1);
			x++;
		}
		i++;
	}
	return (0);
}

int	ft_error(int *tab, int i, char *input)
{
	int x;

	x = 0;
	if (ft_check_doubles(tab, i) != 0)
		return (1);
	while (input[x])
	{
		//if (ft_isdigit_extended(input[x]) != 0)
			//return (2);
		x++;
	}
	if (tab[i] > INT_MAX || tab[i] < INT_MIN)
		return (3);
	return (0);
}
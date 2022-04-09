/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 15:10:47 by vmusunga          #+#    #+#             */
/*   Updated: 2022/04/09 16:28:50 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_free2(int *tab1, char *tab2)
{
	free(tab1);
	free(tab2);
	return ;
}

void	ft_exit()
{
		write(2, "Error\n", 6);
		exit(EXIT_FAILURE);
}

int	ft_error(int *new, int i, char *input)
{
	int	x;
	int	butt;

	x = 0;
	butt = 0;
	if (ft_check_doubles(new, i) != 0)
		butt = 1;
	while (input[x])
	{
		if (ft_isdigit_extended(input[x]) != 1)
			butt = 2;
		if (input[x] == '-' && ft_isdigit(input[x - 1]) == 1)
			butt = 3;
		if (input[x] == '-' && (ft_isdigit(input[x + 1]) != 1))
			butt = 4;
		x++;
	}
	if (butt != 0)
	{
		ft_free2(new, input);
		return (1);
	}
	return (0);
}

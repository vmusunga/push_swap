/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_input_check.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 16:05:12 by vmusunga          #+#    #+#             */
/*   Updated: 2021/10/11 16:16:09 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_input_check(char **argv)
{
	int x;
	char *input;

	input = argv[1];
	x = 0;
	while (input[x])
	{
		if (ft_isdigit_extended(input[x]) != 1)
			return (1);
		x++;
	}
	return (0);
}
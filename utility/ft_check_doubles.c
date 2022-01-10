/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_doubles.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 12:13:29 by vmusunga          #+#    #+#             */
/*   Updated: 2022/01/10 17:41:24 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_check_doubles(int *tab, int i)
{
	int	x;

	x = 0;
	while (x < i)
	{
		if (tab[x] == tab[i])
			return (1);
		x++;
	}
	return (0);
}

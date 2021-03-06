/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_double_tab.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 19:20:14 by vmusunga          #+#    #+#             */
/*   Updated: 2022/01/09 14:21:37 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_count_double_tab(char **tab)
{
	int	len;
	int	x;
	int	y;

	x = 1;
	len = 0;
	while (tab[x])
	{
		y = 0;
		while (tab[x][y])
		{
			y++;
			len++;
		}
	x++;
	}
	return (len);
}

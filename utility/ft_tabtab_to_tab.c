/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabtab_to_tab.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 19:19:29 by vmusunga          #+#    #+#             */
/*   Updated: 2022/01/09 14:25:12 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

char	*ft_tabtab_to_tab(char **tab)
{
	int		i;
	int		x;
	int		y;
	int		len;
	char	*input;

	len = ft_count_double_tab(tab);
	if (!(input = malloc(sizeof(char) * (len * 2) + 1)))
		return (NULL);
	x = 1;
	i = 0;
	while (tab[x])
	{
		y = 0;
		while (tab[x][y])
		{
			input[i] = tab[x][y];
			i++;
			y++;
		}
	input[i++] = ' ';
	x++;
	}
	input[i] = '\0';
	return (input);
}

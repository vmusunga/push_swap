/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabtab_to_tab.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 19:19:29 by vmusunga          #+#    #+#             */
/*   Updated: 2022/01/17 15:19:46 by vmusunga         ###   ########.fr       */
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
	input = malloc(sizeof(char) * (len * 2) + 1);
	if (!input)
		return (NULL);
	x = 1;
	i = 0;
	while (tab[x])
	{
		y = 0;
		while (tab[x][y])
			input[i++] = tab[x][y++];
	input[i++] = ' ';
	x++;
	}
	input[i] = '\0';
	return (input);
}

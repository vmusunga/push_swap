/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 12:28:20 by vmusunga          #+#    #+#             */
/*   Updated: 2021/10/12 12:28:39 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

char	**ft_free(char **tab, int x)
{
	int i;

	i = 0;
	while (i < x && tab[i] != '\0')
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (NULL);
}
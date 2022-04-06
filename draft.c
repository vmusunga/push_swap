/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vic <vic@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 12:47:48 by vmusunga          #+#    #+#             */
/*   Updated: 2022/04/06 15:12:13 by vic              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

int	*ft_list_to_tab(t_list **stack)
{
	int *tab0;
	int i;
	t_list *current;

	i = 0;
	current = (*stack);
	tab0 = malloc(sizeof(int) * (ft_lstsize(*stack) + 1));
	if (!tab0)
		return (0);
	while (current)
	{
		tab0[i] = current->content;
		current = current->next;
		i++;
	}
	return (tab0);
}

int	*ft_sort_tab(int *tab)
{
	int i;
	int x;

	i = 0;
	while (tab[i])
	{
		if (tab[i] > tab[i + 1])
		{
			x = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = x;
		}
		i++;
	}
	return (tab);
}

// int *ft_sorted_list_tab(int *tab1)
// {
// 	int i;

// 	return (tab1);
// }

	// printf("tab0: %d %d %d %d\n", tab0[0], tab0[1], tab0[2], tab0[3]); 
	// printf("tab1: %d %d %d %d\n", tab1[0], tab1[1], tab1[2], tab1[3]); 
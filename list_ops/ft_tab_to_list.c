/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tab_to_list.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 16:20:17 by vic               #+#    #+#             */
/*   Updated: 2022/04/09 14:58:16 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_list	**ft_tab_to_list(int *tab, t_list **stack, t_utils *utils)
{
	int	i;

	i = 0;
	while (i < utils->input_len)
	{
		ft_lstadd_back(stack, ft_lstnew(tab[i]));
		i++;
	}
	return (0);
}

int	*ft_list_to_tab(t_list **stack)
{
	int		*tab0;
	int		i;
	t_list	*current;

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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 12:47:48 by vmusunga          #+#    #+#             */
/*   Updated: 2022/04/05 18:56:15 by vmusunga         ###   ########.fr       */
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

t_list	**ft_lstcpy(t_list **stack)
{
	t_list	**cpy;
	t_list	*current;

	current = (*stack);
	cpy = malloc(sizeof(t_list));
	if (!cpy)
		return (NULL);
	while (current)
	{
		(*cpy)->content = current->content;
		(*cpy) = (*cpy)->next;
		current = current->next;
	}
	return (cpy);
}

int *ft_sorted_list_tab(t_list **stack_a, t_list **stack_b)
{
	int *tab1;
	int i;
	//t_list **cpy;

	i = 0;
	//cpy = ft_lstcpy(stack_a);
	tab1 = malloc(sizeof(int) * (ft_lstsize(*stack_a) + 1));
	if (!tab1)
		return (0);
	ft_hundred_elem_sort(stack_a, stack_b);
	while (cpy)
	{
		tab1[i] = (*cpy)->content;
		(*cpy) = (*cpy)->next;
		i++;
	}
	return (tab1);
}
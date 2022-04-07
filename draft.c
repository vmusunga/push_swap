/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vic <vic@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 12:47:48 by vmusunga          #+#    #+#             */
/*   Updated: 2022/04/07 17:20:06 by vic              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

/// WORKING READABLE SAVE
// void	ft_hundred_elem_sort(t_list **stack_a, t_list **stack_b)
// {
// 	int i;
// 	int len;
// 	int chunk;

// 	len = ft_lstsize(*stack_a);
// 	chunk = len / 6;
// 	i = 0;
// 	while (*stack_a && i <= chunk)
// 	{
// 		if (i == chunk && ft_lstmin(stack_a) < ft_lstmax(stack_b))
// 				ft_nb_to_top(stack_a, ft_lstmin(stack_a), 0);
// 		else
// 			ft_wich_min(stack_a, 0);   //sends correct min to top of A
// 		if (*stack_b)
// 		{
// 			if ((*stack_a)->content < ft_lstmin(stack_b))
// 				ft_nb_to_top_b(stack_b, ft_lstmax(stack_b), 0);   //ensure the max is on top before pushing
// 			if ((*stack_a)->content > ft_lstmin(stack_b) && (*stack_a)->content < ft_lstmax(stack_b))
// 				ft_nb_to_top_b(stack_b, ft_lesser_than(*stack_b, (*stack_a)->content), 0);   //if between min & max, find right one
// 			else
// 				ft_nb_to_top_b(stack_b, ft_lstmax(stack_b), 0);
// 		}
// 		ft_pb(stack_a, stack_b, 0);
// 		i++;
// 		if (i == chunk)
// 		{
// 			ft_nb_to_top_b(stack_b, ft_lstmax(stack_b), 0);
// 			chunk += len / 6;
// 		}
// 	}
// 	while (*stack_b)
// 		ft_pa(stack_a, stack_b, 0);
// 	if (ft_output_check(stack_a, 0))
// 		ft_nb_to_top(stack_a, ft_lstmin(stack_a), 0);
// 	return ;
// }

// int	*ft_list_to_tab(t_list **stack)
// {
// 	int *tab0;
// 	int i;
// 	t_list *current;

// 	i = 0;
// 	current = (*stack);
// 	tab0 = malloc(sizeof(int) * (ft_lstsize(*stack) + 1));
// 	if (!tab0)
// 		return (0);
// 	while (current)
// 	{
// 		tab0[i] = current->content;
// 		current = current->next;
// 		i++;
// 	}
// 	return (tab0);
// }



// int *ft_sorted_list_tab(int *tab1)
// {
// 	int i;

// 	return (tab1);
// }

// printf("tab0: %d %d %d %d %d %d %d\n", tab0[0], tab0[1], tab0[2], tab0[3], tab0[4], tab0[5], tab0[6]); 
// 	printf("tab1: %d %d %d %d %d %d %d\n", tab1[0], tab1[1], tab1[2], tab1[3], tab1[4], tab1[5], tab1[6]); 
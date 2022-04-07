/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hundred_elem_sort.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vic <vic@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 20:20:10 by vmusunga          #+#    #+#             */
/*   Updated: 2022/04/07 13:56:19 by vic              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	first_steps(t_list **stack_a, t_list **stack_b, t_utils *utils)
{
	int *tab0;
	int *tab1;
	
	tab0 = ft_list_to_tab(stack_a);
	ft_hundred_elem_sort(stack_a, stack_b);
	tab1 = ft_list_to_tab(stack_a);
	ft_index(utils, tab0, tab1);
	

	return ;
}

void	ft_index(t_utils *utils, int *tab0, int *tab1)
{
	int i;
	int j;
	
	i = 0;
	while (i < utils->input_len)
	{
		j = 0;
		while (j < utils->input_len)
		{
			if (tab0[i] == tab1[j])
			{
				tab0[i] = j;
				break ;
			}
		j++;
		}
	i++;
	}
	//free all tabs?
	return ;
}

/// WORKING READABLE SAVE
void	ft_hundred_elem_sort(t_list **stack_a, t_list **stack_b)
{
	int i;
	int len;
	int chunk;

	len = ft_lstsize(*stack_a);
	chunk = len / 6;
	i = 0;
	while (*stack_a && i <= chunk)
	{
		if (i == chunk && ft_lstmin(stack_a) < ft_lstmax(stack_b))
				ft_nb_to_top(stack_a, ft_lstmin(stack_a));
		else
			ft_wich_min(stack_a);   //sends correct min to top of A
		if (*stack_b)
		{
			if ((*stack_a)->content < ft_lstmin(stack_b))
				ft_nb_to_top_b(stack_b, ft_lstmax(stack_b));   //ensure the max is on top before pushing
			if ((*stack_a)->content > ft_lstmin(stack_b) && (*stack_a)->content < ft_lstmax(stack_b))
				ft_nb_to_top_b(stack_b, ft_lesser_than(*stack_b, (*stack_a)->content));   //if between min & max, find right one
			else
				ft_nb_to_top_b(stack_b, ft_lstmax(stack_b));
		}
		ft_pb(stack_a, stack_b, 1);
		i++;
		// print_list(*stack_a, *stack_b);
		if (i == chunk)
		{
			ft_nb_to_top_b(stack_b, ft_lstmax(stack_b));
			chunk += len / 6;
		}
	}
	while (*stack_b)
		ft_pa(stack_a, stack_b, 1);
	if (ft_output_check(stack_a, 0))
		ft_nb_to_top(stack_a, ft_lstmin(stack_a));
	return ;
}
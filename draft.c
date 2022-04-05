/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 12:47:48 by vmusunga          #+#    #+#             */
/*   Updated: 2022/04/05 17:02:16 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

/// checks if chunk is completed
int	ft_chunk_check(t_list **stack, int chunk)
{
	t_list *current;

	current = (*stack);
	while (current)
	{
		if (current->content <= chunk)
			return (1);
		current = current->next;
	}
	return (0);
}

void	ft_wich_min_chunk(t_list **stack_a, int chunk)
{
	int	min1;
	int	min2;

	min1 = ft_lstmin(stack_a);
	min2 = ft_sec_min(stack_a, min1);
	if (ft_n_ops(stack_a, min1) <= ft_n_ops(stack_a, min2))
		ft_nb_to_top(stack_a, min1);
	if (ft_n_ops(stack_a, min2) < ft_n_ops(stack_a, min1) && min2 <= chunk)
		ft_nb_to_top(stack_a, min2);
	return ;
}

void	ft_five_hundred_elem_sort(t_list **stack_a, t_list **stack_b)
{
	int chunk;
	int len;

	len = ft_lstsize(*stack_a);
	chunk = len / 4;

	while (chunk <= len)
	{
		while (ft_chunk_check(stack_a, chunk) == 1)
		{
			ft_wich_min_chunk(stack_a, chunk);
			// print_list(*stack_a, *stack_b);
			ft_pb(stack_a, stack_b, 1);
		}
			// print_list(*stack_a, *stack_b);
		if (!ft_chunk_check(stack_a, chunk))
			chunk += len/5;
	}

	ft_nb_to_top_b(stack_b, ft_lstmax(stack_b));

	while (*stack_b)
		{
			// print_list(*stack_a, *stack_b);
			if (!(*stack_a))
				ft_pa(stack_a, stack_b, 1);
			// print_list(*stack_a, *stack_b);
			if ((*stack_b)->content < ft_lstmin(stack_a))
				ft_nb_to_top(stack_a, ft_lstmin(stack_a));   //ensure the max is on top before pushing
			if ((*stack_b)->content > ft_lstmin(stack_a) && (*stack_b)->content < ft_lstmax(stack_a))
				ft_nb_to_top(stack_a, ft_greater_than(*stack_a, (*stack_b)->content));   //if between min & max, find right one
			else
				ft_nb_to_top(stack_a, ft_lstmin(stack_a));
			ft_pa(stack_a, stack_b, 1);
		}
	ft_nb_to_top(stack_a, ft_lstmin(stack_a));
	return ;
}
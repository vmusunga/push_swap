/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hundred_elem_sort.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 20:20:10 by vmusunga          #+#    #+#             */
/*   Updated: 2022/01/08 18:04:01 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_sec_min(t_list **stack_a, int min1)
{
	int min2;
	t_list *current;

	current = (*stack_a);
	min2 = current->content;
	current = (*stack_a)->next;
	while (current)
	{
		if (current->content < min2 && current->content != min1)
			min2 = current->content;
		current = current->next;
	}
	free(current);
	return (min2);
}

void	ft_wich_min(t_list **stack_a)
{
	int min1;
	int min2;

	min1 = ft_lstmin(stack_a);
	min2 = ft_sec_min(stack_a, min1);
	if (ft_n_ops(stack_a, min1) <= ft_n_ops(stack_a, min2))
		ft_nb_to_top(stack_a, min1);
	if (ft_n_ops(stack_a, min2) < ft_n_ops(stack_a, min1))
		ft_nb_to_top(stack_a, min2);
	return ;
}

void	ft_hundred_elem_sort(t_list **stack_a, t_list **stack_b)
{
	int len;
	int chunk;

	len = ft_lstsize(*stack_a);
	chunk = len;
	while (*stack_a)
	{
		ft_wich_min(stack_a);   //sends correct min to top of A
		if (*stack_b)
		{
			if ((*stack_a)->content < ft_lstmin(stack_b))
				ft_nb_to_top(stack_b, ft_lstmax(stack_b));   //ensure the max is on top before pushing
			if ((*stack_a)->content > ft_lstmin(stack_b) && (*stack_a)->content < ft_lstmax(stack_b))
				ft_nb_to_top_b(stack_b, ft_lesser_than(*stack_b, (*stack_a)->content));   //if between min & max, find right one (progress)
			else
				ft_nb_to_top(stack_b, ft_lstmax(stack_b));
		}
		ft_pb(stack_a, stack_b, 1);
		//print_list(*stack_a, *stack_b);
		ft_nb_to_top(stack_b, ft_lstmax(stack_b));
		chunk--;
	}
	while (*stack_b)
		ft_pa(stack_a, stack_b, 1);
	return ;
}
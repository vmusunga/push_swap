/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hundred_elem_sort.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 20:20:10 by vmusunga          #+#    #+#             */
/*   Updated: 2021/11/09 23:21:18 by vmusunga         ###   ########.fr       */
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
	return (min2);
}

void	ft_wich_min(t_list **stack_a)
{
	int min1;
	int min2;

	min1 = ft_lstmin(stack_a);
	min2 = ft_sec_min(stack_a, min1);
	if (ft_n_ops(stack_a, min1) <= ft_n_ops(stack_a, min2))
		ft_min_to_top(stack_a, min1);
	if (ft_n_ops(stack_a, min2) < ft_n_ops(stack_a, min1))
		ft_min_to_top(stack_a, min2);
	return ;
}

int	ft_greater_than( t_list **stack, int min)     //in progress
{
	t_list *current;
	int x;
	if (!stack || !*stack)
		return (0);

	current = (*stack);
	x = min;
	while (current)
	{
		if (current->content > min)
			x = current->content;
		if (min < current->content && current->content < x)
			x = current->content;
		current = current->next;
	}
	return (x);
}

void	ft_hundred_elem_sort(t_list **stack_a, t_list **stack_b)
{
	int len;
	int chunk;

	len = ft_lstsize(*stack_a);
	chunk = 6;

	while (chunk != 0)
	{
		ft_wich_min(stack_a);   //sends correct min to top of A
		if (*stack_b)
		{
			if ((*stack_a)->content < ft_lstmin(stack_b))
				ft_min_to_top(stack_b, ft_lstmin(stack_b));   //ensure the right min is on top before pushing
			//else
				//ft_min_to_top(stack_b, ft_greater_than(stack_b, (*stack_a)->content));   //ensure the right min is on top before pushing
		}
		ft_pb(stack_a, stack_b, 1);
		chunk--;
		print_list(*stack_a, *stack_b);
	}
	return ;
}














/*ft_min_to_top(t_list **stack_a, t_list **stack_b)
{
	int min1;
	int min2;

	min1 = ft_lstmin(stack_a);
	if (!ft_wich_half(stack_a, min1))
	{
		if (ft_n_ops(stack_a, min1) < ft_n_ops(stack_a, min2))
		{
			while ((*stack_a)->content != min1)
				ft_ra(stack_a, 1);
		}
		else
		{
			while ((*stack_a)->content != min2)
				ft_ra(stack_a, 1);
		}
	}
	else
	{
		if (ft_n_ops(stack_a, min1) < ft_n_ops(stack_a, min2))
		{
			while ((*stack_a)->content != min1)
				ft_rra(stack_a, 1);
		}
		else
		{
			while ((*stack_a)->content != min2)
				ft_rra(stack_a, 1);
		}
	}
}*/
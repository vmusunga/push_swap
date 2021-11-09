/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hundred_elem_sort.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 20:20:10 by vmusunga          #+#    #+#             */
/*   Updated: 2021/11/09 14:32:37 by vmusunga         ###   ########.fr       */
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

void	ft_min_to_top(t_list **stack_a)
{
	int min1;
	int min2;

	min1 = ft_lstmin(stack_a);
	min2 = ft_sec_min(stack_a, min1);
	if (ft_n_ops(stack_a, min1) <= ft_n_ops(stack_a, min2))
	{
		if(!ft_wich_half(stack_a, min1))
		{
			while ((*stack_a)->content != min1)
				ft_ra(stack_a, 1);
		}
		else
		{
			while ((*stack_a)->content != min1)
				ft_rra(stack_a, 1);
		}
	}
	if (ft_n_ops(stack_a, min2) < ft_n_ops(stack_a, min1))
	{
		if(!ft_wich_half(stack_a, min2))
		{
			while ((*stack_a)->content != min2)
				ft_ra(stack_a, 1);
		}
		else
		{
			while ((*stack_a)->content != min2)
				ft_rra(stack_a, 1);
		}
	}
	return ;
}

void	ft_hundred_elem_sort(t_list **stack_a, t_list **stack_b)
{
	int len;
	int chunk;
	int min1;
	int min2;
	//int pos;

	len = ft_lstsize(*stack_a);
	chunk = len / 6;
	while (chunk != 0)
	{
		min1 = ft_lstmin(stack_a);
		min2 = ft_sec_min(stack_a, min1);
		//printf("min1: %d --- min2: %d\n", min1, min2);
		//printf("ops1: %d --- ops2: %d\n", ft_n_ops(stack_a, min1), ft_n_ops(stack_a, min2));
		ft_min_to_top(stack_a);
		ft_pb(stack_a, stack_b, 1);
		chunk--;
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
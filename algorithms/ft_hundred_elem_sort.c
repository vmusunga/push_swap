/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hundred_elem_sort.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 20:20:10 by vmusunga          #+#    #+#             */
/*   Updated: 2021/11/08 13:07:06 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

ft_min_to_top(t_list **stack_a, t_list **stack_b)
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
}

ft_hundred_elem_sort(t_list **stack_a, t_list **stack_b)
{
	int len;
	int chunk;
	int min1;
	int min2;
	int pos;
	
	len = ft_lstsize(stack_a);
	chunk = len / 5;
	while (chunk)
	{
}
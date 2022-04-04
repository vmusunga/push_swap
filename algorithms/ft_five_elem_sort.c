/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_five_elem_sort.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 17:29:59 by vmusunga          #+#    #+#             */
/*   Updated: 2022/04/04 14:27:47 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_five_elem_sort(t_list **stack_a, t_list **stack_b, int len)
{
	if (len == 4)
		ft_pb(stack_a, stack_b, 1);
	if (len == 5)
	{
		ft_wich_min(stack_a);
		ft_wich_min(stack_a);
		ft_pb(stack_a, stack_b, 1);
		ft_pb(stack_a, stack_b, 1);
	}
	ft_three_elem_sort(stack_a);
	while (*stack_b)
	{
		if ((*stack_b)->content < ft_lstmin(stack_a))
			ft_nb_to_top(stack_a, ft_lstmin(stack_a));
		if ((*stack_b)->content > ft_lstmin(stack_a)
			&& (*stack_b)->content < ft_lstmax(stack_a))
			ft_nb_to_top(stack_a,
				ft_greater_than(*stack_a, (*stack_b)->content));
		else
			ft_nb_to_top(stack_a, ft_lstmin(stack_a));
		ft_pa(stack_a, stack_b, 1);
	}
	ft_nb_to_top(stack_a, ft_lstmin(stack_a));
	return ;
}

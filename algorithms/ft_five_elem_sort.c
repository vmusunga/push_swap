/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_five_elem_sort.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 17:29:59 by vmusunga          #+#    #+#             */
/*   Updated: 2022/01/08 18:23:51 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_five_elem_sort(t_list **stack_a, t_list **stack_b, int len)
{
	t_list *last;

	last = ft_lstlast(*stack_a);
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
		if ((*stack_b)->content > ft_lstmin(stack_a) && (*stack_b)->content < ft_lstmax(stack_a))
			ft_nb_to_top(stack_a, ft_greater_than(*stack_a, (*stack_b)->content));   //if between min & max, find right one
		else
			ft_nb_to_top(stack_a, ft_lstmin(stack_a));
		ft_pa(stack_a, stack_b, 1);
	}
	while ((*stack_a)->content != ft_lstmin(stack_a))
		ft_nb_to_top(stack_a, ft_lstmin(stack_a));
	return ;
}
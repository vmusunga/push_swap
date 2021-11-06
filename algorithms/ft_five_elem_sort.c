/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_five_elem_sort.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 17:29:59 by vmusunga          #+#    #+#             */
/*   Updated: 2021/11/06 14:16:16 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_five_elem_sort(t_list **stack_a, t_list **stack_b, int len)
{
	t_list *first;
	t_list *last;
	//int min;

	if (len == 4)
		ft_pb(stack_a, stack_b, 1);
	if (len == 5)
	{
		//min = ft_lstmin(stack_a);
		//printf("%d\n", min);

		//while ((*stack_a)->content != min)
		//	ft_ra(stack_a, 1);
		ft_pb(stack_a, stack_b, 1);
		ft_pb(stack_a, stack_b, 1);
		//ft_two_elem_sort(stack_b);
	}
	ft_three_elem_sort(stack_a);
	print_list(*stack_a, *stack_b);
	last = ft_lstlast(*stack_a);
	while (*stack_b)
	{
		while ((*stack_a)->content < (*stack_b)->content && last->content > (*stack_b)->content)
			ft_ra(stack_a, 1);
		ft_pa(stack_a, stack_b, 1);
	}
	print_list(*stack_a, *stack_b);
	if ((*stack_a)->content > (*stack_a)->next->content)
		ft_ra(stack_a, 1);
	first = *stack_a;
	last = ft_lstlast(*stack_a);
	while (last->content < first->content)
	{
		ft_ra(stack_a, 1);
		first = *stack_a;
		last = ft_lstlast(*stack_a);
	}
	return ;
}

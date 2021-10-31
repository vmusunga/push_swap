/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_five_elem_sort.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 17:29:59 by vmusunga          #+#    #+#             */
/*   Updated: 2021/10/31 02:29:27 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_five_elem_sort(t_list **stack_a, t_list **stack_b, int len)
{
	if (len == 4)
		ft_pb(stack_a, stack_b, 1);
	if (len == 5)
	{
		ft_pb(stack_a, stack_b, 1);
		ft_pb(stack_a, stack_b, 1);
		ft_two_elem_sort(stack_b);
	}
	ft_three_elem_sort(stack_a);
	//ft_two_elem_sort(stack_b);
	//ft_pa(stack_a, stack_b, 1);

	return ;
}

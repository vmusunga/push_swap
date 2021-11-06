/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_redirect.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 15:35:28 by vmusunga          #+#    #+#             */
/*   Updated: 2021/11/06 13:27:51 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_redirect(t_list **stack_a, t_list **stack_b)
{
	int len;
	
	len = ft_lstsize(*stack_a);
	//printf("%d\n", len);
	if (stack_b)
	if (len == 2)
		ft_two_elem_sort(stack_a);
	if (len == 3)
		ft_three_elem_sort(stack_a);
	if (len > 3 && len <= 5)
		ft_five_elem_sort(stack_a, stack_b, len);
	//ft_pb(stack_a, stack_b, 1);
	
	print_list(*stack_a, *stack_b);
	ft_output_check(stack_a);
	
	//ft_ss(stack_a, stack_b, 1);
	//ft_rr(stack_a, stack_b, 1);
	//ft_rrr(stack_a, stack_b, 1);
	return ;
}
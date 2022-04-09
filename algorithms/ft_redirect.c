/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_redirect.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 15:35:28 by vmusunga          #+#    #+#             */
/*   Updated: 2022/04/09 15:56:33 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_redirect(t_list **stack_a, t_list **stack_b, t_utils *utils)
{
	int	len;

	len = ft_lstsize(*stack_a);
	if (!ft_output_check(stack_a, 0))
		return ;
	if (len == 2)
		ft_two_elem_sort(stack_a);
	if (len == 3)
		ft_three_elem_sort(stack_a);
	if (len > 3 && len <= 5)
		ft_five_elem_sort(stack_a, stack_b, len);
	if (len > 5 && len <= 100)
		first_steps(stack_a, stack_b, utils);
	if (len > 100 && len <= 500)
		first_steps(stack_a, stack_b, utils);
	// print_list(*stack_a, *stack_b);
	// ft_output_check(stack_a, 1);
	return ;
}

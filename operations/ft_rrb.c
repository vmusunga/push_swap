/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrb.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 17:39:01 by vmusunga          #+#    #+#             */
/*   Updated: 2022/01/09 14:19:50 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_rrb(t_list **stack_b, int write_out)
{
	t_list	*last;
	t_list	*o_last;

	if ((!stack_b) || (!*stack_b) || (*stack_b)->next == 0)
		return (0);
	last = *stack_b;
	o_last = last->previous;
	while (last->next)
	{
		o_last = last;
		last = last->next;
	}
	o_last->next = 0;
	last->next = *stack_b;
	*stack_b = last;
	if (write_out)
		ft_putendl_fd("rrb", STDOUT);
	return (1);
}

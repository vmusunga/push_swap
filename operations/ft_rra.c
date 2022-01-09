/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rra.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 17:39:01 by vmusunga          #+#    #+#             */
/*   Updated: 2022/01/09 14:18:31 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_rra(t_list **stack_a, int write_out)
{
	t_list	*last;
	t_list	*o_last;

	if ((!stack_a) || (!*stack_a) || (*stack_a)->next == 0)
		return (0);
	last = *stack_a;
	o_last = last->previous;
	while (last->next)
	{
		o_last = last;
		last = last->next;
	}
	o_last->next = 0;
	last->next = *stack_a;
	*stack_a = last;
	if (write_out)
		ft_putendl_fd("rra", STDOUT);
	return (1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrb.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 17:39:01 by vmusunga          #+#    #+#             */
/*   Updated: 2021/10/27 13:00:22 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_rrb(t_list **stack_b, int write_out)
{
	t_list *last;
	t_list *Olast;

	if ((!stack_b) || (!*stack_b) || (*stack_b)->next == 0)
		return (0);
	last = *stack_b;
	Olast = last->previous;
	while (last->next)
	{
		Olast = last;
		last = last->next;
	}
	Olast->next = 0;
	last->next = *stack_b;
	*stack_b = last;
	if (write_out)
		ft_putendl_fd("rrb", STDOUT);
	return (1);
}
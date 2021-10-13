/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rra.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 17:39:01 by vmusunga          #+#    #+#             */
/*   Updated: 2021/10/13 14:31:24 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_rra(t_list **stack_a)
{
	t_list *last;
	t_list *Olast;

	if ((!stack_a) || (!*stack_a) || (*stack_a)->next == 0)
		return ;
	last = *stack_a;
	Olast = last->previous;
	while (last->next)
	{
		Olast = last;
		last = last->next;
	}
	Olast->next = 0;
	last->next = *stack_a;
	*stack_a = last;
	return ;
}
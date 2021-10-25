/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 12:32:49 by vmusunga          #+#    #+#             */
/*   Updated: 2021/10/25 14:58:25 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_pb(t_list **stack_a, t_list **stack_b)
{
	t_list *first;

	if ((!stack_a) || (!*stack_a))
		return ;
	first = *stack_a;
	*stack_a = (*stack_a)->next;
	if (!*stack_b)
	{
		first->next = 0;
		*stack_b = first;
	}
	else
	{
		/*tmp->content = first->content;
		(*stack_b)->previous = tmp;
		tmp->next = *stack_b;
		*stack_b = tmp;*/
		ft_lstadd_front(stack_b, first);
	}
	//first->next = *stack_b;
	//ft_lstadd_front(stack_b, first);
	free(first);
	return ;
}
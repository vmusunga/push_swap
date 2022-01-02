/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 12:32:49 by vmusunga          #+#    #+#             */
/*   Updated: 2022/01/02 20:28:19 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_pb(t_list **stack_a, t_list **stack_b, int write_out) //LEAKS
{
	t_list *first;

	if ((!stack_b) || (!stack_a) || (!*stack_a))
		return (0);
	first = *stack_a;
	*stack_a = (*stack_a)->next;
	if (!*stack_b)
	{
		first->next = 0;
		*stack_b = first;
	}
	else
		ft_lstadd_front(stack_b, first);
	if (write_out)
		ft_putendl_fd("pb", STDOUT);
	//free(first);
	//first = 0;
	return (1);
}
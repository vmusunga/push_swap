/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 12:32:49 by vmusunga          #+#    #+#             */
/*   Updated: 2021/10/27 16:42:01 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_pa(t_list **stack_a, t_list **stack_b, int write_out) //LEAKS
{
	t_list *first;

	if ((!stack_a) || (!stack_b) || (!*stack_b))
		return (0);
	first = *stack_b;
	*stack_b = (*stack_b)->next;
	if (!*stack_a)
	{
		first->next = 0;
		*stack_b = first;
	}
	else
		ft_lstadd_front(stack_a, first);
	if (write_out)
		ft_putendl_fd("pa", STDOUT);
	//free(first);
	//first = 0;
	return (1);
}
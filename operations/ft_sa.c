/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 16:15:34 by vmusunga          #+#    #+#             */
/*   Updated: 2021/10/26 17:29:04 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_sa(t_list **stack_a, int write_out)
{
	t_list *first;
	t_list *second;
	t_list *third;
	
	if ((!stack_a) || (!*stack_a) || (*stack_a)->next == 0)
		return (0);
	
	// base
	first = *stack_a;
	second = first->next;
	third = second->next;

	// switch
	*stack_a = second;
	second->next = first;
	second->previous = 0;

	// base 2
	first->next = third;
	first->previous = second;
	if (write_out)
		ft_putendl_fd("sa", STDOUT);
	return (1);
}
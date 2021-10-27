/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 16:15:34 by vmusunga          #+#    #+#             */
/*   Updated: 2021/10/27 13:00:27 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_sb(t_list **stack_b, int write_out)
{
	t_list *first;
	t_list *second;
	t_list *third;
	
	if ((!stack_b) || (!*stack_b) || (*stack_b)->next == 0)
		return (0);
	
	// base
	first = *stack_b;
	second = first->next;
	third = second->next;

	// switch
	*stack_b = second;
	second->next = first;
	second->previous = 0;

	// base 2
	first->next = third;
	first->previous = second;
	if (write_out)
		ft_putendl_fd("sb", STDOUT);
	return (1);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ra.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 15:34:23 by vmusunga          #+#    #+#             */
/*   Updated: 2021/10/26 17:20:11 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_ra(t_list **stack_a, int write_out)
{
	t_list *first;

	if ((!stack_a) || (!*stack_a) || (*stack_a)->next == 0)
		return (0);

	first = *stack_a;
	*stack_a = (*stack_a)->next;
	ft_lstadd_back(stack_a, first);
	if (write_out)
		ft_putendl_fd("ra", STDOUT);
	return (1);
}
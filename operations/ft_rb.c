/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 15:34:23 by vmusunga          #+#    #+#             */
/*   Updated: 2021/10/27 13:00:18 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_rb(t_list **stack_b, int write_out)
{
	t_list *first;

	if ((!stack_b) || (!*stack_b) || (*stack_b)->next == 0)
		return (0);

	first = *stack_b;
	*stack_b = (*stack_b)->next;
	ft_lstadd_back(stack_b, first);
	if (write_out)
		ft_putendl_fd("rb", STDOUT);
	return (1);
}
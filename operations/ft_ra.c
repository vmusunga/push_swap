/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ra.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 15:34:23 by vmusunga          #+#    #+#             */
/*   Updated: 2021/10/12 18:14:11 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_ra(t_list **stack_a)
{
	t_list *first;

	if ((!stack_a) || (!*stack_a) || (*stack_a)->next == 0)
		return ;

	first = *stack_a;
	*stack_a = (*stack_a)->next;
	ft_lstadd_back(stack_a, first);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmin.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 13:57:05 by vmusunga          #+#    #+#             */
/*   Updated: 2021/11/06 14:00:21 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_lstmin(t_list **stack_a)
{
	int min;

	min = (*stack_a)->content;
	while (*stack_a)
	{
		if ((*stack_a)->content < min)
			min = (*stack_a)->content;
		*stack_a = (*stack_a)->next;
	}
	return (min);
}
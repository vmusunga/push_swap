/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_output_check.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 13:16:04 by vmusunga          #+#    #+#             */
/*   Updated: 2021/11/06 13:27:06 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_output_check(t_list **stack_a)
{
	t_list *current;
	
	while ((*stack_a)->next != 0)
	{
		current = *stack_a;
		if ((*stack_a)->next->content < current->content)
		{
			ft_putendl_fd("KO", STDOUT);
			return (1);
		}
		*stack_a = (*stack_a)->next;
	}
	ft_putendl_fd("OK", STDOUT);
	return (0);
}
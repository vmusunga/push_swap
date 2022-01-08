/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_output_check.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 13:16:04 by vmusunga          #+#    #+#             */
/*   Updated: 2022/01/08 16:16:51 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_output_check(t_list **stack_a, int i)
{
	t_list *current;
	
	current = *stack_a;
	while (current->next != 0)
	{
		if (current->next->content < current->content)
		{
			if (i == 1)
				ft_putendl_fd("KO", STDOUT);
			return (1);
		}
		current = (current)->next;
	}
	if (i == 1)
		ft_putendl_fd("OK", STDOUT);
	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_min.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vic <vic@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 17:19:43 by vmusunga          #+#    #+#             */
/*   Updated: 2022/04/07 15:33:27 by vic              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_sec_min(t_list **stack_a, int min1)
{
	int		min2;
	t_list	*current;

	current = (*stack_a);
	min2 = current->content;
	current = (*stack_a)->next;
	while (current)
	{
		if (current->content < min2 && current->content > min1)
			min2 = current->content;
		current = current->next;
	}
	free(current);
	return (min2);
}

void	ft_wich_min(t_list **stack_a, int swich)
{
	int	min1;
	int	min2;

	min1 = ft_lstmin(stack_a);
	min2 = ft_sec_min(stack_a, min1);
	if (ft_n_ops(stack_a, min1) <= ft_n_ops(stack_a, min2))
		ft_nb_to_top(stack_a, min1, swich);
	if (ft_n_ops(stack_a, min2) < ft_n_ops(stack_a, min1))
		ft_nb_to_top(stack_a, min2, swich);
	return ;
}

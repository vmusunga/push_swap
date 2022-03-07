/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_min.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vic <vic@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 17:19:43 by vmusunga          #+#    #+#             */
/*   Updated: 2022/03/07 15:25:10 by vic              ###   ########.fr       */
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

// int	ft_sec_min(t_list **stack_a, int min1)
// {
// 	int		min2;
// 	t_list	*current;

// 	current = (*stack_a);
// 	min2 = current->content;
// 	current = (*stack_a)->next;
// 	while (current)
// 	{
// 		if (current->content < min2 && current->content =! min1)
// 			min2 = current->content;
// 		current = current->next;
// 	}
// 	free(current);
// 	return (min2);
// }

void	ft_wich_min(t_list **stack_a)
{
	int	min1;
	int	min2;

	min1 = ft_lstmin(stack_a);
	min2 = ft_sec_min(stack_a, min1);
	if (ft_n_ops(stack_a, min1) <= ft_n_ops(stack_a, min2))
		ft_nb_to_top(stack_a, min1);
	if (ft_n_ops(stack_a, min2) < ft_n_ops(stack_a, min1))
		ft_nb_to_top(stack_a, min2);
	return ;
}

void	ft_wich_min_set(t_list **stack_a, int min_set)
{
	int	min1;
	int	min2;

	min1 = ft_lstmin(stack_a);
	if (min1 <= min_set)
		min1 = ft_sec_min(stack_a, min_set);
	min2 = ft_sec_min(stack_a, min1);
	if (ft_n_ops(stack_a, min1) <= ft_n_ops(stack_a, min2))
		ft_nb_to_top(stack_a, min1);
	if (ft_n_ops(stack_a, min2) < ft_n_ops(stack_a, min1))
		ft_nb_to_top(stack_a, min2);
	return ;
}



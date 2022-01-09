/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_greater_than.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 18:07:13 by vmusunga          #+#    #+#             */
/*   Updated: 2022/01/09 14:32:21 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_lesser_than(t_list *stack, int top_nb)
{
	int		x;
	t_list	*current;

	if (!stack)
		return (0);
	current = stack;
	x = ft_lstmin(&stack);
	while (current)
	{
		if (x < current->content && current->content < top_nb)
			x = current->content;
		current = current->next;
	}
	free(current);
	return (x);
}

int	ft_greater_than(t_list *stack, int top_nb)
{
	int		x;
	t_list	*current;

	if (!stack)
		return (0);
	current = stack;
	x = ft_lstmax(&stack);
	while (current)
	{
		if (top_nb < current->content && current->content < x)
			x = current->content;
		current = current->next;
	}
	free(current);
	return (x);
}

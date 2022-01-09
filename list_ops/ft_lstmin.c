/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmin.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 13:57:05 by vmusunga          #+#    #+#             */
/*   Updated: 2022/01/09 14:09:52 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_lstmin(t_list **stack)
{
	int		min;
	t_list	*current;

	if (!stack || !*stack)
		return (0);
	current = (*stack);
	min = current->content;
	current = (*stack)->next;
	while (current)
	{
		if (current->content < min)
			min = current->content;
		current = current->next;
	}
	free(current);
	return (min);
}

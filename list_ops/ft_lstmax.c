/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmax.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 15:11:43 by vmusunga          #+#    #+#             */
/*   Updated: 2021/12/06 15:13:09 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_lstmax(t_list **stack)
{
	int max;
	t_list *current;
	if (!stack || !*stack)
		return (0);

	current = (*stack);
	max = current->content;
	current = (*stack)->next;
	while (current)
	{
		if (current->content > max)
			max = current->content;
		current = current->next;
	}
	free(current);
	return (max);
}
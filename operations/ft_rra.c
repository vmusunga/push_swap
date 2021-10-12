/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rra.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 17:39:01 by vmusunga          #+#    #+#             */
/*   Updated: 2021/10/12 18:56:48 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_rra(t_list **stack_a)
{
	t_list *last;
	t_list *first;
	//t_list *second;
	t_list *Olast;
	
	if ((!stack_a) || (!*stack_a) || (*stack_a)->next == 0)
		return ;
	
	//base
	first = *stack_a;
	last = ft_lstlast(*stack_a);
	//second = first->next;
	
	
	Olast = last->previous;
	
	// last on top
	*stack_a = last;
	last->next = first;
	last->previous = 0;
	
	first->previous = last;
	//first->next = second;
	//second->previous = first;
	Olast->next = 0;
	//*stack_a = last;
	return ;
}

/*
void	ft_rra(t_list **stack_a)
{
	t_list *last;
	t_list *buff;
	
	last = *stack_a;
	buff = *stack_a;
	if ((*stack_a)->next == 0)
	{
		ft_lstadd_front(stack_a, last);
		return ;
	}
	else
	{
		while (last->next != 0)
			last = last->next;
	}
	ft_lstadd_front(stack_a, last);
	return ;
}*/
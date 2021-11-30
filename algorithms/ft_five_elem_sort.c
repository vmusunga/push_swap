/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_five_elem_sort.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 17:29:59 by vmusunga          #+#    #+#             */
/*   Updated: 2021/11/30 17:09:22 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_wich_half(t_list **stack, int min)
{
	int len;
	int pos;
	t_list *buff;
	
	len = ft_lstsize(*stack);
	buff = *stack;
	pos = 0;
	while (buff->content != min)
	{
		buff = buff->next;
		pos++;
	}
	if (pos <= len / 2)
		return(0);
	return (1);
}

void	ft_five_elem_sort(t_list **stack_a, t_list **stack_b, int len)   // 13steps "75 64 18 73 69"
{
	t_list *first;
	t_list *last;
	int min;

	min = ft_lstmin(stack_a);
	if (len == 4)
		ft_pb(stack_a, stack_b, 1);
	if (len == 5)
	{
		ft_min_to_top(stack_a, min);
		ft_pb(stack_a, stack_b, 1);
		ft_pb(stack_a, stack_b, 1);
		ft_two_elem_sort(stack_b);
	}
	ft_three_elem_sort(stack_a);
	print_list(*stack_a, *stack_b);
	last = ft_lstlast(*stack_a);
	while (*stack_b)
	{
		while ((*stack_a)->content < (*stack_b)->content && last->content > (*stack_b)->content)
			ft_ra(stack_a, 1);
		ft_pa(stack_a, stack_b, 1);
	}
	print_list(*stack_a, *stack_b);
	if ((*stack_a)->content > (*stack_a)->next->content)
		ft_ra(stack_a, 1);
	first = *stack_a;
	last = ft_lstlast(*stack_a);
	while (last->content < first->content)
	{
		ft_ra(stack_a, 1);
		first = *stack_a;
		last = ft_lstlast(*stack_a);
	}
	return ;
}






// SAVE 6/11 (working, too slow)

/*void	ft_five_elem_sort(t_list **stack_a, t_list **stack_b, int len)
{
	t_list *first;
	t_list *last;
	int min;

	if (len == 4)
		ft_pb(stack_a, stack_b, 1);
	if (len == 5)
	{
		min = ft_lstmin(stack_a);

		while ((*stack_a)->content != min)
			ft_ra(stack_a, 1);
		ft_pb(stack_a, stack_b, 1);
		ft_pb(stack_a, stack_b, 1);
		ft_two_elem_sort(stack_b);
	}
	ft_three_elem_sort(stack_a);
	print_list(*stack_a, *stack_b);
	last = ft_lstlast(*stack_a);
	while (*stack_b)
	{
		while ((*stack_a)->content < (*stack_b)->content && last->content > (*stack_b)->content)
			ft_ra(stack_a, 1);
		ft_pa(stack_a, stack_b, 1);
	}
	print_list(*stack_a, *stack_b);
	if ((*stack_a)->content > (*stack_a)->next->content)
		ft_ra(stack_a, 1);
	first = *stack_a;
	last = ft_lstlast(*stack_a);
	while (last->content < first->content)
	{
		ft_ra(stack_a, 1);
		first = *stack_a;
		last = ft_lstlast(*stack_a);
	}
	return ;
}*/

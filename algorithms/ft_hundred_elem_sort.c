/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hundred_elem_sort.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 20:20:10 by vmusunga          #+#    #+#             */
/*   Updated: 2021/11/30 18:48:52 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_sec_min(t_list **stack_a, int min1)
{
	int min2;
	t_list *current;

	current = (*stack_a);
	min2 = current->content;
	current = (*stack_a)->next;
	while (current)
	{
		if (current->content < min2 && current->content != min1)
			min2 = current->content;
		current = current->next;
	}
	free(current);
	return (min2);
}

void	ft_wich_min(t_list **stack_a)
{
	int min1;
	int min2;

	min1 = ft_lstmin(stack_a);
	min2 = ft_sec_min(stack_a, min1);
	if (ft_n_ops(stack_a, min1) <= ft_n_ops(stack_a, min2))
		ft_min_to_top(stack_a, min1);
	if (ft_n_ops(stack_a, min2) < ft_n_ops(stack_a, min1))
		ft_min_to_top(stack_a, min2);
	return ;
}

int	ft_greater_than(t_list *stack, int top_nb)     //in progress
{
	t_list *current;
	int x;

	if (!stack)
		return (0);

	current = stack;
	x = current->content;
	while (current)
	{
		if (top_nb > current->content && current->content > x)
			x = current->content;
		current = current->next;
	}
	free(current);
	return (x);
}

void	ft_hundred_elem_sort(t_list **stack_a, t_list **stack_b)         //pushing on min then rb
{
	int len;
	int chunk;

	len = ft_lstsize(*stack_a);
	chunk = len;

	while (chunk != 0)
	{
		ft_wich_min(stack_a);   //sends correct min to top of A
		print_list(*stack_a, *stack_b);
		if (*stack_b)
		{
			if ((*stack_a)->content < ft_lstmin(stack_b))
				ft_min_to_top(stack_b, ft_lstmin(stack_b));   //ensure the right min is on top before pushing
		}
		print_list(*stack_a, *stack_b);
		ft_pb(stack_a, stack_b, 1);
		if ((*stack_b)->content < ft_lstmin(stack_b))   //rotate last added unless its a new min
			ft_rb(stack_b, 1);
		if (ft_lstsize(*stack_b) >= 3 && (*stack_b)->content < (*stack_b)->next->content)   //checks 2first if switch needed
			ft_sb(stack_b, 1);
		chunk--;
	}
	return ;
}





/*void	ft_hundred_elem_sort(t_list **stack_a, t_list **stack_b)        //nb just before on top of b before pushing technique
{
	int len;
	int chunk;
	int right_b;

	len = ft_lstsize(*stack_a);
	chunk = 6;

	while (chunk != 0)
	{
		ft_wich_min(stack_a);   //sends correct min to top of A
		printf("\nBEFORE WHILE -- %d\n", ft_greater_than(*stack_b, (*stack_a)->content));
		print_list(*stack_a, *stack_b);
		if (*stack_b)
		{
			if ((*stack_a)->content < ft_lstmin(stack_b))
				ft_min_to_top(stack_b, ft_lstmin(stack_b));   //ensure the right min is on top before pushing
			if (ft_lstsize(*stack_b) > 2)
				ft_min_to_top_b(stack_b, ft_greater_than(*stack_b, (*stack_a)->content));   //ensure the right min is on top before pushing
		}
		print_list(*stack_a, *stack_b);
		ft_pb(stack_a, stack_b, 1);
		if (ft_lstsize(*stack_b) >= 3 && (*stack_b)->content < (*stack_b)->next->content)
			ft_sb(stack_b, 1);
		chunk--;
	}
	return ;
}*/

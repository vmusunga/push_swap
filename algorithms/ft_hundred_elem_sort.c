/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hundred_elem_sort.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 20:20:10 by vmusunga          #+#    #+#             */
/*   Updated: 2021/12/28 16:27:33 by vmusunga         ###   ########.fr       */
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
		ft_nb_to_top(stack_a, min1);
	if (ft_n_ops(stack_a, min2) < ft_n_ops(stack_a, min1))
		ft_nb_to_top(stack_a, min2);
	return ;
}



int	ft_lesser_than(t_list *stack, int top_nb)     //in progress
{
	t_list *current;
	int x;
	
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

void	ft_hundred_elem_sort(t_list **stack_a, t_list **stack_b)
{
	int len;
	int chunk;

	len = ft_lstsize(*stack_a);
	chunk = len;
	while (chunk != 0)
	{
		ft_wich_min(stack_a);   //sends correct min to top of A
		if (*stack_b)
		{
			if ((*stack_a)->content < ft_lstmin(stack_b))
				ft_nb_to_top(stack_b, ft_lstmax(stack_b));   //ensure the max is on top before pushing
			if ((*stack_a)->content > ft_lstmin(stack_b) && (*stack_a)->content < ft_lstmax(stack_b))
				ft_nb_to_top_b(stack_b, ft_lesser_than(*stack_b, (*stack_a)->content));   //if between min & max, find right one (progress)
			else
				ft_nb_to_top(stack_b, ft_lstmax(stack_b));
		}
		print_list(*stack_a, *stack_b);
		ft_pb(stack_a, stack_b, 1);
		ft_nb_to_top(stack_b, ft_lstmax(stack_b));
		chunk--;
	}
	//while (stack_b)
	//	ft_pa(stack_a, stack_b, 1);
	return ;
}


/*int	ft_greater_than(t_list *stack, int top_nb)     //in progress
{
	t_list *current;
	int x;

	if (!stack)
		return (0);

	current = stack;
	x = top_nb + 1;   //should be x = ft_lstmax(&stack)
	while (current)
	{
		if (top_nb < current->content && current->content < x)
			x = current->content;
		current = current->next;
	}
	free(current);
	return (x);
}*/

/*void	ft_hundred_elem_sort(t_list **stack_a, t_list **stack_b)         //sends to stack_b, from lesser to greater
{
	int len;
	int chunk;
	int switch1;

	switch1 = 0;
	len = ft_lstsize(*stack_a);
	chunk = len;

	while (chunk != 0)
	{
		ft_wich_min(stack_a);   //sends correct min to top of A
		print_list(*stack_a, *stack_b);
		if (*stack_b)
		{
			if ((*stack_a)->content < ft_lstmin(stack_b))
				ft_nb_to_top(stack_b, ft_lstmin(stack_b));   //ensure the right min is on top before pushing
			if ((*stack_a)->content > ft_lstmin(stack_b) && (*stack_a)->content < ft_lstmax(stack_b))
			{
				ft_nb_to_top_b(stack_b, ft_greater_than(*stack_b, (*stack_a)->content));   //if between min & max, find right one (progress)
				switch1 = 1;
			}
			else
				ft_nb_to_top(stack_b, ft_lstmin(stack_b));
		}
		print_list(*stack_a, *stack_b);
		ft_pb(stack_a, stack_b, 1);
		//if ((*stack_b)->content > ft_lstmin(stack_b))   //rotate last added unless its a new min
		//	ft_rb(stack_b, 1);
		//if (switch1)
		//	ft_rb(stack_b, 1);
		chunk--;
	}
	return ;*/
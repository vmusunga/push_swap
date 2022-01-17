/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 12:58:08 by vmusunga          #+#    #+#             */
/*   Updated: 2022/01/17 15:14:01 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

void	ft_hundred_elem_sort(t_list **stack_a, t_list **stack_b)
{
	int i;
	int len;
	int chunk;

	len = ft_lstsize(*stack_a);
	chunk = len / 6;
	i = 0;
	while (*stack_a && i <= chunk)
	{
		if (i == chunk && ft_lstmin(stack_a) < ft_lstmax(stack_b))
				ft_nb_to_top(stack_a, ft_lstmin(stack_a));
		else
			ft_wich_min(stack_a);   //sends correct min to top of A
		if (*stack_b)
		{
			if ((*stack_a)->content < ft_lstmin(stack_b))
				ft_nb_to_top(stack_b, ft_lstmax(stack_b));   //ensure the max is on top before pushing
			if ((*stack_a)->content > ft_lstmin(stack_b) && (*stack_a)->content < ft_lstmax(stack_b))
				ft_nb_to_top_b(stack_b, ft_lesser_than(*stack_b, (*stack_a)->content));   //if between min & max, find right one
			else
				ft_nb_to_top(stack_b, ft_lstmax(stack_b));
		}
		ft_pb(stack_a, stack_b, 1);
		i++;
		// print_list(*stack_a, *stack_b);
		if (i == chunk)
		{
			ft_nb_to_top(stack_b, ft_lstmax(stack_b));
			chunk += len / 6;
		}	
		//chunk--;
	}
	while (*stack_b)
		ft_pa(stack_a, stack_b, 1);
	return ;
}


		// if ((*stack_b)->content < ft_lstmin(stack_a))
		// 	ft_nb_to_top(stack_a, ft_lstmin(stack_a));
		// if ((*stack_b)->content > ft_lstmin(stack_a) && (*stack_b)->content < ft_lstmax(stack_a))
		// 	ft_nb_to_top(stack_a, ft_greater_than(*stack_a, (*stack_b)->content));   //if between min & max, find right one
		// else
		// 	ft_nb_to_top(stack_a, ft_lstmin(stack_a));
		// ft_pa(stack_a, stack_b, 1);


		// while ((*stack_a)->content < (*stack_b)->content && last->content > (*stack_b)->content)
		// 	ft_ra(stack_a, 1);

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
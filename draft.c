/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 12:58:08 by vmusunga          #+#    #+#             */
/*   Updated: 2022/04/04 15:02:10 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

int	ft_sec_min_set(t_list **stack_a, int min_set)
{
	int		min2;
	t_list	*current;

	current = (*stack_a);
	//min2 = current->content;
	min2 = ft_lstmax(stack_a);
	current = (*stack_a)->next;
	while (current)
	{
		if (current->content <= min2 && current->content > min_set)
			min2 = current->content;
		current = current->next;
	}
	free(current);
	return (min2);
}

void	ft_wich_min_set(t_list **stack_a, int min_set)
{
	int	min1;
	int	min2;

	min1 = min_set;
	//if (min1 < min_set)
	min1 = ft_sec_min_set(stack_a, min_set);
	min2 = ft_sec_min_set(stack_a, min1);
	// printf("\nMIN_SET:	%d", min_set); 
	// printf("\nMIN1:	%d", min1); 
	// printf("\nMIN2:	%d", min2);
	if (ft_n_ops(stack_a, min1) <= ft_n_ops(stack_a, min2))
		ft_nb_to_top(stack_a, min1);
	if (ft_n_ops(stack_a, min2) < ft_n_ops(stack_a, min1))
		ft_nb_to_top(stack_a, min2);
	return ;
}

// void	ft_hundred_elem_sort(t_list **stack_a, t_list **stack_b)
// {
// 	int i;
// 	int len;
// 	int chunk;
// 	int min_set;

// 	min_set = ft_lstmin(stack_a);
// 	len = ft_lstsize(*stack_a);
// 	chunk = len / 6;
// 	i = 0;
// 	while (*stack_a && i <= chunk)
// 	{
// 		// printf("\nmin_set = %d\n", min_set);
// 		// printf("\nI = %d\n", i);
// 		// printf("chunk = %d\n", chunk);
// 		if (i == chunk) 
// 		{
// 			if (ft_lstmin(stack_b) < ft_lstmin(stack_a))
// 			{
// 				min_set = ft_lstmax(stack_b);
// 				// printf("\nmin_set = %d\n", min_set);
// 				ft_nb_to_top(stack_b, ft_lstmax(stack_b));
// 				ft_nb_to_top(stack_a, ft_lstmin(stack_a));
// 				while (*stack_b)
// 				{
// 					ft_pa(stack_a, stack_b, 1);
// 					i = 0;
// 				}
// 				ft_wich_min_set(stack_a, min_set);   // TRIES TO send correct min to top of A
// 				// print_list(*stack_a, *stack_b);
// 			}
// 			if (ft_lstmin(stack_a) < ft_lstmax(stack_b))
// 			{
// 				if (ft_lstmin(stack_a) == min_set)
// 					ft_nb_to_top(stack_a, ft_lstmin(stack_a));  
// 				else
// 					ft_wich_min_set(stack_a, min_set);
// 				// printf("\nHERE\n");
// 				// print_list(*stack_a, *stack_b);
// 				i = 0;
// 			}
// 			// print_list(*stack_a, *stack_b);
// 			// chunk += len / 6;
// 		}
// 		else
// 		{
// 			ft_wich_min_set(stack_a, min_set);   //TRIES TO send correct min to top of A
// 			// printf("\n BUG?\n");
// 		}
// 		if (*stack_b)
// 		{
// 			if ((*stack_a)->content < ft_lstmin(stack_b))
// 				ft_nb_to_top(stack_b, ft_lstmax(stack_b));   //ensure the max is on top before pushing
// 			if ((*stack_a)->content > ft_lstmin(stack_b) && (*stack_a)->content < ft_lstmax(stack_b))
// 				ft_nb_to_top_b(stack_b, ft_lesser_than(*stack_b, (*stack_a)->content));   //if between min & max, find right one
// 			if ((*stack_a)->content > ft_lstmax(stack_b))
// 				ft_nb_to_top(stack_b, ft_lstmax(stack_b));
// 		}
// 		if (!(*stack_b) && !ft_output_check(stack_a, 0))
// 			return ;
// 		ft_pb(stack_a, stack_b, 1);
// 		i++;
// 		// print_list(*stack_a, *stack_b);
// 	}
// 	while (*stack_b)
// 		ft_pa(stack_a, stack_b, 1);
// 	if (ft_lstmin(stack_a) != (*stack_a)->content)
// 		ft_nb_to_top(stack_a, ft_lstmin(stack_a));
// 	return ;
// }

// min_set = ft_lstmin(stack_a);
// if (i == chunk && ft_lstmax(stack_b) < ft_lstmin(stack_a))
// {
// 	min_set = ft_lstmax(stack_b);
// 	while (stack_b)
// 		ft_pa(stack_a, satck_b, 1);
// }
	


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
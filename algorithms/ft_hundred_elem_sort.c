/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hundred_elem_sort.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 20:20:10 by vmusunga          #+#    #+#             */
/*   Updated: 2022/01/17 15:11:24 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// void	ft_correct_push(t_list **stack_a, t_list **stack_b)
// {
// 	if ((*stack_a)->content < ft_lstmin(stack_b))
// 		ft_nb_to_top(stack_b, ft_lstmax(stack_b));
// 	if ((*stack_a)->content > ft_lstmin(stack_b)
// 		&& (*stack_a)->content < ft_lstmax(stack_b))
// 		ft_nb_to_top_b(stack_b, ft_lesser_than(*stack_b, (*stack_a)->content));
// 	else
// 		ft_nb_to_top(stack_b, ft_lstmax(stack_b));
// 	return ;
// }

// void	ft_hundred_elem_sort(t_list **stack_a, t_list **stack_b)
// {
// 	int	len;
// 	int	chunk;

// 	len = ft_lstsize(*stack_a);
// 	chunk = len;
// 	while (*stack_a)
// 	{
// 		ft_wich_min(stack_a);
// 		if (*stack_b)
// 			ft_correct_push(stack_a, stack_b);
// 		ft_pb(stack_a, stack_b, 1);
// 		print_list(*stack_a, *stack_b);
// 		ft_nb_to_top(stack_b, ft_lstmax(stack_b));
// 		chunk--;
// 	}
// 	while (*stack_b)
// 		ft_pa(stack_a, stack_b, 1);
// 	return ;
// }

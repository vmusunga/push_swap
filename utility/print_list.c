/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vic <vic@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 16:03:27 by vic               #+#    #+#             */
/*   Updated: 2022/04/07 17:47:34 by vic              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	print_list(t_list *stack_a, t_list *stack_b)
{
	printf("\n");
	printf("A	B\n");
	while (stack_a || stack_b)
	{
		if (stack_a)
			printf("%d	", stack_a->content);
		if (stack_b && stack_a)
			printf("%d", stack_b->content);
		if (stack_b && !stack_a)
			printf("	%d", stack_b->content);
		printf("\n");
		if (stack_a)
			stack_a = stack_a->next;
		if (stack_b)
			stack_b = stack_b->next;
	}
	printf("\n");
	return ;
}

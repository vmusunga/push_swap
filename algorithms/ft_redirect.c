/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_redirect.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 15:35:28 by vmusunga          #+#    #+#             */
/*   Updated: 2021/10/27 16:43:10 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_redirect(t_list **stack_a, t_list **stack_b, int len)
{
	if (stack_b)
	if (len < 4)
		ft_short_list(stack_a);
	//if (len < 5)
	printf("\n");
	
	print_list(*stack_a, *stack_b);
	
	return ;
}
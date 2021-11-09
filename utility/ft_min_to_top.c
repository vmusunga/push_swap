/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_min_to_top.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 21:37:13 by vmusunga          #+#    #+#             */
/*   Updated: 2021/11/09 21:44:36 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_min_to_top(t_list **stack, int min)
{
	if (!ft_wich_half(stack, min))
	{
		while ((*stack)->content != min)
			ft_ra(stack, 1);
	}
	else
	{
		while ((*stack)->content != min)
			ft_rra(stack, 1);
	}
	return ;
}
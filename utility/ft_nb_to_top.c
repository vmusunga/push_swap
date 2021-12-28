/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_min_to_top.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 21:37:13 by vmusunga          #+#    #+#             */
/*   Updated: 2021/12/28 15:01:37 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_nb_to_top(t_list **stack, int nb)
{
	if (!ft_wich_half(stack, nb))
	{
		while ((*stack)->content != nb)
			ft_ra(stack, 1);
	}
	else
	{
		while ((*stack)->content != nb)
			ft_rra(stack, 1);
	}
	return ;
}

void	ft_nb_to_top_b(t_list **stack, int nb)
{
	if (!ft_wich_half(stack, nb))
	{
		while ((*stack)->content != nb)
			ft_rb(stack, 1);
	}
	else
	{
		while ((*stack)->content != nb)
			ft_rrb(stack, 1);
	}
	return ;
}
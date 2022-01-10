/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_n_ops.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 17:29:59 by vmusunga          #+#    #+#             */
/*   Updated: 2022/01/10 17:45:21 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_n_ops(t_list **stack_a, int min)    //NO FREE NEEDED
{
	int		len;
	int		pos;
	int		n_ops_up;
	int		n_ops_down;
	t_list	*buff;

	len = ft_lstsize(*stack_a);
	buff = *stack_a;
	pos = 0;
	while (buff->content != min)
	{
		buff = buff->next;
		pos++;
	}
	n_ops_down = len - pos;
	n_ops_up = pos;
	if (n_ops_up < n_ops_down)
		return (n_ops_up);
	return (n_ops_down);
}

int	ft_wich_half(t_list **stack, int min)
{
	int		len;
	int		pos;
	t_list	*buff;

	len = ft_lstsize(*stack);
	buff = *stack;
	pos = 0;
	while (buff->content != min)
	{
		buff = buff->next;
		pos++;
	}
	if (pos <= len / 2)
		return (0);
	return (1);
}

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

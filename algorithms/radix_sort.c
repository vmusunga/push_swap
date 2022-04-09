/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 14:42:43 by vmusunga          #+#    #+#             */
/*   Updated: 2022/04/09 14:49:05 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_index_list(int *tab, t_list **stack_a)
{
	int		i;
	t_list	*current;

	i = 0;
	current = *stack_a;
	while (current)
	{
		current->content = tab[i];
		current = current->next;
		i++;
	}
	return ;
}

void	ft_index(t_utils *utils, int *tab0, int *tab1)
{
	int	i;
	int	j;

	i = 0;
	while (i < utils->input_len)
	{
		j = 0;
		while (j < utils->input_len)
		{
			if (tab0[i] == tab1[j])
			{
				tab0[i] = j;
				break ;
			}
		j++;
		}
	i++;
	}
	return ;
}

void	ft_sorting(t_list **stack_a, t_list **stack_b, t_utils *utils)
{
	int	i;
	int	x;
	int	bitnb;

	bitnb = 0;
	while (((utils->input_len - 1) >> bitnb) != 0)
		bitnb++;
	x = 0;
	while (x < bitnb)
	{
		i = 0;
		while (i < utils->input_len)
		{
			if ((((*stack_a)->content >> x) & 1) == 1)
				ft_ra(stack_a, 1);
			else
				ft_pb(stack_a, stack_b, 1);
			i++;
		}
		while (*stack_b)
			ft_pa(stack_a, stack_b, 1);
		x++;
	}
	return ;
}

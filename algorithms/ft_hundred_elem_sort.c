/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hundred_elem_sort.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vic <vic@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 20:20:10 by vmusunga          #+#    #+#             */
/*   Updated: 2022/04/07 17:21:29 by vic              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	first_steps(t_list **stack_a, t_list **stack_b, t_utils *utils)
{
	int	*tab0;
	int	*tab1;

	tab0 = ft_list_to_tab(stack_a);
	ft_hundred_elem_sort(stack_a, stack_b);
	tab1 = ft_list_to_tab(stack_a);
	ft_index(utils, tab0, tab1);
	ft_index_list(tab0, stack_a);
	ft_sorting(stack_a, stack_b, utils);
	free(tab0);
	free(tab1);
	return ;
}

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
	int	bitmax;

	bitmax = utils->input_len - 1;
	bitnb = 0;
	while ((bitmax >> bitnb) != 0)
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

void	hundred_sort1(t_list **stack_a, t_list **stack_b)
{
	if ((*stack_a)->content < ft_lstmin(stack_b))
		ft_nb_to_top_b(stack_b, ft_lstmax(stack_b), 0);
	if ((*stack_a)->content > ft_lstmin(stack_b) && (*stack_a)->content < ft_lstmax(stack_b))
		ft_nb_to_top_b(stack_b, ft_lesser_than(*stack_b, (*stack_a)->content), 0);
	else
		ft_nb_to_top_b(stack_b, ft_lstmax(stack_b), 0);
	return ;
}

void	hundred_sort2(t_list **stack_a, t_list **stack_b, int chunk, int len, int i)
{
	if (i == chunk && ft_lstmin(stack_a) < ft_lstmax(stack_b))
			ft_nb_to_top(stack_a, ft_lstmin(stack_a), 0);
	else
		ft_wich_min(stack_a, 0);
	if (*stack_b)
		hundred_sort1(stack_a, stack_b);
	ft_pb(stack_a, stack_b, 0);
	i++;
	if (i == chunk)
	{
		ft_nb_to_top_b(stack_b, ft_lstmax(stack_b), 0);
		chunk += len / 6;
	}
}

void	ft_hundred_elem_sort(t_list **stack_a, t_list **stack_b)
{
	int	i;
	int	len;
	int	chunk;

	len = ft_lstsize(*stack_a);
	chunk = len / 6;
	i = 0;
	while (*stack_a && i <= chunk)
		hundred_sort2(stack_a, stack_b, chunk, len, i);
	while (*stack_b)
		ft_pa(stack_a, stack_b, 0);
	if (ft_output_check(stack_a, 0))
		ft_nb_to_top(stack_a, ft_lstmin(stack_a), 0);
	return ;
}

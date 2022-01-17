/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_three_elem_sort.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 16:47:45 by vmusunga          #+#    #+#             */
/*   Updated: 2022/01/17 15:00:21 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_three_elem_sort(t_list **lst)
{
	int	sec;
	int	third;

	sec = (*lst)->next->content;
	third = (*lst)->next->next->content;
	if (!lst || !*lst)
		return ;
	if ((*lst)->content > sec && (*lst)->content > third && sec > third)
	{
		ft_sa(lst, 1);
		ft_rra(lst, 1);
	}
	else if ((*lst)->content < sec && (*lst)->content < third && third < sec)
	{
		ft_sa(lst, 1);
		ft_ra(lst, 1);
	}
	else if ((*lst)->content > third && sec < third)
		ft_ra(lst, 1);
	else if ((*lst)->content > sec)
		ft_sa(lst, 1);
	else if ((*lst)->content < sec && sec > third)
		ft_rra(lst, 1);
	return ;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_three_elem_sort.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 16:47:45 by vmusunga          #+#    #+#             */
/*   Updated: 2021/10/31 02:15:00 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_three_elem_sort(t_list **lst)
{
	int first;
	int sec;
	int third;
	
	first = (*lst)->content;
	sec = (*lst)->next->content;
	third = (*lst)->next->next->content;
	
	if (!lst || !*lst)
		return ;
	if (first > sec && first > third && sec > third)
	{
		ft_sa(lst, 1);
		ft_rra(lst, 1);
	}
	else if (first < sec && first < third && third < sec)
	{
		ft_sa(lst, 1);
		ft_ra(lst, 1);
	}
	else if (first > third && sec < third)
		ft_ra(lst, 1);
	else if (first > sec)
		ft_sa(lst, 1);
	else if (first < sec && sec > third)
		ft_rra(lst, 1);
	return ;
}
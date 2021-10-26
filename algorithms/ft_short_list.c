/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_short_list.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 16:47:45 by vmusunga          #+#    #+#             */
/*   Updated: 2021/10/26 15:20:57 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_short_list(t_list **lst)
{
	int first;
	int sec;
	int third;
	
	first = (*lst)->content;
	sec = (*lst)->next->content;
	third = (*lst)->next->next->content;
	
	if (first > sec && first > third && sec > third)
	{
		ft_sa(lst);
		ft_rra(lst);
	}
	else if (first > third && sec < third)
		ft_ra(lst);
	else if (first < sec && first < third && third < sec)
	{
		ft_sa(lst);
		ft_ra(lst);
	}
	else if (first > sec)
		ft_sa(lst);
	else if (first < sec && sec > third)
		ft_rra(lst);
	return ;
}
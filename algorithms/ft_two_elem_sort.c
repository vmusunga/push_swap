/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_two_elem_sort.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 01:47:15 by vmusunga          #+#    #+#             */
/*   Updated: 2021/10/31 02:02:06 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_two_elem_sort(t_list **lst)
{
	if ((*lst)->content > (*lst)->next->content)
		ft_sa(lst, 1);
	return ;
}
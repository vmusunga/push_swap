/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_n_ops.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 17:29:59 by vmusunga          #+#    #+#             */
/*   Updated: 2021/11/29 13:45:27 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_n_ops(t_list **stack_a, int min)
{
	int len;
	int pos;
	int n_ops_up;
	int n_ops_down;
	t_list *buff;
	
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
	//free(buff);
	if (n_ops_up < n_ops_down)
		return(n_ops_up);
	return (n_ops_down);
}
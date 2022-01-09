/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 11:30:40 by vmusunga          #+#    #+#             */
/*   Updated: 2022/01/09 14:06:04 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*buff;

	buff = *lst;
	if (buff == 0)
		*lst = new;
	else
	{
		while (buff->next != 0)
		{
			buff = buff->next;
		}
		buff->next = new;
		new->next = 0;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 13:24:43 by vmusunga          #+#    #+#             */
/*   Updated: 2022/01/09 14:09:06 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_lstclear(t_list **lst)
{
	t_list	*buff;
	t_list	*ciao;

	if ((!(*lst)) || (!lst))
		return ;
	buff = *lst;
	while (buff != 0)
	{
		ciao = buff;
		buff = buff->next;
		free(ciao);
		ciao = 0;
	}
	*lst = 0;
}

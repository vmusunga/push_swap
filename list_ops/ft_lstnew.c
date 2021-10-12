/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 16:22:58 by vmusunga          #+#    #+#             */
/*   Updated: 2021/10/12 12:41:24 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_list	*ft_lstnew(int tab)
{
	t_list *new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = tab;
	new->next = 0;
	return (new);
}
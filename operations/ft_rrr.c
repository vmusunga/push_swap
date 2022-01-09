/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 17:34:36 by vmusunga          #+#    #+#             */
/*   Updated: 2022/01/09 14:13:55 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_rrr(t_list **stack_a, t_list **stack_b, int fd)
{
	if (!*stack_a || !stack_a || !stack_b || !*stack_b)
		return (0);
	ft_rra(stack_a, 0);
	ft_rrb(stack_b, 0);
	if (fd)
		ft_putendl_fd("rrr", STDOUT);
	return (1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 17:34:28 by vmusunga          #+#    #+#             */
/*   Updated: 2021/10/30 17:43:53 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_rr(t_list **stack_a, t_list **stack_b, int fd)
{
	if (!*stack_a || !stack_a || !stack_b || !*stack_b)
		return (0);
	ft_ra(stack_a, 0);
	ft_rb(stack_b, 0);
	if (fd)
		ft_putendl_fd("rr", STDOUT);
	return (1);
}
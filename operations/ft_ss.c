/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ss.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 17:34:02 by vmusunga          #+#    #+#             */
/*   Updated: 2021/10/30 17:44:04 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_ss(t_list **stack_a, t_list **stack_b, int fd)
{
	if (!*stack_a || !stack_a || !stack_b || !*stack_b)
		return (0);
	ft_sa(stack_a, 0);
	ft_sb(stack_b, 0);
	if (fd)
		ft_putendl_fd("ss", STDOUT);
	return (1);
}
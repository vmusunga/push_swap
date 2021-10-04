/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 16:22:43 by vmusunga          #+#    #+#             */
/*   Updated: 2021/10/04 16:58:02 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdio.h>
# include <limits.h>
# include <stdlib.h>

typedef struct s_list
{
	int		content;
	t_list	*next;
	t_list	*previous;
}				t_list;

//LIBFT

void	ft_lstadd_back(t_list **lst, t_list *new);


#endif
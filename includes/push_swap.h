/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 16:22:43 by vmusunga          #+#    #+#             */
/*   Updated: 2021/10/06 16:28:39 by vmusunga         ###   ########.fr       */
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
	struct s_list	*next;
	struct s_list	*previous;
}				t_list;

void	test_list_filling(t_list *list);


//LIBFT
size_t		ft_strlen(const char *str);
int			ft_atoi(const char *str);

//LIST_OPS
t_list	*ft_lstnew(int tab);
void	ft_lstadd_back(t_list **lst, t_list *new);

#endif
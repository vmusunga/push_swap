/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 15:50:09 by vmusunga          #+#    #+#             */
/*   Updated: 2021/10/05 21:48:19 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

void	test_list_filling(t_list *list)
{
	while (list != 0)
	{
		write(1, list->content, 1);
		list = list->next;
	}
	return ;
}

t_list	*ft_char_2_list(char *str)
{
	int i;
	int len;
	t_list	*new;

	len = ft_strlen(str);
	if (!(new = malloc(sizeof(t_list * len))))
		return (NULL);
	i = 0;
	while (str[i])
	{
		new->content = str[i];
		new = new->next;
		i++;
	}
	new->next = 0;
	return (new);
}

int	main(int ac, char **argv)
{
	int error;
	int	i;
	int len;
	t_list *stack_a;

	error = 0;
	len = ft_strlen(argv[2]);
	//if (ac == 2)
	//	error = 1;
	i = 0;
	while (i < len)
	{
		ft_lstadd_back(&stack_a, ft_char_2_list(argv[2]));
		i++;
	}
	test_list_filling(stack_a);
	return (0);
}
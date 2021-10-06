/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 15:50:09 by vmusunga          #+#    #+#             */
/*   Updated: 2021/10/06 16:31:28 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

void	test_list_filling(t_list *list)
{
	while (list != 0)
	{
		printf("%d\n", list->content);
		list = list->next;
	}
	return ;
}

int	*single_argv(char **argv)			// ERROR CHECK NEEDED //
{
	int *tab;
	int i;
	
	i = 0;
	tab = malloc(sizeof(int) * ft_strlen(argv[1]));
	if (!tab)
		return (NULL);
	while (argv[1][i])
	{
		tab[i] = argv[1][i] - 48;							//ATOI!
		i++;
	}
	tab[i] = 0;
	return (tab);
}

int	main(int ac, char **argv)
{

	int	i;
	int len;
	int *tab;
	t_list *stack_a;
	if (ac == 2)
		tab = single_argv(argv);
	if (ac == 3)
		//tab = double_argv(argv);
	stack_a = 0;

	len = ft_strlen(argv[1]);
	
	//if (!(stack_a = malloc(sizeof(t_list) * len)))
	//	return(-1);
	i = 0;
	while (i < len)
	{
		ft_lstadd_back(&stack_a, ft_lstnew(tab[i]));
		//ft_lstadd_back(&stack_a, ft_char_2_list(argv[2]));
		i++;
	}
	test_list_filling(stack_a);
	return (0);
}

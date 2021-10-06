/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 15:50:09 by vmusunga          #+#    #+#             */
/*   Updated: 2021/10/06 18:05:52 by vmusunga         ###   ########.fr       */
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

int	*char_to_int_convert(char *input)
{
	char **tab_char;
	int *new;
	int len;
	int i;

	len = 0;
	tab_char = ft_split(input, ' ');
	while (tab_char[len])
		len++;

	new = malloc(sizeof(int) * len);
	i = 0;
	while (tab_char[i])
	{
		new[i] = ft_atoi(tab_char[i]);
		i++;
	}
	new[i] = 0;
	free(tab_char);
	return (new);
}

int	*single_argv(char **argv)			// ERROR CHECK NEEDED //
{
	int *tab;
	char *input;
	int i;
	
	i = 0;
	input = argv[1];
	tab = char_to_int_convert(input);
	if (!tab)
		return (NULL);
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
	while (i < 4)								// LEN!! int tab
	{
		ft_lstadd_back(&stack_a, ft_lstnew(tab[i]));
		i++;
	}
	test_list_filling(stack_a);
	return (0);
}

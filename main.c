/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 15:50:09 by vmusunga          #+#    #+#             */
/*   Updated: 2021/10/12 12:35:27 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

void	test_list_filling(t_list *list)
{
	while (list)
	{
		printf("%d\n", list->content);
		list = list->next;
	}
	return ;
}

// splits the input in char **tab
// atois it into int *tab
// frees char **tab

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
		if (ft_error(new, i, input) != 0)
			return (NULL);
		i++;
	}
	new[i] = 0;
	ft_free(tab_char, len);
	return (new);
}

int	*single_argv(char **argv)
{
	int *tab;
	char *input;
	int i;
	
	i = 0;
	input = argv[1];
	tab = char_to_int_convert(input);
	if (!tab)
		return (NULL);
	free(input);
	return (tab);
}

int	main(int ac, char **argv)
{
	int	i;
	int len;
	int *tab;
	t_list *stack_a;
	
	tab = 0;
	stack_a = 0;				//malloc?
	if (ac == 2)
		tab = single_argv(argv);
	//if (ac == 3)
		//tab = double_argv(argv);
	if (!tab)
	{
		printf("Error\n");
		return(0);
	}
	len = ft_intlen(tab);
	i = 0;
	while (i < len)
	{
		ft_lstadd_back(&stack_a, ft_lstnew(tab[i]));
		i++;
	}
	test_list_filling(stack_a);
	return (0);
}

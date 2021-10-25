/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 15:50:09 by vmusunga          #+#    #+#             */
/*   Updated: 2021/10/25 15:05:41 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

/*void	print_list(t_list *list)
{
	int n;
	
	n = 0;
	while (list)
	{
		n = list->content;
		printf("%d", list->content);
		while (n > 0)
		{
			printf("%c", '-');
			n--;
		}
		printf("\n");
		list = list->next;
	}
	return ;
}*/

void	print_list(t_list *stack_a, t_list *stack_b)
{
	int n;
	
	n = 0;
	printf("a b\n");
	while (stack_a || stack_b)
	{
		if (stack_a)
			printf("%d ", stack_a->content);
		if (stack_b)
			printf("%d", stack_b->content);
		printf("\n");
		if (stack_a)
			stack_a = stack_a->next;
		if (stack_b)
			stack_b = stack_b->next;
	}
	return ;
}

// splits the input in char **tab
// atois it into int *tab
// frees char **tab

int	*char_to_int(char *input)
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
	tab = char_to_int(input);
	if (!tab)
		return (NULL);
	return (tab);
}

int *multi_argv(char **argv)
{
	int *tab;
	char *input;
	
	input = ft_tabtab_to_tab(argv);
	tab = char_to_int(input);
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
	t_list *stack_b;

	tab = 0;
	stack_a = 0;				//malloc?
	stack_b = 0;				//malloc?
	if (ac == 2)
		tab = single_argv(argv);
	if (ac > 2)
		tab = multi_argv(argv);
	if (!tab)
	{
		printf("Error\n");
		exit(EXIT_FAILURE);
	}
	len = ft_intlen(tab);
	i = 0;
	while (i < len)
	{
		ft_lstadd_back(&stack_a, ft_lstnew(tab[i]));
		i++;
	}
	print_list(stack_a, stack_b);
	//ft_sa(&stack_a);
	//ft_ra(&stack_a);
	printf("\n");
	//ft_rra(&stack_a);
	ft_pb(&stack_a, &stack_b);
	ft_pb(&stack_a, &stack_b);


	print_list(stack_a, stack_b);
	free(tab);
	ft_lstclear(&stack_a);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vic <vic@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 15:50:09 by vmusunga          #+#    #+#             */
/*   Updated: 2022/04/07 17:02:33 by vic              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

int	*char_to_int(char *input, t_utils *utils)
{
	char	**tab_char;
	int		*new;
	int		len;
	int		i;

	len = 0;
	tab_char = ft_split(input, ' ', 0);
	while (tab_char[len])
		len++;
	new = malloc(sizeof(int) * len);
	i = 0;
	while (tab_char[i])
	{
		new[i] = ft_atoi(tab_char[i]);
		if (ft_error(new, i, input) != 0)
		{
			ft_free(tab_char, len);
			return (NULL);
		}
		i++;
	}
	new[i] = '\0';
	utils->input_len = i;
	ft_free(tab_char, len);
	return (new);
}

int	*single_argv(char **argv, t_utils *utils)
{
	int		*tab;
	char	*input;
	int		i;

	i = 0;
	input = argv[1];
	tab = char_to_int(input, utils);
	if (!tab)
		return (NULL);
	return (tab);
}

int	*multi_argv(char **argv, t_utils *utils)
{
	char	*input;
	int		*tab;

	input = ft_tabtab_to_tab(argv);
	tab = char_to_int(input, utils);
	if (!tab)
		return (NULL);
	free(input);
	return (tab);
}

int	main(int ac, char **argv)
{
	int		*tab;
	t_list	*stack_a;
	t_list	*stack_b;
	t_utils	utils;

	tab = 0;
	stack_a = 0;
	stack_b = 0;
	if (ac < 2)
		return (0);
	if (ac == 2)
		tab = single_argv(argv, &utils);
	if (ac > 2)
		tab = multi_argv(argv, &utils);
	if (!tab)
	{
		write(2, "Error\n", 6);
		exit(EXIT_FAILURE);
	}
	ft_tab_to_list(tab, &stack_a, &utils);
	ft_redirect(&stack_a, &stack_b, &utils);
	free(tab);
	ft_lstclear(&stack_a);
	ft_lstclear(&stack_b);
	return (0);
}

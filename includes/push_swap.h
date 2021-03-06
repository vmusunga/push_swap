/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 16:22:43 by vmusunga          #+#    #+#             */
/*   Updated: 2022/04/14 11:53:21 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdio.h>
# include <limits.h>
# include <stdlib.h>

# define STDOUT 1

typedef struct s_list
{
	int				content;
	struct s_list	*next;
	struct s_list	*previous;
}				t_list;

typedef struct s_utils
{
	int		input_len;
}				t_utils;

void	print_list(t_list *list1, t_list *list2);

//LIBFT
size_t	ft_strlen(const char *str);
int		ft_atoi(const char *str);
char	**ft_split(char const *s, char c, int i);
int		ft_isdigit_extended(int c);
int		ft_isdigit_check(char *s);
int		ft_isdigit(int c);
void	ft_putendl_fd(char *s, int fd);

//UTILITY
void	print_list(t_list *stack_a, t_list *stack_b);
int		ft_check_doubles(int *tab, int i);
int		ft_error(int *tab, int i, char *input);
char	**ft_free(char **tab, int x);
void	ft_exit(void);
char	*ft_tabtab_to_tab(char **tab);
int		ft_count_double_tab(char **tab);
int		ft_wich_half(t_list **stack, int min);
int		ft_n_ops(t_list **stack_a, int min);
void	ft_nb_to_top(t_list **stack, int min, int swich);
void	ft_nb_to_top_b(t_list **stack, int min, int swich);
void	ft_wich_min(t_list **stack_a, int swich);
int		ft_sec_min(t_list **stack_a, int min1);

//LIST_OPS
t_list	*ft_lstnew(int tab);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstadd_front(t_list **lst, t_list *new);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstclear(t_list **lst);
int		ft_lstsize(t_list *lst);
int		ft_lstmin(t_list **stack);
int		ft_lstmax(t_list **stack);
int		*ft_list_to_tab(t_list **stack);
t_list	**ft_tab_to_list(int *tab, t_list **stack, t_utils *utils);

//OPERATIONS
int		ft_sa(t_list **stack_a, int write_out);
int		ft_sb(t_list **stack_b, int write_out);
int		ft_ra(t_list **stack_a, int write_out);
int		ft_rb(t_list **stack_b, int write_out);
int		ft_rra(t_list **stack_a, int write_out);
int		ft_rrb(t_list **stack_b, int write_out);
int		ft_pb(t_list **stack_a, t_list **stack_b, int write_out);
int		ft_pa(t_list **stack_a, t_list **stack_b, int write_out);
int		ft_rr(t_list **stack_a, t_list **stack_b, int fd);
int		ft_rrr(t_list **stack_a, t_list **stack_b, int fd);
int		ft_ss(t_list **stack_a, t_list **stack_b, int fd);

//ALGO
void	ft_redirect(t_list **stack_a, t_list **stack_b, t_utils *utils);
void	ft_two_elem_sort(t_list **stack_a);
void	ft_three_elem_sort(t_list **lst);
void	ft_five_elem_sort(t_list **stack_a, t_list **stack_b, int len);
void	ft_hundred_elem_sort(t_list **stack_a, t_list **stack_b);
int		ft_output_check(t_list **stack_a, int i);
void	ft_five_hundred_elem_sort(t_list **stack_a, t_list **stack_b);
void	ft_index_list(int *tab, t_list **stack_a);
void	ft_index(t_utils *utils, int *tab0, int *tab1);
void	ft_sorting(t_list **stack_a, t_list **stack_b, t_utils *utils);

//DRAFT
int		ft_greater_than(t_list *stack, int top_nb);
int		ft_lesser_than(t_list *stack, int top_nb);
int		*ft_sort_tab(int *tab);
void	first_steps(t_list **stack_a, t_list **stack_b, t_utils *utils);
void	ft_index(t_utils *utils, int *tab0, int *tab1);
void	ft_index_list(int *tab, t_list **stack_a);
void	ft_sorting(t_list **stack_a, t_list **stack_b, t_utils *utils);

#endif
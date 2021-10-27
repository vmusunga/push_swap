/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusunga <vmusunga@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 16:22:43 by vmusunga          #+#    #+#             */
/*   Updated: 2021/10/27 16:40:51 by vmusunga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdio.h>
# include <limits.h>
# include <stdlib.h>

#define STDOUT 1

typedef struct s_list
{
	int		content;
	struct s_list	*next;
	struct s_list	*previous;
}				t_list;

void	print_list(t_list *list1, t_list *list2);


//LIBFT
size_t		ft_strlen(const char *str);
int			ft_atoi(const char *str);
char		**ft_split(char const *s, char c);
int	ft_isdigit_extended(int c);
int	ft_isdigit(int c);
void	ft_putendl_fd(char *s, int fd);

//UTILITY
int	ft_intlen(int *tab);
int	ft_check_doubles(int *tab, int i);
int	ft_error(int *tab, int i, char *input);
char	**ft_free(char **tab, int x);
char	*ft_tabtab_to_tab(char **tab);
int	ft_count_double_tab(char **tab);


//LIST_OPS
t_list	*ft_lstnew(int tab);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstadd_front(t_list **lst, t_list *new);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstclear(t_list **lst);

//OPERATIONS
int	ft_sa(t_list **stack_a, int write_out);
int	ft_sb(t_list **stack_b, int write_out);
int	ft_ra(t_list **stack_a, int write_out);
int	ft_rb(t_list **stack_b, int write_out);
int	ft_rra(t_list **stack_a, int write_out);
int	ft_rrb(t_list **stack_b, int write_out);
int	ft_pb(t_list **stack_a, t_list **stack_b, int write_out);
int	ft_pa(t_list **stack_a, t_list **stack_b, int write_out);

//ALGO
void	ft_redirect(t_list **stack_a, t_list **stack_b, int len);
void	ft_short_list(t_list **lst);

#endif
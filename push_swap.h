/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguzel <bguzel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 16:29:14 by bguzel            #+#    #+#             */
/*   Updated: 2023/03/16 16:35:10 by bguzel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_stack
{
	int	size;
	int	*cost;
	int	index_highest;
	int	*index;
	int	indexsize;
}t_stack;

void	reverse_rotate(t_stack *stack);
void	samearg(t_stack *stack);
void	ft_rra(t_stack *stack);
void	ft_rrb(t_stack *stack);
void	ft_rrr(t_stack *stack_a, t_stack *stack_b);
void	rotate(t_stack *stack);
void	ft_ra(t_stack *stack_a);
void	ft_rb(t_stack *stack_b);
void	ft_rr(t_stack *stack_a, t_stack *stack_b);
void	swap(t_stack *stack);
void	ft_sa(t_stack *stack_a);
void	ft_sb(t_stack *stack_b);
void	ft_ss(t_stack *stack_a, t_stack *stack_b);
void	ft_pa(t_stack *stack_a, t_stack *stack_b);
void	ft_pb(t_stack *stack_a, t_stack *stack_b);
void	symbolcheck(char **av, t_stack *stack);
void	is_it_int(char c);
void	be_formed(char **av, t_stack *stack);
void	two_arg(t_stack *stack);
void	three_arg(t_stack *stacka);
void	first_part(t_stack *stacka, t_stack *stackb);
void	four_arg(t_stack *stacka, t_stack *stackb);
void	five_and_small(t_stack *stacka, t_stack *stackb);
void	five_arg(t_stack *stacka, t_stack *stackb);
void	max_min_check(t_stack *stack);
void	next_index_check(char *s);
void	radix(t_stack *stacka, t_stack *stackb);
void	find_highest(t_stack *stack);
void	sort_index_zero(t_stack *stacka);
void	ft_sort_index(t_stack *stacka);
void	sort_control(t_stack *stacka, int i, int j, int size);
void	rotate_index(t_stack *stack);
void	swap_index(t_stack *stack);
void	reverse_rotate_index(t_stack *stack);
void	ft_pa_index(t_stack *stack_a, t_stack *stack_b);
void	ft_pb_index(t_stack *stack_a, t_stack *stack_b);
void	free_fonc(char **str);
void	malloc_struct(t_stack *stacka, t_stack *stackb, char **av);
void	reverse_free(t_stack *stack, char **str);
int		get_maxbit(t_stack *stacka);
void	atoi_max_min(long l);
int		*upper_cast(t_stack *stack_f, int size);
int		*lower_cast(t_stack *stack_f, int size);
int		*upper_cast_index(t_stack *stack, int size);
int		*lower_cast_index(t_stack *stack, int size);
int		ft_atoi(const char *str);
int		word_len(const char *src, char d);
int		counter(char **av);
int		word_counter(char const *s1, char a);
int		find_smallest(int *arr, int size);
int		is_sorted(t_stack *stacka);
char	**ft_split(char const *s, char c);
char	*stringer(char const *src, char b);
char	**split_and_add(char **av, t_stack *stack);

#endif
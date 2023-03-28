/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baran <baran@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 19:49:50 by bguzel            #+#    #+#             */
/*   Updated: 2023/03/08 01:27:18 by baran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate_index(t_stack *stack)
{
	int		tmp;
	int		i;
	int		k;
	int		m;

	k = 0;
	i = stack->size - 1;
	tmp = stack->index[0];
	stack->index[k++] = stack->index[i];
	while (k <= i)
	{
		m = stack->index[k];
		stack->index[k] = tmp;
		tmp = m;
		k++;
	}
}

void	reverse_rotate(t_stack *stack)
{
	int		tmp;
	int		i;
	int		k;
	int		m;

	k = 0;
	i = stack->size - 1;
	tmp = stack->cost[0];
	stack->cost[k++] = stack->cost[i];
	while (k <= i)
	{
		m = stack->cost[k];
		stack->cost[k] = tmp;
		tmp = m;
		k++;
	}
	find_highest(stack);
	reverse_rotate_index(stack);
}

void	ft_rra(t_stack *stack)
{
	reverse_rotate(stack);
	write(1, "rra\n", 4);
}

void	ft_rrb(t_stack *stack)
{
	reverse_rotate(stack);
	write(1, "rrb\n", 4);
}

void	ft_rrr(t_stack *stack_a, t_stack *stack_b)
{
	reverse_rotate(stack_a);
	reverse_rotate(stack_b);
	write(1, "rrr\n", 4);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguzel <bguzel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 16:51:31 by bguzel            #+#    #+#             */
/*   Updated: 2023/03/16 16:32:42 by bguzel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_index(t_stack *stack)
{
	int		tmp;
	int		i;
	int		k;

	i = stack->size - 1;
	tmp = stack->index[i];
	stack->index[i] = stack->index[0];
	while (i >= 0)
	{
		k = stack->index[i - 1];
		stack->index[i - 1] = tmp;
		tmp = k;
		i--;
	}
}

void	rotate(t_stack *stack)
{
	int		tmp;
	int		i;
	int		k;

	i = stack->size - 1;
	tmp = stack->cost[i];
	stack->cost[i] = stack->cost[0];
	while (i >= 0)
	{
		k = stack->cost[i - 1];
		stack->cost[i - 1] = tmp;
		tmp = k;
		i--;
	}
	find_highest(stack);
	rotate_index(stack);
}

void	ft_ra(t_stack *stack_a)
{
	rotate(stack_a);
	write(1, "ra\n", 3);
}

void	ft_rb(t_stack *stack_b)
{
	rotate(stack_b);
	write(1, "rb\n", 3);
}

void	ft_rr(t_stack *stack_a, t_stack *stack_b)
{
	rotate(stack_a);
	rotate(stack_b);
	write(1, "rr\n", 3);
}

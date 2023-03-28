/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baran <baran@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 13:31:05 by bguzel            #+#    #+#             */
/*   Updated: 2023/03/08 01:28:01 by baran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_index(t_stack *stack)
{
	int		tmp;

	if (stack->size > 1)
	{
		tmp = stack->index[0];
		stack->index[0] = stack->index[1];
		stack->index[1] = tmp;
	}
}

void	swap(t_stack *stack)
{
	int		tmp;

	if (stack->size > 1)
	{
		tmp = stack->cost[0];
		stack->cost[0] = stack->cost[1];
		stack->cost[1] = tmp;
	}
	find_highest(stack);
	swap_index(stack);
}

void	ft_sa(t_stack *stack_a)
{
	swap(stack_a);
	write(1, "sa\n", 3);
}

void	ft_sb(t_stack *stack_b)
{
	swap(stack_b);
	write(1, "sb\n", 3);
}

void	ft_ss(t_stack *stack_a, t_stack *stack_b)
{
	swap(stack_a);
	swap(stack_b);
	write(1, "ss\n", 3);
}

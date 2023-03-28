/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguzel <bguzel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 15:17:24 by bguzel            #+#    #+#             */
/*   Updated: 2023/03/16 16:31:46 by bguzel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pa_index(t_stack *stack_a, t_stack *stack_b)
{
	stack_a->indexsize++;
	stack_a->index = upper_cast_index(stack_a, stack_a->indexsize);
	stack_a->index[0] = stack_b->index[0];
	stack_b->indexsize--;
	stack_b->index = lower_cast_index(stack_b, stack_b->indexsize);
}

void	ft_pa(t_stack *stack_a, t_stack *stack_b)
{
	if (stack_b->cost == NULL)
		return ;
	stack_a->size++;
	stack_a->cost = upper_cast(stack_a, stack_a->size);
	stack_a->cost[0] = stack_b->cost[0];
	stack_b->size--;
	stack_b->cost = lower_cast(stack_b, stack_b->size);
	if (stack_a->indexsize + stack_b->indexsize > 5)
		ft_pa_index(stack_a, stack_b);
	write(1, "pa\n", 3);
}

void	ft_pb_index(t_stack *stack_a, t_stack *stack_b)
{
	stack_b->indexsize++;
	stack_b->index = upper_cast_index(stack_b, stack_b->indexsize);
	stack_b->index[0] = stack_a->index[0];
	stack_a->indexsize--;
	stack_a->index = lower_cast_index(stack_a, stack_a->indexsize);
}

void	ft_pb(t_stack *stack_a, t_stack *stack_b)
{
	if (stack_a->cost == NULL)
		return ;
	stack_b->size++;
	stack_b->cost = upper_cast(stack_b, stack_b->size);
	stack_b->cost[0] = stack_a->cost[0];
	stack_a->size--;
	stack_a->cost = lower_cast(stack_a, stack_a->size);
	if (stack_a->indexsize + stack_b->indexsize > 5)
		ft_pb_index(stack_a, stack_b);
	write(1, "pb\n", 3);
}

int	*upper_cast(t_stack *stack, int size)
{
	int		i;

	i = size - 2;
	while (i >= 0)
	{
		stack->cost[i + 1] = stack->cost[i];
		i--;
	}
	return (stack->cost);
}

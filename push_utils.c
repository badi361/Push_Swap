/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguzel <bguzel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 16:30:25 by bguzel            #+#    #+#             */
/*   Updated: 2023/03/16 16:34:49 by bguzel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*lower_cast(t_stack *stack, int size)
{
	int		k;

	k = 1;
	while (k <= size)
	{
		stack->cost[k - 1] = stack->cost[k];
		k++;
	}
	return (stack->cost);
}

int	*upper_cast_index(t_stack *stack, int size)
{
	int		i;

	i = size - 2;
	while (i >= 0)
	{
		stack->index[i + 1] = stack->index[i];
		i--;
	}
	return (stack->index);
}

int	*lower_cast_index(t_stack *stack, int size)
{
	int		k;

	k = 1;
	while (k <= size)
	{
		stack->index[k - 1] = stack->index[k];
		k++;
	}
	return (stack->index);
}

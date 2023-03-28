/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguzel <bguzel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 16:33:53 by bguzel            #+#    #+#             */
/*   Updated: 2023/03/16 16:36:36 by bguzel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_control(t_stack *stacka, int i, int j, int size)
{
	while (j < size)
	{
		if (stacka->index[i] == stacka->index[j])
		{
			if (stacka->cost[i] > stacka->cost[j])
			{
				stacka->index[i] += 1;
				break ;
			}
			else if (stacka->cost[i] < stacka->cost[j])
			{
				stacka->index[j] += 1;
				break ;
			}
		}
		j++;
	}
}

void	ft_sort_index(t_stack *stacka)
{
	int	i;
	int	j;
	int	size;

	size = stacka->size;
	i = 0;
	while (stacka->index[i] != size - 1)
	{
		j = i + 1;
		sort_control(stacka, i, j, size);
		i++;
		if (i >= size)
			i = 0;
	}
}

void	sort_index_zero(t_stack *stacka)
{
	int	i;

	i = -1;
	while (++i < stacka->size)
	{
		stacka->index[i] = 0;
	}
	ft_sort_index(stacka);
}

void	find_highest(t_stack *stack)
{
	int	i;
	int	highest;

	i = 0;
	highest = stack->cost[0];
	stack->index_highest = 0;
	while (++i < stack->size)
	{
		if (highest < stack->cost[i])
		{
			highest = stack->cost[i];
			stack->index_highest = i;
		}
	}
}

int	is_sorted(t_stack *stacka)
{
	int		i;
	int		j;

	i = 0;
	while (i < stacka->size)
	{
		j = i + 1;
		while (j < stacka->size)
		{	
			if (stacka->cost[j] < stacka->cost[i])
			{
				find_highest(stacka);
				return (0);
			}
			j++;
		}
		i++;
	}
	exit(0);
}

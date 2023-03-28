/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   five_arg.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguzel <bguzel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 19:26:01 by bguzel            #+#    #+#             */
/*   Updated: 2023/03/16 16:24:12 by bguzel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	five_and_small(t_stack *stacka, t_stack *stackb)
{
	int	small;

	small = find_smallest(stacka->cost, stacka->size);
	if (small > 1)
	{
		while (small < stacka->size)
		{
			ft_rra(stacka);
			small++;
		}
	}
	if (small < 2)
	{
		while (small > 0)
		{
			ft_ra(stacka);
			small--;
		}
	}
	five_arg(stacka, stackb);
}

void	five_arg(t_stack *stacka, t_stack *stackb)
{
	if (!((stacka->cost[0] < stacka->cost[1])
			&& (stacka->cost[1] < stacka->cost[2])
			&& (stacka->cost[2] < stacka->cost[3])
			&& (stacka->cost[3] < stacka->cost[4])))
	{
		ft_pb(stacka, stackb);
		first_part(stacka, stackb);
		ft_pa(stacka, stackb);
	}
}

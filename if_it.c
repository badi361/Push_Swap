/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   if_it.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguzel <bguzel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 19:25:05 by bguzel            #+#    #+#             */
/*   Updated: 2023/03/16 16:28:00 by bguzel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	two_arg(t_stack *stack)
{
	if (stack->cost[0] > stack->cost[1])
		ft_sa(stack);
}

void	three_arg(t_stack *stacka)
{
	if (stacka->cost[0] < stacka->cost[1] && stacka->cost[0] < stacka->cost[2])
	{
		if (stacka->cost[1] > stacka->cost[2])
		{
			ft_rra(stacka);
			ft_sa(stacka);
		}
	}
	if (stacka->cost[1] < stacka->cost[0] && stacka->cost[1] < stacka->cost[2])
	{
		if (stacka->cost[0] > stacka->cost[2])
			ft_ra(stacka);
		else
			ft_sa(stacka);
	}	
	if (stacka->cost[2] < stacka->cost[0] && stacka->cost[2] < stacka->cost[1])
	{
		if (stacka->cost[1] > stacka->cost[0])
			ft_rra(stacka);
		else
		{
			ft_sa(stacka);
			ft_rra(stacka);
		}
	}
}

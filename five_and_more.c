/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   five_and_more.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguzel <bguzel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 16:34:27 by bguzel            #+#    #+#             */
/*   Updated: 2023/03/16 16:34:28 by bguzel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_maxbit(t_stack *stacka)
{
	int	maxbit;

	maxbit = 0;
	while (stacka->index[stacka->index_highest] >> maxbit != 0)
		maxbit++;
	return (maxbit);
}

void	radix(t_stack *stacka, t_stack *stackb)
{
	int	maxbit;
	int	i;
	int	j;
	int	size;

	i = 0;
	size = stacka->size;
	maxbit = get_maxbit(stacka);
	while (i < maxbit)
	{
		j = 0;
		while (j < size)
		{
			if (((stacka->index[0] >> i) & 1) == 1)
				ft_ra(stacka);
			else
				ft_pb(stacka, stackb);
			j++;
		}
		while (stackb->size != 0)
			ft_pa(stacka, stackb);
		i++;
	}
}

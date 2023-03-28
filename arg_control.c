/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_control.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguzel <bguzel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 15:56:53 by bguzel            #+#    #+#             */
/*   Updated: 2023/03/16 15:57:02 by bguzel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	samearg(t_stack *stack)
{
	int	i;
	int	j;

	i = 0;
	max_min_check(stack);
	while (i < stack->size)
	{
		j = i + 1;
		while ((stack->cost[i] != stack->cost[j]) && j < stack->size)
			j++;
		if ((stack->cost[i] == stack->cost[j]) && j < stack->size)
		{
			write(2, "Error\n", 6);
			exit(0);
		}
		i++;
	}
}

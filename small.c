/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguzel <bguzel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 19:23:23 by bguzel            #+#    #+#             */
/*   Updated: 2023/03/16 16:33:10 by bguzel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_smallest(int *arr, int size)
{
	int		i;
	int		smallest;

	i = 0;
	smallest = arr[0];
	while (i < size)
	{
		if (arr[i] < smallest)
		{
			smallest = arr[i];
		}
		i++;
	}
	i = 0;
	while (arr[i] != smallest)
		i++;
	return (i);
}

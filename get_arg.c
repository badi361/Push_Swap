/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_arg.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguzel <bguzel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 19:25:18 by bguzel            #+#    #+#             */
/*   Updated: 2023/03/16 16:26:53 by bguzel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	be_formed(char **av, t_stack *stack)
{
	char	**str;
	int		k;
	int		j;
	int		i;

	k = 1;
	j = 0;
	i = 0;
	while (av[k])
	{
		str = ft_split(av[k], ' ');
		while (str[j])
		{
			stack->cost[i] = ft_atoi(str[j]);
			j++;
			i++;
		}
		j = 0;
		k++;
		free_fonc(str);
	}
}

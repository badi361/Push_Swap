/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_checker.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguzel <bguzel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 19:26:07 by bguzel            #+#    #+#             */
/*   Updated: 2023/03/16 16:19:09 by bguzel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	is_it_int(char c)
{
	if (!(c >= '0' && c <= '9') && c != '-' && c != '+')
	{
		write(2, "Error\n", 6);
		exit(0);
	}
}

void	symbolcheck(char **av, t_stack *stack)
{
	int		i;
	int		k;
	char	**str;

	i = 0;
	k = 0;
	str = split_and_add(av, stack);
	while (k < stack->size)
	{
		while (str[k][i])
		{
			if ((str[k][0] == '-' || str[k][0] == '+') && str[k][1] == 0)
			{
				write(2, "Error\n", 6);
				exit(0);
			}
			is_it_int(str[k][i]);
			next_index_check(str[k]);
			i++;
		}
		i = 0;
		k++;
	}
	reverse_free(stack, str);
}

char	**split_and_add(char **av, t_stack *stack)
{
	char	**str;
	char	**s;
	int		k;
	int		j;
	int		i;

	k = 1;
	j = 0;
	i = 0;
	s = malloc(sizeof(char *) * stack->size);
	while (av[k])
	{
		str = ft_split(av[k], ' ');
		while (str[j])
		{
			s[i] = str[j];
			j++;
			i++;
		}
		j = 0;
		k++;
		free(str);
	}
	return (s);
}

void	max_min_check(t_stack *stack)
{
	int	i;

	i = 0;
	while (i < stack->size)
	{
		if (stack->cost[i] > 2147483647 || stack->cost[i] < -2147483648)
		{
			write(2, "Error\n", 6);
			exit(0);
		}
		i++;
	}
}

void	next_index_check(char *s)
{
	int	i;

	i = 1;
	while (s[i])
	{
		if (!(s[i] >= '0' || s[i] == '9'))
		{
			write(2, "Error\n", 6);
			exit(0);
		}
		i++;
	}
}

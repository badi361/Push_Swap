/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguzel <bguzel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 19:24:58 by bguzel            #+#    #+#             */
/*   Updated: 2023/03/16 16:47:28 by bguzel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	counter(char **av)
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
			j++;
			i++;
		}
		j = 0;
		k++;
		free_fonc(str);
	}
	return (i);
}

void	free_fonc(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}

void	malloc_struct(t_stack *stacka, t_stack *stackb, char **av)
{
	stacka->size = counter(av);
	stacka->cost = malloc(sizeof(int) * stacka->size);
	stackb->size = 0;
	stackb->cost = malloc(sizeof(int) * stacka->size);
	stacka->index = malloc(sizeof(int) * stacka->size);
	stackb->index = malloc(sizeof(int) * stacka->size);
	stacka->indexsize = counter(av);
	stackb->indexsize = 0;
}

void	reverse_free(t_stack *stack, char **str)
{
	int		c;

	c = stack->size - 1;
	while (c != -1)
	{
		free(str[c]);
		c--;
	}
	free(str);
}

int	main(int ac, char **av)
{
	t_stack	*stacka;
	t_stack	*stackb;

	stacka = malloc(sizeof(t_stack));
	stackb = malloc(sizeof(t_stack));
	malloc_struct(stacka, stackb, av);
	be_formed(av, stacka);
	symbolcheck(av, stacka);
	samearg(stacka);
	if (ac == 1 || stacka->size == 1)
		exit(0);
	else if (stacka->size == 2)
		two_arg(stacka);
	else if (stacka->size == 3)
		three_arg(stacka);
	else if (stacka->size == 4)
		first_part(stacka, stackb);
	else if (stacka->size == 5)
		five_and_small(stacka, stackb);
	else if (stacka->size > 5)
	{
		is_sorted(stacka);
		sort_index_zero(stacka);
		radix(stacka, stackb);
	}
}

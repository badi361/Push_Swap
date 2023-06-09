/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguzel <bguzel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 15:07:52 by bguzel            #+#    #+#             */
/*   Updated: 2023/03/16 16:26:29 by bguzel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_atoi(const char *str)
{
	unsigned int	i;
	long			l;
	int				k;

	i = 0;
	k = 1;
	l = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i++] == '-')
			k = -1;
	}
	if (str[i] == '-' || str[i] == '+')
	{
		write (2, "Error\n", 6);
		exit(0);
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		l = (l * 10) + (str[i++] - 48) * k;
		atoi_max_min(l);
	}
	return (l);
}

void	atoi_max_min(long l)
{
	if (l > 2147483647 || l < -2147483648)
	{	
		write (2, "Error\n", 6);
		exit(0);
	}
}

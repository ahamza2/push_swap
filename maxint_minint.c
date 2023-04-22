/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maxint_minint.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haarab <haarab@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 20:34:14 by haarab            #+#    #+#             */
/*   Updated: 2023/04/15 15:53:03 by haarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_error(int *ret)
{
	write (2, "Error\n", 6);
	free (ret);
	exit (1);
}

int	lenthint(char *str)
{
	int	j;
	int	b;

	j = 0;
	if (str[0] == '-' || str[0] == '+')
		j++;
	while (str[j] == '0')
		j++;
	b = 0;
	while (str[j] >= '0' && str[j] <= '9')
	{
		b++;
		j++;
	}
	return (b);
}

void	max_min(char **str, int *ret)
{
	int	i;
	int	b;

	i = 0;
	if ((ft_atoi(str[i]) > 2147483647
			|| ft_atoi(str[i]) < -2147483648))
	{
		free_error(ret);
	}
	b = 0;
	b = lenthint(str[i]);
	if (b > 10)
	{
		free_error(ret);
	}
}

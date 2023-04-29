/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_code.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haarab <haarab@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 21:32:55 by haarab            #+#    #+#             */
/*   Updated: 2023/04/15 00:54:01 by haarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_number(char *str, int *ret)
{
	int	i;
	int	b;

	b = 0;
	i = 1;
	if ((str[0] < '0' || str[0] > '9') && str[0] != '-' && str[0] != '+')
		b++;
	if ((str[0] == '-' || str[0] == '+') && str[1] == 0)
		b++;
	while (str[i])
	{
		if ((str[i] < '0' || str[i] > '9'))
			b++;
		i++;
	}
	if (b != 0)
	{
		free (ret);
		free (str);
		write (2, "Error\n", 6);
		exit (1);
	}
	else
		return (1);
}

int	code_iscorrect(int *str)
{
	int	i;
	int	j;
	int	b;

	i = 0;
	j = 1;
	b = 1;
	while (i < t_vars.y - 1)
	{
		if (str[i] < str[j])
		{
			b++;
		}
		j++;
		i++;
	}
	return (b);
}

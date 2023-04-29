/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortelement_smalltolarg.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haarab <haarab@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 22:53:19 by haarab            #+#    #+#             */
/*   Updated: 2023/04/14 23:05:03 by haarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_elem(int *res, int i, int j, int k)
{
	if (res[i] > res[j])
	{
		k = res[j];
		res[j] = res[i];
		res[i] = k;
	}
}

int	*sortelement_fromsmalltolargnumber(int *str, int *res)
{
	int	i;
	int	j;
	int	k;

	k = 0;
	while (k < t_vars.y)
	{
		res[k] = str[k];
		k++;
	}
	i = 0;
	while (i < t_vars.y)
	{
		k = 0;
		j = i + 1;
		while (j < t_vars.y)
		{
			sort_elem(res, i, j, k);
			j++;
		}
		i++;
		j = 0;
	}
	return (res);
}

int	small_number(int *str)
{
	int	i;
	int	j;
	int	d;

	i = 0;
	j = 0;
	d = str[i];
	while (j < t_vars.n)
	{
		if (d > str[j])
		{
			d = str[j];
		}
		j++;
	}
	return (d);
}

int	bigg_number(int *ptr)
{
	int	i;
	int	j;
	int	d;
	int	pos;

	i = 0;
	d = ptr[0];
	j = 0;
	while (j < t_vars.k)
	{
		if (d <= ptr[j])
		{
			d = ptr[j];
			pos = j;
		}
		j++;
	}
	return (pos);
}

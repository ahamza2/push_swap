/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_element.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haarab <haarab@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 22:32:42 by haarab            #+#    #+#             */
/*   Updated: 2023/04/15 17:25:17 by haarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	tree_element(int *str)
{
	int	k;

	k = 0;
	while (k < t_vars.y)
	{
		if (t_vars.n == 2 && str[0] > str[1])
			swap_sa(str);
		if (t_vars.n == 3 && str[0] > str[1] && str[0] > str[2])
			rotate_ra(str);
		if (t_vars.n == 3 && str[0] < str[1] && str[0] > str[2])
			rotate_rra(str);
		if (t_vars.n == 3 && str[0] < str[1] && str[1] > str[2])
			rotate_rra(str);
		if (t_vars.n == 3 && str[0] > str[1])
			swap_sa(str);
		k++;
	}
}

void	five_element(int *str, int *ptr)
{
	int	i;
	int	j;
	int	k;
	int	y;
	int	d;

	j = 0;
	k = 0;
	y = 0;
	while (k < t_vars.n)
	{
		d = small_number(str);
		if (t_vars.n > 3 && (str[1] == d || str[2] == d))
			rotate_ra(str);
		if (t_vars.n > 3 && (str[3] == d || str[t_vars.n - 1] == d))
			rotate_rra(str);
		if (t_vars.n > 3 && str[0] == d)
			ptr = swap_pb(str, ptr, y);
		k++;
	}
	if (t_vars.n == 3)
		tree_element(str);
	i = 3;
	while (i++ < t_vars.y)
		str = swap_pa(str, ptr, y);
}

void	hundred(int *res, int *str, int *ptr)
{
	int	y;

	y = 0;
	if (str[0] < res[t_sort.i])
	{
		ptr = swap_pb(str, ptr, y);
		rotate_rb(ptr);
		if (t_sort.j < t_vars.y - 1)
		{
			t_sort.j++;
			t_sort.i++;
		}
	}
	if (str[0] > res[t_sort.j])
		rotate_ra(str);
	if (str[0] >= res[t_sort.i] && str[0] <= res[t_sort.j])
	{
		ptr = swap_pb(str, ptr, y);
		if (t_sort.j < t_vars.y - 1)
		{
			t_sort.j++;
			t_sort.i++;
		}
	}
}

void	check_onehundred(int *str, int *ptr)
{
	int	*res;

	res = malloc(sizeof(int) * t_vars.y);
	res = sortelement_fromsmalltolargnumber(str, res);
	t_sort.i = 0;
	t_sort.j = 15;
	if (t_sort.j > t_vars.y - 1)
		t_sort.j = t_vars.y - 1;
	while (t_vars.k < t_vars.y)
		hundred(res, str, ptr);
	returnstr (str, ptr);
	free (res);
}

void	check_fivehundred(int *str, int *ptr)
{
	int	*res;

	res = malloc(sizeof(int) * t_vars.y);
	res = sortelement_fromsmalltolargnumber(str, res);
	t_sort.i = 0;
	t_sort.j = 35;
	if (t_sort.j > t_vars.y - 1)
		t_sort.j = t_vars.y - 1;
	while (t_vars.k < t_vars.y)
		hundred(res, str, ptr);
	returnstr(str, ptr);
	free(res);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_element.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haarab <haarab@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 22:32:42 by haarab            #+#    #+#             */
/*   Updated: 2023/04/15 00:58:22 by haarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	tree_element(int *str)
{
	t_vars vars;
	int	k;

	k = 0;
	while (k < vars.y)
	{
		if (vars.n == 2 && str[0] > str[1])
			swap_sa(str);
		if (vars.n == 3 && str[0] > str[1] && str[0] > str[2])
			rotate_ra(str);
		if (vars.n == 3 && str[0] < str[1] && str[0] > str[2])
			rotate_rra(str);
		if (vars.n == 3 && str[0] < str[1] && str[1] > str[2])
			rotate_rra(str);
		if (vars.n == 3 && str[0] > str[1])
			swap_sa(str);
		k++;
	}
}

void	five_element(int *str, int *ptr)
{
	t_vars vars;
	int	i;
	int	k;
	int	y;
	int	d;

	k = 0;
	y = 0;
	while (k < vars.n)
	{
		d = small_number(str);
		if (vars.n > 3 && (str[1] == d || str[2] == d))
			rotate_ra(str);
		if (vars.n > 3 && (str[3] == d || str[vars.n - 1] == d))
			rotate_rra(str);
		if (vars.n > 3 && str[0] == d)
			ptr = swap_pb(str, ptr, y);
		k++;
	}
	if (vars.n == 3)
		tree_element(str);
	i = 3;
	while (i++ < vars.y)
		str = swap_pa(str, ptr, y);
}

void	hundred(int *res, int *str, int *ptr)
{
	t_vars	vars;
	t_sort sort;
	int	y;

	y = 0;
	if (str[0] < res[sort.i])
	{
		ptr = swap_pb(str, ptr, y);
		rotate_rb(ptr);
		if (sort.j < vars.y - 1)
		{
			sort.j++;
			sort.i++;
		}
	}
	if (str[0] > res[sort.j])
		rotate_ra(str);
	if (str[0] >= res[sort.i] && str[0] <= res[sort.j])
	{
		ptr = swap_pb(str, ptr, y);
		if (sort.j < vars.y - 1)
		{
			sort.j++;
			sort.i++;
		}
	}
}

void	check_onehundred(int *str, int *ptr)
{
	t_vars vars;
	t_sort sort;
	int	*res;

	res = malloc(sizeof(int) * vars.y);
	res = sortelement_fromsmalltolargnumber(str, res);
	sort.i = 0;
	sort.j = 15;
	if (sort.j > vars.y - 1)
		sort.j = vars.y - 1;
	while (vars.k < vars.y)
		hundred(res, str, ptr);
	returnstr (str, ptr);
	free (res);
}

void	check_fivehundred(int *str, int *ptr)
{
	t_vars vars;
	t_sort sort;
	int	*res;

	res = malloc(sizeof(int) * vars.y);
	res = sortelement_fromsmalltolargnumber(str, res);
	sort.i = 0;
	sort.j = 35;
	if (sort.j > vars.y - 1)
		sort.j = vars.y - 1;
	while (vars.k < vars.y)
		hundred(res, str, ptr);
	returnstr(str, ptr);
	free(res);
}

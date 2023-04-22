/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haarab <haarab@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 13:30:40 by haarab            #+#    #+#             */
/*   Updated: 2023/04/15 15:46:27 by haarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	returnstr(int *str, int *ptr)
{
	t_vars vars;
	int	k;
	int	y;

	y = 0;
	k = 0;
	while (vars.n < vars.y)
	{
		k = bigg_number(ptr);
		if (k >= vars.k / 2 && k != 0)
			rotate_rrb(ptr);
		if (k < vars.k / 2 && k != 0)
			rotate_rb(ptr);
		if (k == 0)
			str = swap_pa(str, ptr, y);
	}
}

void	checkint(int *str)
{
	t_vars vars;
	int	*ptr;

	ptr = malloc(sizeof(int) * vars.y);
	if (vars.y >= 1 && vars.y <= 3)
		tree_element(str);
	if (vars.y >= 4 && vars.y <= 5)
		five_element(str, ptr);
	if (vars.y >= 6 && vars.y <= 100)
		check_onehundred(str, ptr);
	if (vars.y >= 101 && vars.y <= 500)
		check_fivehundred(str, ptr);
	if (vars.y >= 501)
		check_fivehundred(str, ptr);
	free(ptr);
}

int	main(int ac, char **av)
{
	t_vars vars;
	int		*str;

	if (ac >= 0)
	{
		vars.w = count_arg(av);
		vars.n = count_element(av);
		vars.y = vars.n;
		checkelementisfree(av);
		str = returninteger(av);
		if (code_iscorrect(str) != vars.y)
		{
			check_doubleelement(str);
			checkint(str);
		}
		free (str);
	}
	return (0);
}

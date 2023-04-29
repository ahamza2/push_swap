/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haarab <haarab@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 13:30:40 by haarab            #+#    #+#             */
/*   Updated: 2023/04/15 16:35:44 by haarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	checkint(int *str)
{
	int	*ptr;

	ptr = malloc(sizeof(int) * t_vars.y);
	if (t_vars.y >= 1 && t_vars.y <= 3)
		tree_element(str);
	if (t_vars.y >= 4 && t_vars.y <= 5)
		five_element(str, ptr);
	if (t_vars.y >= 6 && t_vars.y <= 100)
		check_onehundred(str, ptr);
	if (t_vars.y >= 101 && t_vars.y <= 500)
		check_fivehundred(str, ptr);
	if (t_vars.y >= 501)
		check_fivehundred(str, ptr);
	free(ptr);
}

int	main(int ac, char **av)
{
	int		*str;

	if (ac >= 0)
	{
		t_vars.w = count_arg(av);
		t_vars.n = count_element(av);
		t_vars.y = t_vars.n;
		checkelementisfree(av);
		str = returninteger(av);
		if (code_iscorrect(str) != t_vars.y)
		{
			check_doubleelement(str);
			checkint(str);
		}
		free (str);
	}
	return (0);
}

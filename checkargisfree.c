/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkargisfree.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haarab <haarab@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 20:38:47 by haarab            #+#    #+#             */
/*   Updated: 2023/04/15 00:26:36 by haarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_errror(void)
{
	write (2, "Error\n", 6);
	exit (1);
}

void	checkelementisfree(char **str)
{
	t_vars	vars;
	int	i;
	int	j;
	int	b;

	if (str[0][0] == '\0')
		print_errror();
	i = 1;
	while (i <= vars.w)
	{
		j = 0;
		b = 0;
		while (str[i][j])
		{
			if ((str[i][j] >= '0' && str[i][j] <= '9')
				|| (str[i][j] == '+' || str[i][j] == '-'))
				b++;
			j++;
		}
		if (b == 0)
			print_errror();
		i++;
	}
}

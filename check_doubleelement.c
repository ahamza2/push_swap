/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_doubleelement.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haarab <haarab@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 20:40:49 by haarab            #+#    #+#             */
/*   Updated: 2023/04/15 00:28:52 by haarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_doubleelement(int	*str)
{
	t_vars vars;
	int	i;
	int	j;

	i = 0;
	while (i < vars.y)
	{
		j = i + 1;
		while (j < vars.y)
		{
			if (str[i] == str[j])
			{
				free (str);
				write (2, "Error\n", 6);
				exit (1);
			}
			j++;
		}
		i++;
	}
}

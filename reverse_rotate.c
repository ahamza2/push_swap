/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haarab <haarab@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 20:04:31 by haarab            #+#    #+#             */
/*   Updated: 2023/03/10 17:18:42 by haarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_rra(int *str)
{
	int	i;
	int	j;
	int	k;
	int	n;

	n = 0;
	while (n <= 1)
	{
		i = 0;
		j = 1;
		if (str[i])
			k = str[i];
		while (str[i])
			str[i++] = str[j++];
		i--;
		str[i] = k;
		n++;
	}
}

void	rotate_rrb(int *ptr)
{
	int	i;
	int	j;
	int	k;
	int	n;

	n = 0;
	while (n <= 1)
	{
		i = 0;
		j = 1;
		if (ptr[i])
			k = ptr[i];
		while (ptr[i])
			ptr[i++] = ptr[j++];
		i--;
		ptr[i] = k;
		n++;
	}
}

void	rotate_rrr(int *str, int *ptr)
{
	int	i;
	int	j;
	int	k;
	int	n;

	n = 0;
	while (n <= 1)
	{
		i = 0;
		j = 1;
		k = str[i];
		while (str[i])
			str[i++] = str[j++];
		i--;
		str[i] = k;
		i = 0;
		j = 1;
		k = ptr[i];
		while (ptr[i])
			ptr[i++] = ptr[j++];
		i--;
		ptr[i] = k;
		n++;
	}
}

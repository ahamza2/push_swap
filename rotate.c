/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haarab <haarab@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 19:45:56 by haarab            #+#    #+#             */
/*   Updated: 2023/04/12 17:49:19 by haarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_ra(int *str)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 1;
	k = str[i];
	while (i < t_vars.n)
		str[i++] = str[j++];
	i--;
	str[i] = k;
	write(1, "ra\n", 3);
}

void	rotate_rb(int *ptr)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 1;
	k = ptr[i];
	while (i < t_vars.k)
		ptr[i++] = ptr[j++];
	i--;
	ptr[i] = k;
	write(1, "rb\n", 3);
}

void	rotate_rr(int *str, int *ptr)
{
	rotate_ra(str);
	rotate_rb(ptr);
}
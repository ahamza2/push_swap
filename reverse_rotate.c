/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haarab <haarab@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 20:04:31 by haarab            #+#    #+#             */
/*   Updated: 2023/04/05 15:56:04 by haarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_rra(int *str)
{
	int d;
	int	i;
	int k;
	
	i = 0;
	k = 0;
	while (i < t_vars.n)
	{
		d = str[k];
		str[k] = str[i];
		str[i] = d;
		i++;
	}
	write(1, "rra\n", 4);
}

void	rotate_rrb(int *ptr)
{
	int d;
	int	i;
	int k;
	
	i = 0;
	k = 0;
	while (i < t_vars.k)
	{
		d = ptr[k];
		ptr[k] = ptr[i];
		ptr[i] = d;
		i++;
	}
	write(1, "rrb\n", 4);
}

void	rotate_rrr(int *str, int *ptr)
{
	rotate_rra(str);
	rotate_rrb(ptr);
}

// void	rotate_rrr(int *str, int *ptr)
// {
// 	int d;
// 	int	i;
// 	int k;
	
// 	i = 0;
// 	k = 0;
// 	while (str[k])
// 		k++;
// 	k--;
// 	while (str[i])
// 	{
// 		d = str[k];
// 		str[k] = str[i];
// 		str[i] = d;
// 		i++;
// 	}
// 	i = 0;
// 	k = 0;
// 	while (ptr[k])
// 		k++;
// 	k--;
// 	while (ptr[i])
// 	{
// 		d = ptr[k];
// 		ptr[k] = ptr[i];
// 		ptr[i] = d;
// 		i++;
// 	}
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haarab <haarab@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 18:01:01 by haarab            #+#    #+#             */
/*   Updated: 2023/03/10 17:19:11 by haarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_sa(int *str)
{
	int	i;
	int	k;

	i = 0;
	if (str[i])
	{
		k = str[i];
		str[i] = str[i + 1];
		str[i + 1] = k;
	}
}

void	swap_sb(int *ptr)
{
	int	i;
	int	k;

	i = 0;
	if (ptr[i])
	{
		k = ptr[i];
		ptr[i] = ptr[i + 1];
		ptr[i + 1] = k;
	}
}

void	swap_ss(int *str, int *ptr)
{
	int	i;
	int	k;

	i = 0;
	if (str[i])
	{
		k = str[i];
		str[i] = str[i + 1];
		str[i + 1] = k;
	}
	i = 0;
	if (ptr[i])
	{
		k = ptr[i];
		ptr[i] = ptr[i + 1];
		ptr[i + 1] = k;
	}
	// printf ("%s", str);
}


int *swap_pa(int *str, int *ptr, int i, int j)
{
	if (ptr[i])
	{
		str[j] = ptr[i];
		ptr[i] = 0;
	} 
	return(str);
}

int	*swap_pb(int *str, int *ptr, int k, int j)
{
	// printf("k = %d\n", str[k]);
	if (str[k])
	{
		ptr[j] = str[k];
		str[k] = 0;
	}
	return(ptr);
}
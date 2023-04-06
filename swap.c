/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haarab <haarab@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 18:01:01 by haarab            #+#    #+#             */
/*   Updated: 2023/04/05 16:18:03 by haarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_sa(int *str)
{
	int	k;

	if (str[0] > str[1])
	{
		k = str[0];
		str[0] = str[1];
		str[1] = k;
	}
	write(1, "sa\n", 3);
}

void	swap_sb(int *ptr)
{
	int	k;

	if (ptr[0] > ptr[1])
	{
		k = ptr[0];
		ptr[0] = ptr[1];
		ptr[1] = k;
	}
	write(1, "sb\n", 3);
}

void	swap_ss(int *str, int *ptr)
{
	swap_sa(str);
	swap_sb(ptr);
	// int	i;
	// int	k;

	// i = 0;
	// if (str[i])
	// {
	// 	k = str[i];
	// 	str[i] = str[i + 1];
	// 	str[i + 1] = k;
	// }
	// i = 0;
	// if (ptr[i])
	// {
	// 	k = ptr[i];
	// 	ptr[i] = ptr[i + 1];
	// 	ptr[i + 1] = k;
	// }
	// printf ("%s", str);
}

int *swap_pa(int *str, int *ptr, int j)
{
	int i;
	int	k;
	int n;
	int s;
	
	n = 0;
	while (n <= t_vars.n)
	{
		s = str[0];
		str[0] = str[n];
		str[n] = s;
		n++;
	}
	i = 0;
	str[i] = ptr[j];
	n = 0;
	while (n < t_vars.k)
	{
		ptr[j] = ptr[j + 1];
		j++;
		n++;
	}
	t_vars.n++;
	t_vars.k--;
	write(1, "pa\n", 3);
	return(str);
}

int	*swap_pb(int *str, int *ptr, int j)
{
	int i;
	int	k;
	int n;
	int s;
	
	n = 0;
	s = 0;
	while (n <= t_vars.k)
	{
		s = ptr[0];
		ptr[0] = ptr[n];
		ptr[n] = s;
		n++;
	}
	i = 0;
	ptr[i] = str[j];
	n = 0;
	while (n < t_vars.n)
	{
		str[j] = str[j + 1];
		j++;
		n++;
	}
	t_vars.n--;
	t_vars.k++;
	write(1, "pb\n", 3);
	return(ptr);
}
	
	// if (str[j]) -1 0 120
	// {
	// 	ptr[i] = str[j];
	// }
	// while (ptr[i])
	// {
	// 	ptr[i + 1] = ptr[i];
	// 	i++;
	// }
	// printf ("s = %d\n", i);
	// i = 0;
	// i++;
	// while (str[j])
	// {
	// 	str[j] = str[j + 1];
	// 	j++;
	// }
	// j--;
	// str[j] = 0;

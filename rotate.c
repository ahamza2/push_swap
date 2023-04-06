/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haarab <haarab@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 19:45:56 by haarab            #+#    #+#             */
/*   Updated: 2023/04/05 16:18:51 by haarab           ###   ########.fr       */
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

// void	rotate_rr(int *str, int *ptr)
// {
// 	int	i;
// 	int	j;
// 	int	k;

// 	i = 0;
// 	j = 1;
// 	if (str[i])
// 		k = str[i];
// 	while (str[i])
// 		str[i++] = str[j++];
// 	i--;
// 	str[i] = k;
// 	i = 0;
// 	j = 1;
// 	if (ptr[i])
// 		k = ptr[i];
// 	while (ptr[i])
// 		ptr[i++] = ptr[j++];
// 	i--;
// 	ptr[i] = k;
// }



// int main()
// {
// 	char	str[] = "hamza aarab";
// 	rotate_raa(str);
// 	printf ("%s", (str));
// 	return (0);
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   return_integer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haarab <haarab@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 22:09:23 by haarab            #+#    #+#             */
/*   Updated: 2023/04/15 17:29:58 by haarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	returnstr(int *str, int *ptr)
{
	int	k;
	int	y;
	int	j;

	j = 0;
	y = 0;
	k = 0;
	while (t_vars.n < t_vars.y)
	{
		k = bigg_number(ptr);
		if (k >= t_vars.k / 2 && k != 0)
			rotate_rrb(ptr);
		if (k < t_vars.k / 2 && k != 0)
			rotate_rb(ptr);
		if (k == 0)
			str = swap_pa(str, ptr, y);
	}
}

void	returnint(char **s, int *ret, int j, int k)
{
	ret[k] = ft_atoi(s[j]);
	if (check_number(s[j], ret) == 1)
	{
		max_min(&s[j], ret);
		free(s[j]);
	}
}

int	*returninteger(char **str)
{
	int		*ret;
	char	**s;
	int		i;
	int		j;
	int		k;

	ret = malloc(sizeof(int) * t_vars.y);
	if (ret == NULL)
		return (NULL);
	i = 1;
	k = 0;
	while (i <= t_vars.w)
	{
		j = 0;
		s = ft_split(str[i]);
		while (s[j])
			returnint(s, ret, j++, k++);
		free(s);
		i++;
	}
	return (ret);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   return_integer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haarab <haarab@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 22:09:23 by haarab            #+#    #+#             */
/*   Updated: 2023/04/15 00:27:32 by haarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
	t_vars	vars;
	int		*ret;
	char	**s;
	int		i;
	int		j;
	int		k;

	ret = malloc(sizeof(int) * vars.y);
	if (ret == NULL)
		return (NULL);
	i = 1;
	k = 0;
	while (i <= vars.w)
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

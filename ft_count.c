/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haarab <haarab@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 21:27:29 by haarab            #+#    #+#             */
/*   Updated: 2023/04/15 00:19:48 by haarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	count_arg(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	i--;
	return (i);
}

int	count_element(char **str)
{
	char	**s;
	int		i;
	int		j;
	int		b;

	b = 0;
	i = 1;
	while (str[i])
	{
		j = 1;
		s = ft_split(str[i]);
		free (s[0]);
		while (s[j])
		{
			free (s[j]);
			b++;
			j++;
		}
		free (s);
		b++;
		i++;
	}
	return (b);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haarab <haarab@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 12:54:00 by haarab            #+#    #+#             */
/*   Updated: 2023/03/10 12:27:22 by haarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check(char *str)
{
	int	i;
	int	b;

	i = 0;
	b = 0;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
		{
			b++;
			break ;
		}
		i++;
	}
	if (b == 1)
	{
		return (0);
	}
	else
	{
		return (1);
	}	
}

int	ft_atoi(const char *str)
{
	int		i;
	int		n;
	int		res;

	i = 0;
	n = 1;
	res = 0;
	while ((str[i] >= 9 && str[i] <= 15) || str[i] == 32)
	{
		i++;
	}
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			n *= -1;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = (res * 10) + (str[i] - '0');
		i++;
	}
	return (res * n);
}

// size_t	ft_strlen(const char *str)
// {
// 	size_t	i;

// 	i = 0;
// 	while (str[i] != '\0')
// 	i++;
// 	return (i);
// }
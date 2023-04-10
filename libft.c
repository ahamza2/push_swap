/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haarab <haarab@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 12:54:00 by haarab            #+#    #+#             */
/*   Updated: 2023/04/10 16:03:12 by haarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_Number(char *str)
{
	int	i;
	int	b;

	b = 0;
	i = 1;
	if ((str[0] < '0' || str[0] > '9') && str[0] != '-' && str[0] != '+')
		b++;	
	if ((str[0] == '-' || str[0] == '+') && str[1] == 0)
		b++;
	while (str[i])
	{
		// if (str[0] == '+' && (str[i] >= '1' && str[i] <= '9'))
		// 	b++;
		if ((str[i] < '0' || str[i] > '9'))
			b++;
		i++;
	}
	if (b != 0)
	{
		write (1, "Error\n", 6);
		exit (1);
	}
	else
		return (1);	
}

void	check_doubleelement(int	*str)
{
	int	i;
	int j;

	i = 0;
	while (i < t_vars.y)
	{
		j = i + 1;
		while (j < t_vars.y)
		{
			if (str[i] == str[j])
			{
				write (1, "Error\n", 6);
				exit (1);
			}
			j++;
		}
		i++;
	}
}

void	max_min(char  **str)
{
	int i;
	// static int str2[32];
	
		// str2[i] = str[i];
	i = 1;
	while (i < t_vars.y + 1)
	{
		// printf ("str2[i] ======================== %s =================\n",str[i]);
		if (ft_atoi(str[i]) > 2147483647 && ft_atoi(str[i]) < -2147483648)
		{
			// printf ("str[i] ======================== %s =================\n",str[i]);
			write (1, "Error\n", 6);
			exit (1);
		}
		i++;
	}
}

int	ft_atoi(const char *str)
{
	int		i;
	int long		n;
	int long		res;

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

void	free_malloc(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free (str[i]);
		i++;
	}
	free(str);
}
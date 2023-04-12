/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haarab <haarab@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 12:54:00 by haarab            #+#    #+#             */
/*   Updated: 2023/04/12 20:03:10 by haarab           ###   ########.fr       */
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
				free (str);
				printError();
			}
			j++;
		}
		i++;
	}
}

void	printError(void)
{
	write (1, "Error\n", 6);
	exit (1);
}

void	checkelementisfree(char **str)
{
	int i;
	int j;
	int b;
	
	if (str[0][0] == '\0')
	{
		free (str);
		printError();
	}
	i = 1;
	while (i <= t_vars.w)
	{
		j = 0;
		b = 0;
		while (str[i][j])
		{
			if ((str[i][j] >= '0' && str[i][j] <= '9') || (str[i][j] == '+' || str[i][j] == '-'))
				b++;
			j++;
		}
		if (b == 0)
		{
			free (str);
			printError();
		}
		i++;
	}
}

int	lenthint(char *str)
{
	int j;
	int b;

	j = 0;
	if (str[0] == '-' || str[0] == '+')
		j++;
	while (str[j] == '0')
		j++;
	b = 0;
	while (str[j] >= '0' && str[j] <= '9')
	{
		b++;
		j++;
	}
	return (b);
}

void	max_min(char  **str)
{
	int i;
	int b;
	int j;

	i = 0;
	if ((ft_atoi(str[i]) > 2147483647  || ft_atoi(str[i]) < -2147483648))
		printError();
	b = 0;
	b = lenthint(str[i]);
	if (b > 10)
		printError();
}

long	ft_atoi(const char *str)
{
	int			i;
	long		n;
	long		res;

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

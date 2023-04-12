/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haarab <haarab@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 13:30:40 by haarab            #+#    #+#             */
/*   Updated: 2023/04/12 20:05:01 by haarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_elemen(char **str)
{
	int i;

	i = 0;
	while(str[i])
	{
		i++;
	}
	i--;
	return(i);
}

int	count_element(char **str)
{
	char **s;
	int i;
	int j;
	int b;
	
	b = 0;
	i = 1;
	while(str[i])
	{
		j = 1;
		s = ft_split(str[i]);
		free (s[0]);
		while (s[j])
		{
			b++;
			j++;
		}
		free (s);
		b++;
		i++;
	}
	return(b);
}

int	*returnint(char **s, int *ret, int j, int k)
{
	if (check_Number(s[j]) == 1)
	{
		max_min(&s[j]);
		ret[k] = ft_atoi(s[j]);
		free(s[j]);
	}
	return (ret);
}


int *returninteger(char **str)
{
	int		*ret;
	char	**s;
	int 	i;
	int		j;
	int		k;
	
	ret = malloc(sizeof(int) * t_vars.y + 1);
	if (ret == NULL)
		return (NULL);
	i = 1;
	k = 0;
	while (i <= t_vars.w)
	{
		j = 0;
		s = ft_split(str[i]);
		while (s[j])
		{
			ret = returnint (s, ret, j, k);
			k++;
			j++;
		}
		free(s);
		i++;
	}
	check_leaks();
	return (ret);
}

int	code_iscorrect(int *str)
{
	int i;
	int j;
	int b;
	
	i = 0;
	j = 1;
	b = 1;
	while (i < t_vars.y - 1)
	{
		if (str[i] < str[j])
		{
			b++;
		}
		j++;
		i++;
	}
	return (b);
}

	
int	check_smallnumber(int *str)
{
	int i;
	int j;
	int d;

	i = 0;
	j = 0;
	d = str[i];
	while (j < t_vars.n)
	{
		if (d > str[j])
		{
			d = str[j];
		}
		j++;
	}
	return (d);
}

int	laadad_lkbir(int *ptr)
{
	int i;
	int j;
	int d;
	int pos;
	
	i = 0;
	d = ptr[0];
	j = 0;
	while (j < t_vars.k)
	{
		if (d <= ptr[j])
		{
			d = ptr[j];
			pos = j;
		}
		j++;
	}
	return (pos);
}

int	tree_element(int *str)
{
	int i;
	int j;
	int k;
	int d;
	
	i = 0;
	j = 0;
	k = 0;
	while (k < t_vars.y)
	{
		if (t_vars.n == 2 && str[i] > str[1])
		{
			swap_sa(str);
			j++;
		}
		if (t_vars.n == 3 && str[i] > str[1] && str[i] > str[2])
		{
			rotate_ra(str);
			j++;
		}
		if (t_vars.n == 3 && str[i] < str[1] && str[i] > str[2])
		{
			rotate_rra(str);
			j++;
		}
		if (t_vars.n == 3 && str[i] < str[1] && str[1] > str[2])
		{
			rotate_rra(str);
			j++;
		}
		if (t_vars.n == 3 && str[i] > str[1])
		{
			swap_sa(str);
			j++;
		}
		k++;
	}
	return (j);
}


void	five_element(int *str, int *ptr)
{
	int i;
	int j;
	int k;
	int y;
	int d;
	int n;
	
	j = 0;
	k = 0;
	n = 0;
	y = 0;
	while (k < t_vars.n)
	{
		d = check_smallnumber(str);
		if (t_vars.n > 3 && (str[1] == d || str[2] == d))
		{
			rotate_ra(str);
			j++;
		}
		if (t_vars.n > 3 && (str[3] == d || str[t_vars.n - 1] == d))
		{
			rotate_rra(str);
			j++;
		}
		if (t_vars.n > 3 && str[0] == d)
		{
			ptr = swap_pb(str, ptr, y);
			j++;	
		}
		k++;
	}
	if (t_vars.n == 3)
	{
		n = tree_element(str);
	}
	i = 3;
	while (i < t_vars.y)
	{
		str = swap_pa(str, ptr, y);
		j++;
		i++;
	}
}

int	*sort_element(int *str, int *res)
{
	int i;
	int j;
	int k;
	int y;
	
	k = 0;
	while (k < t_vars.y)
	{
		res[k] = str[k];
		k++;
	}
	i = 0;
	while (i < t_vars.y)
	{
		k = 0;
		j = i + 1;
		while (j < t_vars.y)
		{
			if (res[i] > res[j])
			{
				k = res[j];
				res[j] = res[i];
				res[i] = k;
			}
			j++;
		}
		i++;
		j = 0;
	}
	return (res);
} 

int	returnstr(int *str, int *ptr)
{
	int k;
	int y;
	int n;
	int j;
	
	j = 0;
	y = 0;
	k = 0;
	while (t_vars.n < t_vars.y)
	{
		k = laadad_lkbir(ptr);
		if (k >= t_vars.k / 2 && k != 0)
		{
			rotate_rrb(ptr);
			j++;
		}
		if (k < t_vars.k / 2 && k != 0)
		{
			rotate_rb(ptr);
			j++;
		}
		if (k == 0)
		{
			str = swap_pa(str, ptr, y);
			j++;
		}
	}
	return (j);
}


void	check_onehundred(int *str, int *ptr)
{
	int	i;
	int j;
	int n;
	int y;
	int k;
	int *res;
	int b;
	int p;
	n = 0;
	k = 0;
	b = 0;
	res = malloc(sizeof(int) * t_vars.y + 1);
	res = sort_element(str, res);
	
	i = 0;
	j = 15;
	y = 0;
	if (j > t_vars.y - 1)
	{
		j = t_vars.y - 1;
	}
	while (t_vars.k < t_vars.y)
	{
		if (str[n] < res[i])
		{
			ptr = swap_pb(str, ptr, y);
			b++;
			rotate_rb(ptr);
			b++;
			if(j < t_vars.y - 1)
			{
				j++;
				i++;
			}
		}
		if (str[n] > res[j])
		{
			rotate_ra(str);
			b++;
		}
		if (str[n] >= res[i] && str[n] <= res[j])
		{
			ptr = swap_pb(str, ptr, y);
			b++;
			if(j < t_vars.y - 1)
			{
				j++;
				i++;
			}
		}
	}
	p = returnstr(str, ptr);
	p = p + b;
	free (res);
}

void	check_fivehundred(int *str, int *ptr)
{
	int	i;
	int j;
	int n;
	int y;
	int k;
	int *res;
	int b;
	int p;
	n = 0;
	k = 0;
	b = 0;
	res = malloc(sizeof(int) * t_vars.y + 1);
	res = sort_element(str, res);
	
	i = 0;
	j = 35;
	y = 0;
	if (j > t_vars.y - 1)
	{
		j = t_vars.y - 1;
	}
	while (t_vars.k < t_vars.y)
	{
		if (str[n] < res[i])
		{
			ptr = swap_pb(str, ptr, y);
			b++;
			rotate_rb(ptr);
			b++;
			if(j < t_vars.y - 1)
			{
				j++;
				i++;
			}
		}
		if (str[n] > res[j])
		{
			rotate_ra(str);
			b++;
		}
		if (str[n] >= res[i] && str[n] <= res[j])
		{
			ptr = swap_pb(str, ptr, y);
			b++;
			if(j < t_vars.y - 1)
			{
				j++;
				i++;
			}
		}
	}
	p = returnstr(str, ptr);
	p = p + b;
	free(res);
}


void checkint(int *str)
{
	int *ptr;
	int i;

	
	ptr = malloc(sizeof(int) * t_vars.y + 1);
	if (t_vars.y >= 1 && t_vars.y <= 3)
		tree_element(str);
	if (t_vars.y >= 4 && t_vars.y <= 5)
		five_element(str, ptr);
	if (t_vars.y >= 6 && t_vars.y <= 100)
		check_onehundred(str, ptr);
	if (t_vars.y >= 101 && t_vars.y <= 500)
		check_fivehundred(str, ptr);
	if (t_vars.y >= 501)
		check_fivehundred(str, ptr);
	// i = 0;
	// while (i < t_vars.y)
	// {
	// 	printf("STACK : A = %d\n", str[i]);
	// 	i++;
	// }
	// printf("------------\n");
	// printf("STACK : A\n");
	
	free(ptr);
}

int	main(int ac, char **av)
{
	int		*res;
	int		*str;
	int		i;
	int		j;

	i = 0;
	t_vars.w = check_elemen(av);
	t_vars.n = count_element(av);
	t_vars.y = t_vars.n;
	checkelementisfree(av);
	str = returninteger(av);
	if (code_iscorrect(str) != t_vars.y)
	{
		check_doubleelement(str);
		checkint(str);
		free (str);
	}
	// check_leaks();
	// while (1);
	return (0);
}

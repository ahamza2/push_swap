/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haarab <haarab@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 13:30:40 by haarab            #+#    #+#             */
/*   Updated: 2023/03/10 17:15:40 by haarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// int	main(void)
// {
// 	char	**res;
// 	char	*str;
// 	str = "11 545 12 44 847 45";
// 	int		i;

// 	i = 0;
// 	res = ft_split(str);
// 	while (res[i])
// 	{
// 		printf ("%s\n", res[i]);
// 		i++;
// 	}
// 	return (0);
// }

int	count_strings(char const *str, char c)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		if (str[i] != '\0')
			count++;
		while (str[i] && str[i] != c)
			i++;
	}
	return (count);
}

int	sep_length(char const *str, char c)
{
	int	len;
	int	i;

	len = 0;
	i = 0;
	while (str[i] && str[i] == c)
		i++;
	while (str[i] && str[i] != c)
	{
		i++;
		len++;
	}
	return (len);
}

char	*strfil(char const *str, char c)
{
	char	*word;
	int		length;
	int		i;
	int		j;

	i = 0;
	j = 0;
	length = sep_length(str, c);
	word = malloc(length + 1);
	if (!word)
	{
		return (0);
	}
	while (str[i] && str[i] == c)
		i++;
	while (str[i] && str[i] != c)
	{
		word[j] = str[i];
		i++;
		j++;
	}
	word[j] = 0;
	return (word);
}

char	**ft_split(char const *s)
{
	int		i;
	int		j;
	char	**arr;

	i = 0;
	if (!s)
		return (NULL);
	j = count_strings(s, ' ');
	arr = malloc((j + 1) * sizeof(char *));
	if (!arr)
		return (NULL);
	while (*s && j)
	{
		while (*s && *s == ' ')
		s++;
		arr[i] = strfil(s, ' ');
		s += sep_length(s, ' ');
		while (*s && *s == ' ')
		s++;
		i++;
	}
	arr[i] = 0;
	// printf("%s", arr[0]);
	return (arr);
}

int *returnint(char **str)
{
	int		*ret;
	int 	i;
	int		j;
	int		k;
	int		n;
	
	ret = malloc(sizeof(int *));
	i = 1;
	while (str[i])
	{
		j = 0;
		while (ft_split(str[i])[j])
		{
			ret[k++] = ft_atoi(ft_split(str[i])[j]);
			j++;
		}
		i++;
	}
	return (ret);
}

void checkint(int *str)
{
	int *ptr;
	int i;
	int j;
	int k;
	
	ptr = malloc(sizeof(int *));

	k = 0;
	while (str[k])
	{
		k++;
	}
	k--;
	j = 0;
	while (k >= 5)
	{
		ptr = swap_pb(str, ptr, k, j);
		k--;
		j++;
	}
	j = 0;
	// printf ("s = %d\n", ptr[2]);
	// while (str[k])
	// {
	// 	k++;
	// }
	// k--;

	rotate_rrr(str, ptr);
	
	i = 0;
	while (str[i])
	{
		printf("str = %d ---        --- ptr = %d\n", str[i], ptr[i]);
		i++;
	}
	printf("------------       ----------------\n");
	printf("STACK : A                STACK : B\n");
	// i = 0;
	// while (ptr[i])
	// {
	// 	printf ("ptr = %d\n" , ptr[i]);
	// 	i++;
	// }
	// k = 2;
	// while (ptr[k])
	// {
	// 	k++;
	// }
	// k--;
	// j = 0;
	// n = 2;
	// printf("%d\n", n);
	// while (k >= 0)
	// {
	// 	str = swap_pa(str, ptr, k, j);
	// 	k--;
	// 	j++;
	// }


	
	// // printf ("k = %d", k);
	// j = 0;
	// str = swap_pa(str, ptr, k, j);
	// if (str[i])
	// 	swap_sa(str);
	// if (ptr[i])
	// 	swap_sb(ptr);
	// if (str[i] && ptr[i])
	// {
	// 	swap_ss(str, ptr);
	// }	
	// if (str[i])
	// {
	// 	swap_pa(str[i]);
	// }
	// printf ("%d", *str);
	// while (ptr[j])
	// {
		// printf("str : %d\n", ptr[j]);
	// 	j++;
	// }
	// i = 0;
	// while (str[i])
	// {
	// 	printf("str : %d\n", str[i]);
	// 	i++;
	// }
	// i = 0;
	// while (ptr[i])
	// {
	// 	printf("ptr : %d\n", ptr[i]);
	// 	i++;
	// }
	// i = 0;
	// while (str[i] && ptr[i])
	// {
	// 	while(str[i])
	// 	{
	// 		printf("str : %d\n", str[i]);
	// 		i++;
	// 	}
	// 	i = 0;
	// 	while (ptr[i])
	// 	{
	// 		printf("ptr : %d\n", ptr[i]);
	// 		i++;
	// 	}
	// }
}

int	main(int ac, char **av)
{
	int		*res;
	int		*str;
	int		i;

	i = 0;
	str = returnint(av);
	checkint(str);
	// while (str[i])
	// {
	// 	printf ("%d\n", str[i]);
	// 	i++;
	// }
	return (0);
}

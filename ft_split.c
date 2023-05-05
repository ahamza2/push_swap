/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haarab <haarab@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 14:52:36 by haarab            #+#    #+#             */
/*   Updated: 2023/05/05 17:24:27 by haarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
	word = malloc(sizeof(int) * length + 1);
	if (!word)
		return (0);
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
	return (arr);
}

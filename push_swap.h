/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haarab <haarab@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 17:55:48 by haarab            #+#    #+#             */
/*   Updated: 2023/04/12 19:44:07 by haarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

struct s_vars
{
	int n;
	int k;
	int y;
	int w;
}	t_vars;

struct s_one
{
	int *pt;
	int	*st;
	int t;
}	t_one;


int		count_strings(char const *str, char c);

int		sep_length(char const *str, char c);

char	*strfil(char const *str, char c);

char	**ft_split(char const *s);

int 	*returninteger(char **str);

void	swap_sa(int *str);

void	swap_sb(int *ptr);

void	swap_ss(int *str, int *ptr);

int		*swap_pa(int *str, int *ptr, int j);

int		*swap_pb(int *str, int *ptr, int j);

void	rotate_ra(int *str);

void	rotate_rb(int *ptr);

void	rotate_rr(int *str, int *ptr);

void	rotate_rra(int *str);

void	rotate_rrb(int *ptr);

void	rotate_rrr(int *str, int *ptr);

int		check_Number(char *str);

long	ft_atoi(const char *str);

void 	checkint(int *str);

int		tree_element(int *str);

void	five_element(int *str, int *ptr);

void	check_doubleelement(int	*str);

void	max_min(char **str);

int		lenthint(char *str);

void	checkelementisfree(char **str);

void	printError(void);

int		count_element(char **str);

int		check_smallnumber(int *str);

void check_leaks();

#endif

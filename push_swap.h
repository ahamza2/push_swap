/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haarab <haarab@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 17:55:48 by haarab            #+#    #+#             */
/*   Updated: 2023/04/15 17:36:00 by haarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>

struct s_vars
{
	int	n;
	int	k;
	int	y;
	int	w;
}	t_vars;

struct s_ort
{
	int	i;
	int	j;
}	t_sort;

int		check_number(char *str, int *ret);

int		code_iscorrect(int *str);

void	print_errror(void);

void	checkelementisfree(char **str);

void	check_doubleelement(int	*str);

int		count_arg(char **str);

int		count_element(char **str);

int		count_strings(char const *str, char c);

int		sep_length(char const *str, char c);

char	*strfil(char const *str, char c);

char	**ft_split(char const *s);

long	ft_atoi(const char *str);

void	free_error(int *ret);

int		lenthint(char *str);

void	max_min(char **str, int *ret);

void	checkint(int *str);

void	returnint(char **s, int *ret, int j, int k);

int		*returninteger(char **str);

void	returnstr(int *str, int *ptr);

void	rotate_rra(int *str);

void	rotate_rrb(int *ptr);

void	rotate_rrr(int *str, int *ptr);

void	rotate_ra(int *str);

void	rotate_rb(int *ptr);

void	rotate_rr(int *str, int *ptr);

void	tree_element(int *str);

void	five_element(int *str, int *ptr);

void	hundred(int *res, int *str, int *ptr);

void	check_onehundred(int *str, int *ptr);

void	check_fivehundred(int *str, int *ptr);

void	sort_elem(int *res, int i, int j, int k);

int		*sortelement_fromsmalltolargnumber(int *str, int *res);

int		small_number(int *str);

int		bigg_number(int *ptr);

void	swap_sa(int *str);

void	swap_sb(int *ptr);

void	swap_ss(int *str, int *ptr);

int		*swap_pa(int *str, int *ptr, int j);

int		*swap_pb(int *str, int *ptr, int j);

#endif

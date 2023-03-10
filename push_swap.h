/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haarab <haarab@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 17:55:48 by haarab            #+#    #+#             */
/*   Updated: 2023/03/10 15:52:09 by haarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int		count_strings(char const *str, char c);

int		sep_length(char const *str, char c);

char	*strfil(char const *str, char c);

char	**ft_split(char const *s);

void	swap_sa(int *str);

void	swap_sb(int *ptr);

void	swap_ss(int *str, int *ptr);

int		*swap_pa(int *str, int *ptr, int i, int j);

int		*swap_pb(int *str, int *ptr, int k, int j);

void	rotate_ra(int *str);

void	rotate_rb(int *ptr);

void	rotate_rr(int *str, int *ptr);

void	rotate_rra(int *str);

void	rotate_rrb(int *ptr);

void	rotate_rrr(int *str, int *ptr);

int		check(char *str);

int		ft_atoi(const char *str);

void 	checkint(int *str);

#endif

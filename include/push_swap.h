/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msamhaou <msamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 20:35:41 by msamhaou          #+#    #+#             */
/*   Updated: 2023/02/13 02:32:22 by msamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <unistd.h>
# include <stdlib.h>
# include "libft.h"

t_list	*ft_init(char **av);
void	ft_del(int *val);
void	ft_lstdel_first(t_list **lst);
void	ft_printlst(t_list *lst);
void	push(t_list **lst1, t_list **lst2);
void	rotate(t_list **lst);
void	rev_rotate(t_list **lst);
void	swap(t_list **lst);
t_list	*ft_seclast(t_list *lst);
int		ft_getmax(t_list *lst);
int		ft_getmin(t_list *lst);
int		ft_getmax_index(t_list *lst);
int		ft_getmin_index(t_list *lst);
int		ft_min(int x, int y);
void	set_index(t_list *lst);
void	ft_setpos(t_list *lst);
void	ft_ra(t_list **a);
void	ft_rra(t_list **a);
void	ft_rb(t_list **b);
void	ft_rrb(t_list **b);
void	ft_rr(t_list **a, t_list **b);
void	ft_rrr(t_list **a, t_list **b);
void	ft_sa(t_list **a);
void	ft_sb(t_list **b);
int		ft_abs(int i);
void	ft_getcostb(t_list *lst);
void	ft_getcosta(t_list *b, t_list *a);
int		ft_findi_pos(t_list *lst, int index);
int		ft_less_isearch(t_list *lst, int i);
int		ft_sorted(t_list *lst);
void	ft_sort_big(t_list **a, t_list	**b);
t_list	*ft_findbest(t_list *lst);
void	pushb(t_list **a, t_list **b);
void	pusha(t_list **a, t_list **b);
int		ft_find_minmv(t_list *lst);
int		ft_isspace(char *s);

#endif
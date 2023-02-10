/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msamhaou <msamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 20:37:20 by msamhaou          #+#    #+#             */
/*   Updated: 2023/02/10 05:18:44 by msamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H
# include <unistd.h>
# include <stdlib.h>
# include "libft.h"
# include "get_next_line.h"

t_list	*ft_init(char **av);
void	ft_del(int *val);
void	ft_lstdel_first(t_list **lst);
void	push(t_list **lst1, t_list **lst2);
void	rotate(t_list **lst);
void	rev_rotate(t_list **lst);
void	swap(t_list **lst);
t_list	*ft_seclast(t_list *lst);
int		ft_sorted(t_list *lst);
int		ft_strdiff(char *str, char	*str2);
void	ft_rotate_both(t_list **a, t_list **b);
void	ft_rev_rotate_both(t_list **a, t_list **b);

#endif
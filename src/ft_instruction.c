/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_instruction.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msamhaou <msamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 03:22:37 by msamhaou          #+#    #+#             */
/*   Updated: 2023/02/07 05:09:31 by msamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	swap(t_list **lst)
{
	t_list	*tmp;
	t_list	*tmp2;

	tmp = *lst;
	tmp2 = (*lst)->next;
	(*lst)->next = (*lst)->next->next;
	*lst = tmp2;
	(*lst)->next = tmp;
}

void	pushb(t_list **a, t_list **b)
{
	ft_lstadd_front(b, ft_lstnew((*a)->val, (*a)->index)); 
	ft_lstdel_first(a);
	ft_putendl_fd("pb", 1);
}

void	pusha(t_list **a, t_list **b)
{
	ft_lstadd_front(a, ft_lstnew((*b)->val, (*b)->index)); 
	ft_lstdel_first(b);
	ft_putendl_fd("pa", 1);
}

void	rotate(t_list **lst)
{
	t_list	*tmp;

	tmp = (*lst)->next;
	ft_lstlast(*lst)->next = *lst;
	(*lst)->next = NULL;
	*lst = tmp;
}

void	rev_rotate(t_list **lst)
{
	t_list	*tmp;

	tmp = *lst;
	*lst = ft_lstlast(*lst);
	ft_seclast(tmp)->next = NULL;
	(*lst)->next = tmp;
}
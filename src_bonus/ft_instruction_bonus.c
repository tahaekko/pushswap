/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_instruction_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msamhaou <msamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 03:22:37 by msamhaou          #+#    #+#             */
/*   Updated: 2023/02/09 20:42:58 by msamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

void	push(t_list **lst1, t_list **lst2)
{
	ft_lstadd_front(lst2, ft_lstnew((*lst1)->val, (*lst1)->index));
	ft_lstdel_first(lst1);
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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cost.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msamhaou <msamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 01:54:38 by msamhaou          #+#    #+#             */
/*   Updated: 2023/02/07 01:55:23 by msamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	ft_getcostb(t_list *lst)
{
	int	size;

	size = ft_lstsize(lst);
	while (lst)
	{
		lst->costb = lst->pos;
		if (lst->pos > size / 2)
			lst->costb = lst->pos - size;
		lst = lst->next;
	}
}

int	ft_getsmallest_bigger(t_list *lst, int val)
{
	int	res;

	res = 2147483647;
	while (lst)
	{
		if (lst->index < val)
			lst = lst->next;
		if (!lst)
			break ;
		if (lst->index > val)
			res = ft_min(res, lst->index);
		lst = lst->next;
	}
	return (res);
}

void	ft_getcosta(t_list *b, t_list *a)
{
	int	size;
	int	target;
	int	targetpos;

	while (b)
	{
		target = ft_getsmallest_bigger(a, (b)->index);
		targetpos = ft_findi_pos(a, target);
		size = ft_lstsize(a);
		(b)->costa = targetpos;
		if (targetpos > size / 2)
			b->costa = targetpos - size;
		b->bestmv = ft_abs(b->costa) + ft_abs(b->costb);
		b = (b)->next;
	}
}
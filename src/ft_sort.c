/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msamhaou <msamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 01:52:48 by msamhaou          #+#    #+#             */
/*   Updated: 2023/02/10 18:13:57 by msamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_sort_small(t_list **a)
{
	int	max;

	max = ft_getmax(*a);
	while (!ft_sorted(*a))
	{
		if ((*a)->val == max)
			ft_ra(a);
		else if ((*a)->next->val == max)
			ft_rra(a);
		else
			ft_sa(a);
	}
}

static t_list	*ft_point_to_val(t_list *lst, int index)
{
	while (lst)
	{
		if (lst->index == index)
			return (lst);
		lst = lst->next;
	}
	return (lst);
}

static void	ft_push_to_b(t_list **a, t_list **b)
{
	int	med;

	med = (ft_getmax_index(*a) + ft_getmin_index(*a)) / 2;
	while (ft_lstsize(*a) > 3)
	{
		if ((*a)->index < med)
			pushb(a, b);
		else
			ft_ra(a);
		if (!ft_less_isearch(*a, med))
			med = (ft_getmax_index(*a) + ft_getmin_index(*a)) / 2;
	}
}

void	ft_push_back(t_list **a, t_list **b)
{
	t_list	*best;

	while (ft_lstsize(*b))
	{
		ft_setpos(*a);
		ft_setpos(*b);
		ft_getcostb(*b);
		ft_getcosta(*b, *a);
		best = ft_findbest(*b);
		if ((*b)->bestmv == 0)
			pusha(a, b);
		else if (best->costa < 0 && best->costb < 0)
			ft_rrr(a, b);
		else if (best->costa > 0 && best->costb > 0)
			ft_rr(a, b);
		else if (best->costb > 0)
			ft_rb(b);
		else if (best->costb < 0)
			ft_rrb(b);
		else if (best->costa > 0)
			ft_ra(a);
		else if (best->costa < 0)
			ft_rra(a);
	}
}

void	ft_sort_big(t_list **a, t_list	**b)
{
	int	max;
	int	size;

	ft_push_to_b(a, b);
	ft_sort_small(a);
	ft_push_back(a, b);
	ft_setpos(*a);
	max = ft_getmax_index(*a);
	size = ft_lstsize(*a);
	while (!ft_sorted(*a))
	{
		ft_setpos(*a);
		if (ft_point_to_val(*a, max)->pos < size / 2)
			ft_ra(a);
		else
			ft_rra(a);
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_limits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msamhaou <msamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 22:13:42 by msamhaou          #+#    #+#             */
/*   Updated: 2023/02/08 16:13:53 by msamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_max(int x, int y)
{
	if (x > y)
		return (x);
	return (y);
}

int	ft_min(int x, int y)
{
	if (x < y)
		return (x);
	return (y);
}

int	ft_getmax(t_list *lst)
{
	int	res;

	res = lst->val;
	lst = lst->next;
	while (lst)
	{
		res = ft_max(res, lst->val);
		lst = lst->next;
	}
	return (res);
}

int	ft_getmin(t_list *lst)
{
	int	res;

	res = lst->val;
	lst = lst->next;
	while (lst)
	{
		res = ft_min(res, lst->val);
		lst = lst->next;
	}
	return (res);
}

int	ft_getmax_index(t_list *lst)
{
	int	res;

	res = lst->index;
	lst = lst->next;
	while (lst)
	{
		res = ft_max(res, lst->index);
		lst = lst->next;
	}
	return (res);
}

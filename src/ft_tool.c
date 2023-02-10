/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tool.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msamhaou <msamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 11:26:05 by msamhaou          #+#    #+#             */
/*   Updated: 2023/02/08 16:13:53 by msamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_getmin_index(t_list *lst)
{
	int	res;

	res = lst->index;
	lst = lst->next;
	while (lst)
	{
		res = ft_min(res, lst->index);
		lst = lst->next;
	}
	return (res);
}

int	ft_find_minmv(t_list	*lst)
{
	int	res;

	res = lst->bestmv;
	lst = lst->next;
	while (lst)
	{
		res = ft_min(res, lst->bestmv);
		lst = lst->next;
	}
	return (res);
}

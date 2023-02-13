/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tool.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msamhaou <msamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 11:26:05 by msamhaou          #+#    #+#             */
/*   Updated: 2023/02/13 02:32:04 by msamhaou         ###   ########.fr       */
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

t_list	*ft_findbest(t_list *lst)
{
	while (lst)
	{
		if (lst->bestmv == ft_find_minmv(lst))
			return (lst);
		lst = lst->next;
	}
	return (lst);
}

int	ft_isspace(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == ' ')
			return (1);
		i++;
	}
	return (0);
}

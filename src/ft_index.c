/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_index.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msamhaou <msamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 03:11:32 by msamhaou          #+#    #+#             */
/*   Updated: 2023/02/06 03:20:22 by msamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	ft_allindexed(t_list *lst)
{
	while (lst)
	{
		if (lst->indexed == 0)
			return (0);
		lst = lst->next;
	}
	return (1);
}

int	ft_getmin_to_index(t_list *lst)
{
	int	res;

	res = 2147483647;
	while (lst)
	{
		if (lst->indexed == 1)
			lst = lst->next;
		if (!lst)
			break ;
		if (lst->indexed == 0)
			res = ft_min(res, lst->val);
		lst = lst->next;
	}
	return (res);
}

void	set_index(t_list *lst)
{
	int	i;
	t_list	*tmp;

	i = 0;
	tmp = lst;
	while (!ft_allindexed(tmp))
	{
		lst = tmp;
		while (lst)
		{
			if (lst->val == ft_getmin_to_index(tmp))
			{
				lst->index = i++;
				lst->indexed = 1;
			}
			lst= lst->next;
		}
	}
	
}

void	ft_setpos(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst->pos = i++;
		lst = lst->next;
	}
}
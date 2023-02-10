/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msamhaou <msamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 22:51:42 by msamhaou          #+#    #+#             */
/*   Updated: 2023/02/09 20:03:59 by msamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	ft_sorted(t_list *lst)
{
	while (lst->next)
	{
		if (lst->val > lst->next->val)
			return (0);
		lst = lst->next;
	}
	return (1);
}

int	ft_abs(int i)
{
	if (i < 0)
		return (-i);
	return (i);
}

int	ft_findi_pos(t_list *lst, int index)
{
	while (lst)
	{
		if (lst->index == index)
			return (lst->pos);
		lst = lst->next;
	}
	return (0);
}

int	ft_less_isearch(t_list *lst, int i)
{
	while (lst)
	{
		if (lst->index < i)
			return (1);
		lst = lst->next;
	}
	return (0);
}

int	main(int ac, char **av)
{
	t_list	*a;
	t_list	*b;

	if (ac < 2)
		return (0);
	a = NULL;
	b = NULL;
	a = ft_init(av);
	set_index(a);
	ft_setpos(a);
	ft_sort_big(&a, &b);
	ft_lstclear(&a, ft_del);
}

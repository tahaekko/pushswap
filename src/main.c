/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msamhaou <msamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 22:51:42 by msamhaou          #+#    #+#             */
/*   Updated: 2023/02/07 05:24:38 by msamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"
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





// void	ft_sort(t_list **lst)
// {
// 	if (!ft_sorted(*lst))
// 	{
// 		if (ft_lstsize(*lst) > 3)
// 			ft_sortbig(lst);
// 		else
// 			ft_sortsmall(lst);
// 	}
// }

int	main(int ac, char **av)
{
	t_list	*a;
	t_list	*b = NULL;
	t_list	*init;

	(void)ac;
	(void)b;
	init = ft_init(av);
	a = init;
	set_index(a);
	ft_setpos(a);
	ft_sort_big(&a, &b);
}
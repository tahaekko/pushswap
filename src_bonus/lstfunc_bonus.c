/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstfunc.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msamhaou <msamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 16:55:17 by msamhaou          #+#    #+#             */
/*   Updated: 2023/02/08 16:13:53 by msamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_seclast(t_list *lst)
{
	while (lst->next->next)
		lst = lst->next;
	return (lst);
}

void	ft_del(int *val)
{
	*val = 0;
}

void	ft_lstdel_first(t_list **lst)
{
	t_list	*tmp;

	tmp = (*lst)->next;
	ft_lstdelone(*lst, ft_del);
	*lst = tmp;
}

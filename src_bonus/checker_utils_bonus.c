/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_utils_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msamhaou <msamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 20:41:00 by msamhaou          #+#    #+#             */
/*   Updated: 2023/02/11 22:49:11 by msamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

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

int	ft_strdiff(char *str, char	*str2)
{
	int	i;

	i = 0;
	while (str[i] || str2[i])
	{
		if (str[i] != str2[i])
			return (1);
		i++;
	}
	return (0);
}

void	ft_rotate_both(t_list **a, t_list **b)
{
	if (!(*b))
		rotate(a);
	else if (!(*a))
		rotate(b);
	else
	{
		rotate(a);
		rotate(b);
	}
}

void	ft_rev_rotate_both(t_list **a, t_list **b)
{
	if (!(*b))
		rev_rotate(a);
	else if (!(*a))
		rev_rotate(b);
	else
	{
		rev_rotate(a);
		rev_rotate(b);
	}
}

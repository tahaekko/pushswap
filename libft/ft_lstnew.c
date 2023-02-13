/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msamhaou <msamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 11:47:18 by msamhaou          #+#    #+#             */
/*   Updated: 2023/02/13 02:48:53 by msamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(int val, int index)
{
	t_list	*list;

	list = (t_list *)ft_calloc(1, sizeof(t_list));
	if (!list)
		exit(1);
	list->val = val;
	list->index = index;
	list->next = NULL;
	return (list);
}

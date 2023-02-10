/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_instruction_both.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msamhaou <msamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 22:40:05 by msamhaou          #+#    #+#             */
/*   Updated: 2023/02/08 22:40:27 by msamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rr(t_list **a, t_list **b)
{
	rotate(a);
	rotate(b);
	ft_putendl_fd("rr", 1);
}

void	ft_rrr(t_list **a, t_list **b)
{
	rev_rotate(a);
	rev_rotate(b);
	ft_putendl_fd("rrr", 1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_instruction_b.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msamhaou <msamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 11:14:37 by msamhaou          #+#    #+#             */
/*   Updated: 2023/02/09 20:39:27 by msamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rb(t_list **b)
{
	rotate(b);
	ft_putendl_fd("rb", 1);
}

void	ft_rrb(t_list **b)
{
	rev_rotate(b);
	ft_putendl_fd("rrb", 1);
}

void	ft_sb(t_list **b)
{
	swap(b);
	ft_putendl_fd("sb", 1);
}

void	pushb(t_list **a, t_list **b)
{
	push(a, b);
	ft_putendl_fd("pb", 1);
}

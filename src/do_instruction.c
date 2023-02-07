/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_instruction.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msamhaou <msamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 03:34:33 by msamhaou          #+#    #+#             */
/*   Updated: 2023/02/07 05:09:21 by msamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	ft_ra(t_list **a)
{
	rotate(a);
	ft_putendl_fd("ra", 1);
}

void	ft_rra(t_list **a)
{
	rev_rotate(a);
	ft_putendl_fd("rra", 1);
}

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

void	ft_rr(t_list **a , t_list **b)
{
	rotate(a);
	rotate(b);
	ft_putendl_fd("rr", 1);
}

void	ft_rrr(t_list **a , t_list **b)
{
	rev_rotate(a);
	rev_rotate(b);
	ft_putendl_fd("rrr", 1);
}

void	ft_sa(t_list **a)
{
	swap(a);
	ft_putendl_fd("sa", 1);
}

void	ft_sb(t_list **b)
{
	swap(b);
	ft_putendl_fd("sb", 1);
}
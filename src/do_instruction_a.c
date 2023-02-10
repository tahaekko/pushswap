/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_instruction_a.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msamhaou <msamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 03:34:33 by msamhaou          #+#    #+#             */
/*   Updated: 2023/02/08 22:40:33 by msamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

void	ft_sa(t_list **a)
{
	swap(a);
	ft_putendl_fd("sa", 1);
}

void	pusha(t_list **a, t_list **b)
{
	push(b, a);
	ft_putendl_fd("pa", 1);
}

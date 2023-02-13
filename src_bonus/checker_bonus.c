/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msamhaou <msamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 16:12:17 by msamhaou          #+#    #+#             */
/*   Updated: 2023/02/13 00:34:57 by msamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	ft_swap_both(t_list **a, t_list **b)
{
	if (!(*b))
		swap(a);
	else if (!(*a))
		swap(b);
	else
	{
		swap(a);
		swap(b);
	}
}

int	ft_instr(char *str, t_list **a, t_list **b)
{
	if (!ft_strdiff(str, "ra\n"))
		return (rotate(a), 1);
	else if (!ft_strdiff(str, "rra\n"))
		return (rev_rotate(a), 1);
	else if (!ft_strdiff(str, "rb\n"))
		return (rotate(b), 1);
	else if (!ft_strdiff(str, "rrb\n"))
		return (rev_rotate(b), 1);
	else if (!ft_strdiff(str, "rr\n"))
		return (ft_rotate_both(a, b), 1);
	else if (!ft_strdiff(str, "rrr\n"))
		return (ft_rev_rotate_both(a, b), 1);
	else if (!ft_strdiff(str, "sa\n"))
		return (swap(a), 1);
	return (0);
}

int	ft_more(char *str, t_list **a, t_list **b)
{
	if (!ft_strdiff(str, "sb\n"))
		return (swap(b), 1);
	else if (!ft_strdiff(str, "ss\n"))
		return (ft_swap_both(a, b), 1);
	else if (!ft_strdiff(str, "pa\n"))
		return (push(b, a), 1);
	else if (!ft_strdiff(str, "pb\n"))
		return (push(a, b), 1);
	else
	{
		ft_putendl_fd("Error", 2);
		exit(1);
	}
	return (0);
}

int	main(int ac, char **av)
{
	t_list	*a;
	t_list	*b;
	char	*line;

	if (ac < 2)
		return (0);
	a = NULL;
	b = NULL;
	line = NULL;
	a = ft_init(av);
	while ((get_next_line(0, &line)))
	{
		if (!ft_instr(line, &a, &b))
			ft_more(line, &a, &b);
		free(line);
	}
	if (ft_sorted(a))
		ft_putendl_fd("OK", 1);
	else
		ft_putendl_fd("KO", 1);	
	ft_lstclear(&a, ft_del);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msamhaou <msamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 03:14:29 by msamhaou          #+#    #+#             */
/*   Updated: 2023/02/13 01:05:17 by msamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_check_double(t_list *a)
{
	t_list	*tmp;

	tmp = a;
	while (a)
	{
		tmp = a;
		while (tmp)
		{
			if (tmp == a)
				tmp = tmp->next;
			if (!tmp)
				break ;
			if (tmp->val == a->val)
			{	
				ft_putendl_fd("Error", 2);
				exit(1);
				return (1);
			}
			tmp = tmp->next;
		}
		a = a->next;
	}
	return (0);
}

int	ft_onlysp(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] != ' ')
			return (0);
		i++;
	}
	return (1);
}


static int	ft_isspace(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == ' ')
			return (1);
		i++;
	}
	return (0);
}

static void	ft_error(char *s)
{
	int	i;

	i = 0;
	if (!s[i])
	{
		ft_putendl_fd("Error", 2);
		exit(1);
	}
	if (s[i] == '-' || s[i] == '+')
			i++;
	while (s[i])
	{
		if (!ft_isdigit(s[i]))
		{
			ft_putendl_fd("Error", 2);
			exit(1);
		}
		i++;
	}
}

static void	ft_arg_split(t_list **a, char *str)
{
	int		j;
	char	**s;

	j = 0;
	s = ft_split(str, ' ');
	while (s[j])
	{
		ft_error(s[j]);
		ft_lstadd_back(a, ft_lstnew(ft_atoi(s[j]), 0));
		free(s[j]);
		j++;
	}
	free(s);
}

t_list	*ft_init(char **av)
{
	int		i;
	t_list	*a;

	a = NULL;
	i = 1;
	while (av[i])
	{
		if (ft_onlysp(av[i]))
		{
			ft_putendl_fd("Error", 2);
			exit(1);
		}
		if (ft_isspace(av[i]))
			ft_arg_split(&a, av[i]);
		else
		{
			ft_error(av[i]);
			ft_lstadd_back(&a, ft_lstnew(ft_atoi(av[i]), 0));
		}
		i++;
	}
	ft_check_double(a);
	return (a);
}

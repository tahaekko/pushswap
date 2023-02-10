/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msamhaou <msamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 15:47:14 by msamhaou          #+#    #+#             */
/*   Updated: 2023/02/10 18:19:28 by msamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_convert(size_t *res, int sign, const char *str)
{
	while (*str >= '0' && *str <= '9')
	{
		*res *= 10;
		*res += *str - '0';
		if ((*res > 2147483647 && sign == 1)
			|| (*res > 2147483648 && sign == -1))
		{
			ft_putendl_fd ("Error", 1);
			exit(1);
		}
		str++;
	}
}

int	ft_atoi(const char *str)
{
	size_t	res;
	int		sign;

	res = 0;
	sign = 1;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
	{
		sign *= -1;
		str++;
	}
	else if (*str == '+')
		str++;
	ft_convert(&res, sign, str);
	return (res * sign);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msamhaou <msamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 15:31:41 by msamhaou          #+#    #+#             */
/*   Updated: 2023/02/10 02:49:49 by msamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>
# include <limits.h>
# include "../libft/libft.h"

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 2
# endif

char	*ft_strdup(char *s);
char	*ft_strcpy(char *dst, const char *src);
int		ft_isnewline(char *s);
char	*ft_strjoin(char *s1, char *s2);
size_t	ft_linelen(char *str);
char	*get_next_line(int fd, char **line);
#endif

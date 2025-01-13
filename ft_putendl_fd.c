/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgiulian <mgiulian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 19:25:09 by mgiulian          #+#    #+#             */
/*   Updated: 2025/01/13 21:33:40 by mgiulian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *c, int fd)
{
	size_t	i;

	if (!c)
		return ;
	i = 0;
	while (c[i])
	{
		write(fd, &c[i], 1);
		i++;
	}
	write(fd, "\n", 1);
}

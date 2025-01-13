/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgiulian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 22:59:14 by mgiulian          #+#    #+#             */
/*   Updated: 2025/01/09 22:59:16 by mgiulian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *destination, const char *source, size_t size)
{
	size_t	i;

	if (!destination || !source)
		return (0);
	i = 0;
	if (size > 0)
	{
		while (i < size - 1 && source[i])
		{
			destination[i] = source[i];
			i++;
		}
		destination[i] = '\0';
	}
	while (source[i])
		i++;
	return (i);
}

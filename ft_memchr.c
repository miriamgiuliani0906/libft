/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgiulian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 22:15:02 by mgiulian          #+#    #+#             */
/*   Updated: 2025/01/09 22:15:06 by mgiulian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *buf, int c, size_t count)
{
	const unsigned char	*z;
	unsigned char		uc;
	size_t				i;

	z = (const unsigned char *)buf;
	uc = (unsigned char)c;
	i = 0;
	while (i < count)
	{
		if (z[i] == uc)
			return ((void *)&z[i]);
		i++;
	}
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgiulian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 22:41:25 by mgiulian          #+#    #+#             */
/*   Updated: 2025/01/09 22:41:27 by mgiulian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t count)
{
	size_t			c;
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	c = 0;
	i = 1;
	if (!dest || !src)
		return (NULL);
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (dest > src)
	{
		i = -1;
		d += count - 1;
		s += count - 1;
	}
	while (c < count)
	{
		*d = *s;
		d += i;
		s += i;
		c++;
	}
	return (dest);
}

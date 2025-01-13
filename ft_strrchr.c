/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgiulian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 23:00:35 by mgiulian          #+#    #+#             */
/*   Updated: 2025/01/09 23:00:37 by mgiulian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *string, int c)
{
	char	*r;
	int		i;

	r = NULL;
	i = 0;
	while (string[i])
	{
		if (string[i] == (char)c)
			r = (char *)&string[i];
		i++;
	}
	if (string[i] == (char)c)
		r = (char *)&string[i];
	return (r);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgiulian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 23:01:31 by mgiulian          #+#    #+#             */
/*   Updated: 2025/01/09 23:01:34 by mgiulian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int ch)
{
	if (ch >= 'a' && ch <= 'z')
	{
		ch -= 32;
	}
	return (ch);
}
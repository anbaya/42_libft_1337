/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbaya <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 12:46:56 by anbaya            #+#    #+#             */
/*   Updated: 2024/11/01 17:17:05 by anbaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (dest == src || n == 0)
	{
		return (dest);
	}
	if (dest < src)
	{
		while (n--)
			*d++ = *s++;
	}
	else
	{
		s += n;
		d += n;
		while (n--)
			*(--d) = *(--s);
	}
	return (dest);
}

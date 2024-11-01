/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbaya <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 12:46:56 by anbaya            #+#    #+#             */
/*   Updated: 2024/10/26 12:46:56 by anbaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *ptr, int value, size_t num)
{
	char	*p;
	size_t	i;

	p = (char *)ptr;
	i = 0;
	while (i < num)
	{
		if (*p == value)
			return ((void *)p);
		p++;
		i++;
	}
	p++;
	return (NULL);
}

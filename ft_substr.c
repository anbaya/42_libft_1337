/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbaya <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 12:46:56 by anbaya            #+#    #+#             */
/*   Updated: 2024/10/26 12:46:56 by anbaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*sub;

	i = (size_t)start;
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
	{
		sub = (char *)malloc(1);
		if (sub)
			sub[0] = '\0';
		return (sub);
	}
	j = 0;
	sub = (char *)malloc((sizeof(char) * len) + 1);
	if (!sub)
		return (0);
	while (j < len)
		sub[j++] = s[i++];
	sub[j] = '\0';
	return (sub);
}

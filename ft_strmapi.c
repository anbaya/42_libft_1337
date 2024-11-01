/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbaya <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 12:46:56 by anbaya            #+#    #+#             */
/*   Updated: 2024/11/01 17:43:16 by anbaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	j;
	char	*str;

	if (!s || !(*f))
		return (NULL);
	i = ft_strlen(s);
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	j = 0;
	while (j < i)
	{
		str[j] = (*f)(j, s[j]);
		j++;
	}
	str[i] = '\0';
	return (str);
}

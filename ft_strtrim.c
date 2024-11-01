/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbaya <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 12:46:56 by anbaya            #+#    #+#             */
/*   Updated: 2024/11/01 17:47:10 by anbaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_set(char *str, char c)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		if (c == str[i])
			return (1);
		i++;
	}
	return (0);
}

static char	*trim(size_t start, size_t end, char *s1)
{
	size_t	i;
	size_t	j;
	size_t	range;
	char	*str;

	range = (end - start + 1);
	i = start;
	str = (char *)malloc((sizeof(char) * (range + 1)));
	if (!str)
		return (NULL);
	j = 0;
	while (j < range)
		str[j++] = s1[i++];
	str[j] = '\0';
	return (str);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*s;
	char	*t;

	if (!s1 || !set)
		return (NULL);
	s = (char *)s1;
	j = ft_strlen(s);
	i = 0;
	t = (char *)set;
	if (j == 0)
		return (ft_strdup(""));
	j--;
	while (s[i] && is_set(t, s[i]))
		i++;
	while (is_set(t, s[j]) && j > i)
		j--;
	return (trim(i, j, s));
}

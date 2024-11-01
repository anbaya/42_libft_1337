/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbaya <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 15:20:32 by anbaya            #+#    #+#             */
/*   Updated: 2024/11/01 15:21:03 by anbaya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*now;
	t_list	*next;

	if (!lst || !*lst || !del)
		return ;
	now = *lst;
	while (now)
	{
		next = now->next;
		(del)(now->content);
		free(now);
		now = next;
	}
	*lst = NULL;
}

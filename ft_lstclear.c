/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazor <mazor@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/13 13:12:40 by mazor             #+#    #+#             */
/*   Updated: 2020/05/15 19:24:37 by mazor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;

	if (lst)
	{
		current = *lst;
		while (current && current->next)
			ft_lstclear(&(current->next), del);
		ft_lstdelone(current, del);
		*lst = NULL;
	}
}

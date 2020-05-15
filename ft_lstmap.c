/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazor <mazor@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/13 17:24:14 by mazor             #+#    #+#             */
/*   Updated: 2020/05/15 19:42:29 by mazor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*start_new;
	t_list	*cur_new;

	if (!lst || !f)
		return (NULL);
	if (!(start_new = ft_lstnew(f(lst->content))))
		return (NULL);
	cur_new = start_new;
	while (lst->next)
	{
		lst = lst->next;
		cur_new->next = ft_lstnew(f(lst->content));
		if (!(cur_new->next))
		{
			ft_lstclear(&start_new, del);
			return (NULL);
		}
		cur_new = cur_new->next;
	}
	return (start_new);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazor <mazor@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/13 11:25:12 by mazor             #+#    #+#             */
/*   Updated: 2020/05/15 19:05:18 by mazor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				ft_lstadd_back(t_list **lst, t_list *new_el)
{
	t_list	*cur_el;

	if (lst)
	{
		cur_el = *lst;
		if (!cur_el)
		{
			*lst = new_el;
			return ;
		}
		while (cur_el->next)
		{
			cur_el = cur_el->next;
		}
		cur_el->next = new_el;
	}
}

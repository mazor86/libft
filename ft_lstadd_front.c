/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazor <mazor@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/13 10:25:55 by mazor             #+#    #+#             */
/*   Updated: 2020/05/15 18:50:23 by mazor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				ft_lstadd_front(t_list **lst, t_list *new_el)
{
	if (lst && new_el)
	{
		new_el->next = *lst;
		*lst = new_el;
	}
}

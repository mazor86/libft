/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazor <mazor@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/13 09:02:34 by mazor             #+#    #+#             */
/*   Updated: 2020/05/15 18:45:43 by mazor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list				*ft_lstnew(void *content)
{
	t_list	*new_el;

	if (!(new_el = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	new_el->content = content;
	new_el->next = NULL;
	return (new_el);
}

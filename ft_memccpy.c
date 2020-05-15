/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazor <mazor@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/11 00:32:40 by mazor             #+#    #+#             */
/*   Updated: 2020/05/11 01:47:13 by mazor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	void	*char_ptr;
	size_t	char_pos;

	char_ptr = ft_memchr(src, c, n);
	if (char_ptr)
	{
		char_pos = (size_t)(char_ptr - src + 1);
		return (ft_memcpy(dest, src, char_pos) + char_pos);
	}
	else
	{
		ft_memcpy(dest, src, n);
		return (NULL);
	}
}

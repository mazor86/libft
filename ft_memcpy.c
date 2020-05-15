/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazor <mazor@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/06 23:29:41 by mazor             #+#    #+#             */
/*   Updated: 2020/05/11 22:51:37 by mazor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char *d;
	unsigned char *s;

	if (!dest && !src)
		return (NULL);
	d = (unsigned char*)dest;
	s = (unsigned char*)src;
	while (n--)
		*(d++) = *(s++);
	return (dest);
}

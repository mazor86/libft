/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazor <mazor@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/07 00:51:45 by mazor             #+#    #+#             */
/*   Updated: 2020/05/10 17:39:19 by mazor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int	cmp;

	while (n--)
	{
		if ((cmp = *(unsigned char *)(s1++) - *(unsigned char *)(s2++)))
			return (cmp);
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazor <mazor@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/11 15:18:29 by mazor             #+#    #+#             */
/*   Updated: 2020/05/15 17:53:07 by mazor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t l_len;
	size_t b_len;

	b_len = ft_strlen(big);
	l_len = ft_strlen(little);
	if (l_len)
	{
		if (b_len >= l_len)
		{
			while (*big && len && (len >= l_len))
			{
				if (!(ft_strncmp(big, little, l_len)))
					return ((char*)big);
				big++;
				len--;
			}
		}
		return (NULL);
	}
	return ((char*)big);
}

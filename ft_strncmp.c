/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazor <mazor@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/11 12:13:29 by mazor             #+#    #+#             */
/*   Updated: 2020/05/11 23:58:30 by mazor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	cmp;

	while (n--)
	{
		if (!(*s1) && !(*s2))
			break ;
		if ((cmp = (unsigned char)*s1++ - (unsigned char)*s2++))
			return (cmp);
	}
	return (0);
}

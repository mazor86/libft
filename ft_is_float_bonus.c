/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_float_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazor <mazor@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 22:02:16 by mazor             #+#    #+#             */
/*   Updated: 2020/10/20 09:28:36 by mazor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** ft_is_float returns 0 if char *s isn`t float,
** -1, if float < 0 and
**  1, if float >= 0
*/

int		ft_is_float(const char *s)
{
	int	sign;

	sign = (*s == '-') ? -1 : 1;
	if (*s == '-')
		s++;
	if (!ft_strlen(s) || !ft_strcmp(s, "."))
		return (0);
	while (*s)
	{
		if (!ft_isdigit(*s))
		{
			if (*s++ == '.')
				break ;
			return (0);
		}
		s++;
	}
	while (*s)
	{
		if (!ft_isdigit(*s++))
			return (0);
	}
	return (sign);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazor <mazor@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/11 21:02:13 by mazor             #+#    #+#             */
/*   Updated: 2020/05/15 17:00:34 by mazor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_overflow(const char *nptr, int i, int sign)
{
	if (sign > 0 && ft_strncmp(nptr, STR_LONG_MAX, i) > 0)
		return (1);
	if (sign < 0 && ft_strncmp(nptr, STR_LONG_MIN + 1, i))
		return (1);
	return (0);
}

int			ft_atoi(const char *nptr)
{
	long	num;
	int		sign;
	int		digit;
	int		i;

	num = 0;
	sign = 1;
	while (ft_isspace(*nptr))
		nptr++;
	if (*nptr == '+' || *nptr == '-')
		sign = (*nptr++ == '+' ? 1 : -1);
	i = 0;
	while (nptr[i] && ft_isdigit(nptr[i]))
	{
		if (i >= 18)
			if (i > 18 || is_overflow(nptr, i, sign))
				return ((sign > 0) ? -1 : 0);
		digit = nptr[i++] - '0';
		num = num * 10 + digit;
	}
	return (sign * num);
}

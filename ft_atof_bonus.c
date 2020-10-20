/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atof_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazor <mazor@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 22:04:29 by mazor             #+#    #+#             */
/*   Updated: 2020/10/19 22:08:43 by mazor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

double	ft_atof(const char *str)
{
	double	integer;
	double	fraction;
	int		sign;

	while (ft_isspace(*str))
		str++;
	sign = (*str == '-') ? -1 : 1;
	integer = (double)ft_atoi(str) * sign;
	while (*str != '.')
		str++;
	fraction = (double)ft_atoi(++str);
	while (ft_isdigit(*str++))
		fraction /= 10;
	return (sign * (integer + fraction));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazor <mazor@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/12 18:29:30 by mazor             #+#    #+#             */
/*   Updated: 2020/05/12 19:00:48 by mazor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_putnbr_fd(int n, int fd)
{
	int		index;
	int		array[11];
	long	number;

	index = 0;
	number = n;
	if (n < 0)
	{
		number *= -1;
		ft_putchar_fd('-', fd);
	}
	while (number != 0)
	{
		array[index] = number % 10;
		number /= 10;
		index++;
	}
	if (n == 0)
		ft_putchar_fd('0', fd);
	while (index != 0)
	{
		ft_putchar_fd(array[index - 1] + '0', fd);
		index--;
	}
}

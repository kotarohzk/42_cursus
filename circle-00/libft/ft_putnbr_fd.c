/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scott <scottchowww@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 17:01:50 by scott             #+#    #+#             */
/*   Updated: 2023/07/25 18:07:30 by scott            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

void	ft_putnbr_fd(int n, int fd)
{
	int	sign;

	sign = 0;
	if (n < 0)
		sign = 1;
	if (n >= 10 || n <= -10)
	{
		ft_putnbr_fd((n / 10), fd);
		ft_putchar_fd((ft_abs(n % 10) + 48), fd);
	}
	if (n < 10 && n > -10)
	{
		if (sign)
			ft_putchar_fd('-', fd);
		ft_putchar_fd((ft_abs(n % 10) + 48), fd);
	}
}

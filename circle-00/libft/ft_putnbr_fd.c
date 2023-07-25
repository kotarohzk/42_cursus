/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scott <scottchowww@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 17:01:50 by scott             #+#    #+#             */
/*   Updated: 2023/07/25 18:15:04 by scott            ###   ########.fr       */
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
	if (n >= 10 || n <= -10)
	{
		ft_putnbr_fd((n / 10), fd);
		ft_putchar_fd((ft_abs(n % 10) + 48), fd);
	}
	if (n < 10 && n > -10)
	{
		if (n < 0)
			ft_putchar_fd('-', fd);
		ft_putchar_fd((ft_abs(n % 10) + 48), fd);
	}
}

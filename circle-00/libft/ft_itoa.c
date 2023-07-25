/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scott <scottchowww@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 12:56:39 by scott             #+#    #+#             */
/*   Updated: 2023/07/25 14:08:37 by scott            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_int_len(int n)
{
	size_t	len;

	len = 0;
	if (n < 0 || n == 0)
	{
		len++;
		n *= -1;
	}
	while (n)
	{
		len++;
		n /= 10;
	}
	return (len);
}

static int	ft_abs(int n)
{
	if (n < 0)
		return (n *= -1);
	else
		return (n);
}

char	*ft_itoa(int n)
{
	size_t	len;
	char	*buf;
	int		sign;

	len = get_int_len(n);
	buf = malloc(len + 1);
	sign = 0;
	if (!buf)
		return (NULL);
	if (n < 0)
		sign = 1;
	buf[len] = '\0';
	while (len)
	{
		if (len == 1 && sign)
			buf[len - 1] = '-';
		else
			buf[len - 1] = ft_abs(n % 10) + 48;
		n = n / 10;
		len--;
	}
	return (buf);
}

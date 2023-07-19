/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scott <scottchowww@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 18:42:14 by scott             #+#    #+#             */
/*   Updated: 2023/07/19 19:08:06 by scott            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = -1;
	while (++i < n)
	{
		if (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i])
		{
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		}
	}
	return (0);
}

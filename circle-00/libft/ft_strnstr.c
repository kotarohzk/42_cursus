/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scott <scottchowww@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 14:39:30 by scott             #+#    #+#             */
/*   Updated: 2023/07/21 13:18:11 by scott            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_size;

	needle_size = ft_strlen(needle);
	while (*haystack && len)
	{
		if (*haystack == *needle)
			if (len >= needle_size && !ft_memcmp(haystack, needle, needle_size))
				return ((char *)haystack);
		haystack++;
		len--;
	}
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scott <scottchowww@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 18:18:06 by scott             #+#    #+#             */
/*   Updated: 2023/07/24 18:42:31 by scott            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	char	*buf;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	buf = malloc(s1_len + s2_len + 1);
	if (!buf)
		return (NULL);
	ft_strlcpy(buf, s1, s1_len + s2_len + 1);
	ft_strlcat(buf, s2, s1_len + s2_len + 1);
	return (buf);
}

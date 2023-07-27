/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scott <scottchowww@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 19:48:08 by scott             #+#    #+#             */
/*   Updated: 2023/07/27 15:04:30 by scott            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

int	ft_printf(const char *s, ...)
{
	va_list	ap;
	int		i;
	int		j;
	char	*buf;

	va_start(ap, s);
	i = 0;
	j = 0;
	buf = NULL;
	while (s[i])
	{
		if (s[i] == '%')
		{
			j = i;
			while (!ft_strchr("cspdiuxX%", s[++i]))
				if (s[i] == ' ')
					return (1);
			buf = ft_substr(s, j, i - j + 1);
			if (!buf)
				return (0);
			if (s[i] == 's')
				ft_str(va_arg(ap, char *), buf);
			free(buf);
		}
		else
			ft_putchar_fd(s[i], 1);
		i++;
	}
	va_end(ap);
	return (0);
}

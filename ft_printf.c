/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcerezo- <rcerezo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 11:36:42 by rcerezo-          #+#    #+#             */
/*   Updated: 2022/10/27 11:36:42 by rcerezo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *s, ...)
{
	int		x;
	int		count;
	va_list	args;

	x = 0;
	count = 0;
	va_start(args, s);
	while (s[x])
	{
		if (s[x] == '%')
		{
			x++;
			count = ft_porcentaje(s[x], args, count);
		}
		else
		{
			count++;
			write(1, &s[x], 1);
		}
		x++;
	}
	va_end(args);
	return (count);
}

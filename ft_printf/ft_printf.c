/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschaub <mschaub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 14:06:14 by mschaub           #+#    #+#             */
/*   Updated: 2022/12/15 17:24:09 by mschaub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_len_of_print(va_list args, const char format)
{
	int	len;

	len = 0;
	if (format == 'c')
		len += ft_printchar(va_arg(args, int));
	else if (format == 's')
		len += ft_printstr(va_arg(args, char *));
	else if (format == 'p')
		len += 1;
	else if (format == 'i' || format == 'd')
		len += ft_printnbr(va_arg(args, int));
	else if (format == 'u')
		len += 1;
	else if (format == 'x' || format == 'X')
		len += ft_printhex(va_arg(args, unsigned int), format);
	else if (format == '%')
		len += ft_printperc();
	return (len);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		len;

	i = 0;
	len = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			len += ft_len_of_print(args, str[i + 1]);
			i++;
		}
		else
			len += ft_printchar(str[i]);
		i++;
	}
	va_end(args);
	return (len);
}

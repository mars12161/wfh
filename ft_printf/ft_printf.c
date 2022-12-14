/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschaub <mschaub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 14:06:14 by mschaub           #+#    #+#             */
/*   Updated: 2022/12/14 17:42:57 by mschaub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_args_num(va_list args, const char format)
{
	int num_of_args;

	num_of_args = 0;
	if (format == 'c')
		num_of_args += 1;
	else if (format == 's')
		num_of_args += 1;
	else if (format == 'p')
		num_of_args += 1;
	else if (format == 'd')
		num_of_args += 1;
	else if (format == 'i')
		num_of_args += 1;
	else if (format == 'u')
		num_of_args += 1;
	else if (format == 'x' || format == 'X')
		num_of_args += 1;
	else if (format == '%')
		num_of_args += 1;
	return (num_of_args);
}


int	ft_printf(const char *str, ...)
{
	char *test;

	test = (char *)str;
	ft_printstr(test);
}

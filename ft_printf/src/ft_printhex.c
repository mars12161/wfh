/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschaub <mschaub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 13:56:52 by mschaub           #+#    #+#             */
/*   Updated: 2022/12/17 16:29:37 by mschaub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_hexlen(unsigned long long num)
{
	int	i;

	i = 0;
	while (num > 0)
	{
		num = num / 16;
		i++;
	}
	return (i);
}

static void	ft_revstr(char *str)
{
	size_t	i;
	size_t	len;
	char	tmp;

	len = ft_strlen(str);
	i = 0;
	while (i < len / 2)
	{
		tmp = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = tmp;
		i++;
	}
}

void	ft_writehex(unsigned long long num, const char format)
{
	unsigned long long	remainder;
	unsigned long long	quotient;
	int		i;
	char	*hex;

	quotient = num;
	i = 0;
	hex = malloc(sizeof(char) * (ft_hexlen(num) + 1));
	if (!hex)
		return ;
	while (quotient != 0)
	{
		remainder = quotient % 16;
		quotient = quotient / 16;
		if (remainder < 10)
			hex[i++] = remainder + '0';
		else if (format == 'x')
			hex[i++] = (remainder - 10) + 'a';
		else if (format == 'X')
			hex[i++] = (remainder - 10) + 'A';
	}
	ft_revstr(hex);
	hex[i] = '\0';
	i = 0;
	while (hex[i] != '\0')
	{
		write(1, &hex[i], 1);
		i++;
	}
	free(hex);
}

int	ft_printhex(unsigned long long num, const char format)
{
	if (num == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	else
	{
		ft_writehex(num, format);
	}
	return (ft_hexlen(num));
}

/* 
int	main(void)
{
	unsigned int i = 255;
	ft_printhexout(i, 'X');
	return 0;
} */
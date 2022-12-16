/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschaub <mschaub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 13:34:20 by mschaub           #+#    #+#             */
/*   Updated: 2022/12/16 15:46:40 by mschaub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "Libft/libft.h"

int	ft_printnbr(int n)
{
	char	*nbr;
	int		len;

	len = 0;
	nbr = ft_itoa(n);
	len = ft_printstr(nbr);
	free(nbr);
	return (len);
}

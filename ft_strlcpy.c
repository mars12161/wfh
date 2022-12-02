/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschaub <mschaub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 16:44:22 by mschaub           #+#    #+#             */
/*   Updated: 2022/12/02 15:59:47 by mschaub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < (size -1) && src[i])
	{
		dest[i] = src[i++];
	}
	dest[i] = '\0';
	return (i);
}

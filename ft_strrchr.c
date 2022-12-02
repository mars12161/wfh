/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschaub <mschaub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 17:15:05 by mschaub           #+#    #+#             */
/*   Updated: 2022/12/02 19:33:46 by mschaub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	if (s)
	{
		while (s[i])
			i++;
		printf("%i\n", i);
		while (i >= 0)
		{
			if (s[i] == (char)c)
				return ((char *)(s + i));
			i--;
		}
	}
	return (0);
}

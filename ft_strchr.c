/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschaub <mschaub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 15:43:29 by mschaub           #+#    #+#             */
/*   Updated: 2022/12/02 16:19:08 by mschaub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		if (s[i] == c)
			return ((char *)(s + 1));
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)(s + 1));
	return (0);
}

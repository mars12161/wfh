/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschaub <mschaub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 14:09:27 by mschaub           #+#    #+#             */
/*   Updated: 2022/12/10 19:15:37 by mschaub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_word(const char *s, char c)
{
	int		i;
	size_t	words;

	i = 0;
	words = 1;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			words++;
		i++;
	}
	return (words);
}

static void	free_all(char **str)
{
	int	i;

	i = 0;
	while (*str)
	{
		free(str);
		str++;
	}
}

char	**ft_split(const char *s, char c)
{
	char	**ret;
	size_t	len;
	size_t	i;

	if (!s)
		return (NULL);
	i = 0;
	ret = malloc(sizeof(char *) * (ft_count_word(s, c) + 1));
	if (!ret)
		return (NULL);
	while (*s)
	{
		if (*s != c)
		{
			len = 0;
			while (*s && *s != c && ++len)
				++s;
			ret[i++] = ft_substr(s - len, 0, len);
			if (ret[i] == NULL)
				free_all(ret);
		}
		else
			++s;
	}
	ret[i] = 0;
	return (ret);
}

/*
#include <stdio.h>

int	main() {
	char *a = "123abc456cba";
	char c = 'b';

	char **test = ft_split(a, c);
	for (int i = 0; i < ft_count_word(a, c); ++i)
	{
		printf("%s\n", test[i]);
	}
	printf("test");
}
*/

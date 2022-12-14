/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschaub <mschaub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 14:09:27 by mschaub           #+#    #+#             */
/*   Updated: 2022/12/12 12:21:57 by mschaub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_word(const char *s, char c)
{
	size_t	i;
	size_t	words;

	i = 0;
	words = 0;
	if (!s[0])
		return (0);
	while (s[i] && s[i] == c)
		i++;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{	
			words++;
			while (s[i] && s[i] == c)
				i++;
			continue ;
		}	
		i++;
	}
	if (s[i - 1] != c)
		words++;
	return (words);
}

static void	free_all(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}

static char	**ft_my_malloc(const char *s, char c)
{
	char	**ret;

	ret = malloc(sizeof(char *) * (ft_count_word(s, c) + 1));
	if (!ret)
		return (NULL);
	return (ret);
}

char	**ft_split(const char *s, char c)
{
	char	**ret;
	size_t	len;
	size_t	i;

	if (!s)
		return (NULL);
	i = 0;
	ret = ft_my_malloc(s, c);
	while (*s)
	{
		if (*s != c)
		{
			len = 0;
			while (*s && *s != c && ++len)
				++s;
			ret[i] = ft_substr(s - len, 0, len);
			if (!ret[i])
				free_all(ret);
			i++;
		}
		else
			s++;
	}
	ret[i] = 0;
	return (ret);
}

/* 
int	main() {
	char *a = "    42   42";
	char c = ' ';

	char **test = ft_split(a, c);
	for (int i = 0; i < ft_count_word(a, c); ++i)
	{
		printf("%s\n", test[i]);
	}
}
  */

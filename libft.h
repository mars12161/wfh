/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschaub <mschaub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 19:54:54 by mschaub           #+#    #+#             */
/*   Updated: 2022/12/03 15:03:50 by mschaub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <stdlib.h>

int				ft_atoi(char *str);
void			ft_bzero(void *s, size_t n);
void			*calloc(size_t nmemb, size_t size);
int				isalnum(int c);
int				ft_isalpha(int c);
size_t			ft_strlen(const char *str);
size_t			ft_strlcpy(char *dest, const char *src, size_t size);

#endif
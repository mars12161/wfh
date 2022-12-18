/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschaub <mschaub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 12:23:18 by mschaub           #+#    #+#             */
/*   Updated: 2022/12/18 14:51:14 by mschaub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "Libft/libft.h"
#include <stdio.h>

int main(void)
{
    int x = 12;
    char *y = NULL;

    int a = ft_printf("this is a single character: %c", 'X');
    printf(". length of printed string: %i\n", a);
    int b = printf("this is a single character: %c", 'X');
    printf(". length of printed string: %i\n\n", b);

    a = ft_printf("this is a string: %s", "42berlin");
    printf(". length of printed string: %i\n", a);
    b = printf("this is a string: %s", "42berlin");
    printf(". length of printed string: %i\n\n", b);

    a = ft_printf("this is a pointer: %p", &x);
    printf(". length of printed string: %i\n", a);
    b = printf("this is a pointer: %p", &x);
    printf(". length of printed string: %i\n\n", b);

    a = ft_printf("output should be (nil): %p", y);
    printf(". length of printed string: %i\n", a);
    b = printf("output should be (nil): %p", y);
    printf(". length of printed string: %i\n\n", b);

    a = ft_printf("this is an integer: %i", 42);
    printf(". length of printed string: %i\n", a);
    a = ft_printf("this is an integer: %i", -2147483647);
    printf(". length of printed string: %i\n", a);
    b = printf("this is an integer: %i", 42);
    printf(". length of printed string: %i\n", b);
    b = printf("this is an integer: %i", -2147483647);
    printf(". length of printed string: %i\n\n", b);

    a = ft_printf("this is an integer with specifier d: %d", 42);
    printf(". length of printed string: %i\n", a);
    a = ft_printf("this is an integer with specifier d: %d", -2147483647);
    printf(". length of printed string: %i\n", a);
    b = printf("this is an integer with specifier d: %d", 42);
    printf(". length of printed string: %i\n", b);
    b = printf("this is an integer with specifier d: %d", -2147483647);
    printf(". length of printed string: %i\n\n", b);

    a = ft_printf("this is an unsigned integer: %u", 42);
    printf(". length of printed string: %i\n", a);
    a = ft_printf("this is an unsigned integer: %u", -2147483647);
    printf(". length of printed string: %i\n", a);
    b = printf("this is an unsigned integer: %u", 42);
    printf(". length of printed string: %i\n", b);
    b = printf("this is an unsigned integer: %u", -2147483647);
    printf(". length of printed string: %i\n\n", b);

    a = ft_printf("this is 42 as hexadecimal: %x", 42);
    printf(". length of printed string: %i\n", a);
    a = ft_printf("this is int min as hexadecimal: %x", -2147483647);
    printf(". length of printed string: %i\n", a);
    b = printf("this is 42 as hexadecimal: %x", 42);
    printf(". length of printed string: %i\n", b);
    b = printf("this is int min as hexadecimal: %x", -2147483647);
    printf(". length of printed string: %i\n\n", b);

    a = ft_printf("this is 42 as HEXADECIMAL: %X", 42);
    printf(". length of printed string: %i\n", a);
    a = ft_printf("this is int min as HEXADECIMAL: %X", -41073);
    printf(". length of printed string: %i\n", a);
    b = printf("this is 42 as HEXADECIMAL: %X", 42);
    printf(". length of printed string: %i\n", b);
    b = printf("this is int min as HEXADECIMAL: %X", -41073);
    printf(". length of printed string: %i\n\n", b);

    a = ft_printf("this should print out a percent sign: %%");
    printf(". length of printed string: %i\n", a);
    b = printf("this should print out a percent sign: %%");
    printf(". length of printed string: %i\n", b);

}

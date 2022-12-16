/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschaub <mschaub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 14:22:01 by mschaub           #+#    #+#             */
/*   Updated: 2022/12/15 13:06:01 by mschaub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include <assert.h>
    #include <fcntl.h>
	#include "libft.h"
	#include <bsd/string.h>

void	print_string_arr(char **arr)
{
	if(arr == 0)
	{
		printf("Empty arr\n");
		return;
	}
	printf("[");
	while(*arr != 0)
	{
		printf("%s, ", *arr);
		arr++;
	}
	printf("] \n");
}

void	test2(unsigned int i, char *c)
{
	c[i] = 'X';
}

char	test1(unsigned int i, char c)
{
	return c + i;
}

int main(void)
{
    printf("Test ft_isalpha..\n");
    assert(ft_atoi("1234") == atoi("1234"));
    assert(ft_atoi("--5") == atoi("--5"));
    assert(ft_atoi("-ds415") == atoi("-ds415"));
    assert(ft_atoi("+-+test1") == atoi("+-+test1"));
    assert(ft_atoi("\n\t   961") == atoi("\n\t   961"));
    assert(ft_atoi("2147483647") == atoi("2147483647"));
    assert(ft_atoi("-42berlin") == atoi("-42berlin"));
    assert(ft_atoi("42berlin123") == atoi("42berlin123"));
    printf("ft_atoi successful...\n\n");

    printf("Test ft_bzero..\n");
    int i;
	char sr[] = "Hallo";
	ft_bzero(sr, 3);
	i = 0;
    printf("original string: Hallo.\nResetting the first 3 characters with 0s\n");
	while (i < 5)
	{
		printf("%c Mem resetted\n", sr[i]);
		i++;
	}
    printf("ft_bzero successful...\n\n");

    printf("Test ft_isalnum..\n");
    assert(ft_isalnum('a') == 1);
	assert(ft_isalnum('z') == 1);
	assert(ft_isalnum('A') == 1);
	assert(ft_isalnum('9') == 1);
	assert(ft_isalnum('/') == 0);
	assert(ft_isalnum(':') == 0);
	assert(ft_isalnum('a') == 1);
	assert(ft_isalnum('z') == 1);
	assert(ft_isalnum('A') == 1);
	assert(ft_isalnum('Z') == 1);
	assert(ft_isalnum('@') == 0);
	assert(ft_isalnum('[') == 0);
	assert(ft_isalnum('`') == 0);
	assert(ft_isalnum('{') == 0);
    printf("ft_isalnum successful...\n\n");

    //ft_isalpha
    printf("Test ft_isalpha..\n");
    assert(ft_isalpha('a') == 1);
	assert(ft_isalpha('z') == 1);
	assert(ft_isalpha('A') == 1);
	assert(ft_isalpha('9') == 0);
	assert(ft_isalpha('/') == 0);
	assert(ft_isalpha(':') == 0);
	assert(ft_isalpha('a') == 1);
	assert(ft_isalpha('z') == 1);
	assert(ft_isalpha('A') == 1);
	assert(ft_isalpha('Z') == 1);
	assert(ft_isalpha('@') == 0);
	assert(ft_isalpha('[') == 0);
	assert(ft_isalpha('`') == 0);
	assert(ft_isalpha('{') == 0);
    printf("ft_isalpha successful...\n\n");

    //ft_isascii
    printf("Test ft_isascii..\n");
    assert(ft_isascii(-1) == 0);
	assert(ft_isascii(128) == 0);
	assert(ft_isascii(0) == 1);
	assert(ft_isascii(127) == 1);
	assert(ft_isascii('0') == 1);
	assert(ft_isascii('9') == 1);
	assert(ft_isascii('/') == 1);
	assert(ft_isascii(':') == 1);
	assert(ft_isascii('a') == 1);
	assert(ft_isascii('z') == 1);
	assert(ft_isascii('A') == 1);
	assert(ft_isascii('Z') == 1);
	assert(ft_isascii('@') == 1);
	assert(ft_isascii('[') == 1);
	assert(ft_isascii('`') == 1);
	assert(ft_isascii('{') == 1);
    printf("ft_isascii successful...\n\n");

    //ft_isdigit
    printf("Test ft_isdigit..\n");
    assert(ft_isprint(-1)== 0);
	assert(ft_isprint(128)== 0);
	assert(ft_isprint(127)== 0);
	assert(ft_isprint(31)== 0);
	assert(ft_isprint(' ')== 1);
	assert(ft_isprint('9')== 1);
	assert(ft_isprint('/')== 1);
	assert(ft_isprint(':')== 1);
	assert(ft_isprint('a')== 1);
    printf("ft_isdigit successful...\n\n");

    //ft_itoa
    printf("Test ft_itoa..\n");
    assert(strcmp(ft_itoa(0), "0") == 0);
	assert(strcmp(ft_itoa(3), "3") == 0);
	assert(strcmp(ft_itoa(-4), "-4") == 0);
	assert(strcmp(ft_itoa(-458), "-458") == 0);
	assert(strcmp(ft_itoa(465), "465") == 0);
	assert(strcmp(ft_itoa(2147483647), "2147483647") == 0);
	assert(strcmp(ft_itoa(-2147483648), "-2147483648") == 0);
    printf("ft_itoa successful...\n\n");

    //ft_memcmp
    printf("Test ft_memcmp..\n");
    char s3[] = "Hello";
	char s4[] = "Helko";
	assert(ft_memcmp(s3, s4, 4) == 1);
	assert(ft_memcmp(s3, s4, 2) == 0);
    printf("ft_memcmp successful..\n\n");

    //ft_memcpy
    printf("Test ft_memcpy..\n");
    char s1[] = "Hello";
	char s2[] = "xxxxx";
	ft_memcpy(s2, s1, 4);
	assert(strcmp(s2, "Hellx") == 0);
    printf("ft_memcpy successful...\n\n");

    //ft_memmove
    printf("Test ft_memmove..\n");
    char s5[] = "HelloWorld";
	char *s6 = s5 + 5;
	ft_memmove(s5, s6, 2);
	assert(strcmp(s5, "WolloWorld") == 0);
    printf("ft_memmove successful...\n\n");

    //ft_memset
    printf("Test ft_memset..\n");
    char str1[] = "Hallo";
	ft_memset(str1, 97, 3);
	assert(strcmp(str1, "aaalo") == 0);
    printf("ft_memset successful...\n\n");
    
    //ft_putchar_fd
    printf("Test ft_putchar_fd..\n");
    int fd1 = open("f1.txt", O_CREAT | O_RDWR, S_IRWXU);
	ft_putchar_fd('B', fd1);
	close(fd1);
    printf("ft_putchar_fd successful...\n\n");

    //ft_putendl_fd
    printf("Test ft_putendl_fd..\n");
    int fd3 = open("f3.txt", O_CREAT | O_RDWR, S_IRWXU);
	ft_putendl_fd("\nabcdef\n1234\n567\nend!\n", 1);
	close(fd3);
    printf("ft_putendl_fd successful...\n\n");

    //ft_putnbr_fd
    printf("Test ft_putnbr_fd..\n");
    int fd4 = open("f4.txt", O_CREAT | O_RDWR, S_IRWXU);
	ft_putnbr_fd(-2147483648, 1);
	close(fd4);
    printf("ft_putnbr_fd successful..\n\n");
    
    //ft_putstr_fd
    printf("Test ft_putstr_fd..\n");
    int fd2 = open("f2.txt", O_CREAT | O_RDWR, S_IRWXU);
	ft_putstr_fd("42", fd2);
	close(fd2);
    printf("ft_putstr_fd successful..\n\n");

    //ft_split
    printf("Test ft_split..\n");
    print_string_arr(ft_split("XHelloXWorldX", 'X'));
	print_string_arr(ft_split("XHelloXWorld", 'X'));
	print_string_arr(ft_split("HelloXWorldX", 'X'));
	print_string_arr(ft_split("HelloXWorld", 'X'));
	print_string_arr(ft_split("XHello WorldX", 'X'));
	print_string_arr(ft_split("NoDelimiter", 'X'));
	print_string_arr(ft_split("Hello WorldX", 'X'));
	print_string_arr(ft_split("HelloXXWorld", 'X'));
	print_string_arr(ft_split("X", 'X'));
	print_string_arr(ft_split("XX", 'X'));
	print_string_arr(ft_split("XXX", 'X'));
	print_string_arr(ft_split("", 'X'));
	print_string_arr(ft_split(0, 'X')); 
	print_string_arr(ft_split("split  ||this|for|me|||||!|", '|'));
    printf("ft_split successful..\n\n");

    //ft_strchr
    printf("Test ft_strchr..\n");
    char strchr[] = "Hallo";
	assert(ft_strchr(strchr, 'x') == 0);
	assert(strcmp(ft_strchr(strchr, 'l'), "llo") == 0);
    printf("ft_strchr successful..\n\n");

    //ft_strdup
    //printf("Test ft_strchr..\n");

    //ft_striteri
    printf("Test ft_striteri..\n");
    char s20[] = "hello world";
	printf("original before: %s\n", s20);
	ft_striteri(s20, test2);
	printf("original after: %s\n", s20);
    printf("ft_striteri successful...\n\n");

    //ft_strjoin
    printf("Test ft_strjoin..\n");
    char s11[] = "hello ";
	char s12[] = "world";
	char *s13;
	s13 = ft_strjoin(s11, s12);
	assert(strcmp(s13, "hello world") == 0);
    printf("ft_strjoin successful...\n\n");
    
    //ft_strlcat
    printf("Test ft_strlcat..\n");
    char src2[] = "World";
	char buff3[] = "Hello\0AAAAA";
	char buff4[] = "Hello\0AAAAA";
	assert(ft_strlcat(buff3, src2, 11) == strlcat(buff4, src2, 11));
    printf("ft_strlcat successful...\n\n");

    //ft_strlcpy
    printf("Test ft_strlcpy..\n");
    char src1[] = "42berlin";
	char buff1[] = "AAAAAAAAAA";
	char buff2[] = "AAAAAAAAAA";
	assert(ft_strlcpy(buff1, src1, 10) == strlcpy(buff2, src1, 10));
	assert(strcmp(buff1, buff2) == 0);
    printf("ft_strlcpy successful...\n\n");

    //ft_strlen
    printf("Test ft_strlen..\n");
    char strlen1[] = "42berlin";
    char strlen2[] = " this is a string";
    assert(ft_strlen(strlen1) == strlen(strlen1));
    assert(ft_strlen(strlen2) == strlen(strlen2));
    printf("ft_strlen successful...\n\n");

    //ft_strmapi
    printf("Test ft_strlmapi..\n");
    char s19[] = "Hello";
	assert(strcmp(ft_strmapi(s19, test1), "Hfnos") == 0);
    printf("ft_strmapi successful...\n\n");

    //ft_strncmp
    printf("Test ft_strncmp..\n");
    char test1[] = "abc";
    char test2[] = "xyz";
    assert(ft_strncmp(test1, test2, 3) == strncmp(test1, test2, 3));
    char test3[] = "42berlin";
    char test4[] = "42berlin";
    assert(ft_strncmp(test3, test4, 8) == strncmp(test3, test4, 8));
    printf("ft_strncmp successful...\n\n");

	//ft_strnstr
	printf("Test ft_strnstr..\n");
	char big[] = "helloworld";
	char little1[] = "low";
	char little2[] = "xx";
	char little3[] = "helloworldX";

	assert(strcmp(ft_strnstr(big, little1, 10), "loworld") == 0);
	assert(ft_strnstr(big, little2, 10) == 0);
	assert(ft_strnstr(big, little3, 10) == 0);
	printf("ft_strnstr successful...\n\n");

	//ft_strrchr
	printf("Test ft_strrchr..\n");
	char strrchr[] = "Hallo";
	assert(ft_strrchr(strchr, 'x') == 0);
	assert(strcmp(ft_strrchr(strrchr, 'l'), "lo") == 0);
	printf("ft_strrchr successful...\n\n");

	//ft_strtrim
	printf("Test ft_strtrim..\n");
	char trim1[] = "hello world";
	char trim2[] = "tehello world";
	char trim3[] = "hello worldtev";
	char trim4[] = "thello worldev";
	char trim5[] = "tev";
	assert(strcmp(ft_strtrim(trim1, "tev"), "hello world") == 0);
	assert(strcmp(ft_strtrim(trim2, "tev"), "hello world") == 0);
	assert(strcmp(ft_strtrim(trim3, "tev"), "hello world") == 0);
	assert(strcmp(ft_strtrim(trim4, "tev"), "hello world") == 0);
	assert(strcmp(ft_strtrim(trim5, "tev"), "") == 0);
	printf("ft_strtrim successful...\n\n");

	//ft_substr
	printf("Test ft_substr..\n");
	char s7[] = "hello world";
	char *s8;
	char *s9;
	char *s10;
	s8 = ft_substr(s7, 4, 100);
	s9 = ft_substr(s7, 0, 2);
	s10 = ft_substr(s7, 100, 8);
	assert(strcmp(s8, "o world") == 0);
	assert(strcmp(s9, "he") == 0);
	assert(strcmp(s10, "\0") == 0);
	printf("ft_substr successful...\n\n");

	//ft_tolower
	printf("Test ft_tolower..\n");
	assert(ft_tolower(' ') == ' ');
	assert(ft_tolower('9') == '9');
	assert(ft_tolower('/') == '/');
	assert(ft_tolower(':') == ':');
	assert(ft_tolower('a') == 'a'); 
	assert(ft_tolower('A') == 'a');
	assert(ft_tolower('Z') == 'z');
	assert(ft_tolower('T') == 't');
	printf("ft_tolower successful...\n\n");

	//ft_toupper
	printf("Test ft_toupper");
	assert(ft_toupper(' ') == ' ');
	assert(ft_toupper('9') == '9');
	assert(ft_toupper('/') == '/');
	assert(ft_toupper(':') == ':');
	assert(ft_toupper('A') == 'A'); 
	assert(ft_toupper('a') == 'A');
	assert(ft_toupper('z') == 'Z');
	assert(ft_toupper('t') == 'T');
	printf("ft_toupper successful...\n\n");

	printf("Passed all tests\n\n");
	
}
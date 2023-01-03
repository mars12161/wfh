/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschaub <mschaub@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 15:06:25 by mschaub           #+#    #+#             */
/*   Updated: 2023/01/02 17:47:21 by mschaub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/* char	*get_next_line(int fd)
{
	if (fd < 0)
		return (NULL);
	static char	*line;
	//text = read(fd, )
	//if !text
	//	return (NULL);
	line = ft_read_line(text);

	return (line);
} */



#include <stdio.h>

int main() {
    // Open the file in read-only mode
    int fd = open("test.txt", O_RDONLY);

    // Check if the file was successfully opened
    if (fd < 0) {
        printf("Error opening file!\n");
        return 1;
    }

    // Read the contents of the file
    char buffer[1024];
    int bytes_read;
    while ((bytes_read = read(fd, buffer, 1024)) > 0) {
        char *test = ft_read_line(buffer);
        printf("%s", test);
    }

    // Check if there was an error reading the file
    if (bytes_read < 0) {
        printf("Error reading file!\n");
        return 1;
    }

    // Close the file
    close(fd);

    return 0;
}
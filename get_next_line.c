/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyilmaz <zyilmaz@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-17 09:13:34 by zyilmaz           #+#    #+#             */
/*   Updated: 2024-11-17 09:13:34 by zyilmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *ft_bufread(int fd, char *str)
{
	char *buffer;
	int i;

	buffer = malloc(BUFFER_SIZE + 1);
	if (!buffer)
		return (NULL);
	i = 1;
	while (ft_strchr(str, '\n') == 0 && i != 0)
	{
		i = read(fd, buffer, BUFFER_SIZE);
		if (i == -1)
		{
			free(buffer);
			free(str);
		}
		buffer[i] = '\0';
		str = ft_strjoin(str, buffer);
	}
	free(buffer);
	return (str);
}

char *get_next_line(int fd)
{
	static char	*str;
	char	*ptr;

	if (fd < 0 && BUFFER_SIZE < 1)
		return (NULL);
	str = ft_bufread(fd, str);
	if (!str)
		return (NULL);
	ptr = line_str(str);//newline a kadar olan kısmı yeni bi string olarak
	str = ft_new(str);
}
		
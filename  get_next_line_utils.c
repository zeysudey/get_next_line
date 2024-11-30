/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    get_next_line_utils.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyilmaz <zyilmaz@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-17 09:13:29 by zyilmaz           #+#    #+#             */
/*   Updated: 2024-11-17 09:13:29 by zyilmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strchr(char *str, int c)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] == (char)c)
			return ((char *)&str[i]);
		i++;
	}
	return (0);
}

int	ft_strlen(const char * str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		x++;
	}
	return (x);
}
char	*ft_strjoin(char *str, char *buffer)
{
	size_t	c;
	size_t	i;
	char	*res;

	if (!str)//neden buffer öncesine birleştirmek için mi
	{
		str = malloc(1);
		str[0] = '\0';
	}
	c = 0;
	i = 0;
	res = malloc(ft_strlen(str) + ft_strlen(buffer) + 1);
	if (res == NULL)
		return (NULL);
	while (str[c])
	{
		res[c] = str[c];
		c++;
	}
	while (buffer[i])
		res[c++] = buffer[i++];
	res[ft_strlen(str) + ft_strlen(buffer)] = '\0';
	free(str);
	return (res);
}
char	*line_str(char *str)
{
    char    *s;
    size_t i;

    i = 0;
    if (!str[i])
        return (NULL);
    while (str[i] && str[i] != '\n')
        i++;
    s = malloc(i + 2);
    if (!s)
        return (NULL);
        i = 0;
	while (str[i] && str[i] != '\n')
	{
		s[i] = str[i];
		i++;
	}
	if (s[i] == '\n')
	{
		s[i] = str[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}
char	*ft_new(char *str)
{
    char    *res;
    int i;
    int j;

    i = 0;
    j = 0;
    while (str[i] && str[i] != '\n')
        i++;
    if (!str[i])
    {
        free(str);
        return (NULL);
    }
    res = malloc((ft_strlen(str) - i) + 1);
    if(!res)
        return (NULL);
    i++;
    while (str[i])
        res[j++] = str[i++];
    res[j] = '\0';
    free(str);
    return (res);
}
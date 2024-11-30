/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyilmaz <zyilmaz@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-17 09:13:39 by zyilmaz           #+#    #+#             */
/*   Updated: 2024-11-17 09:13:39 by zyilmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef get_next_line_h
# define get_next_line_h

#include <stdlib.h>
#include <unistd.h>
#ifndef BUFFER_SIZE
# define BUFFER_SIZE 4

#endif
char	*ft_strchr(const char *s, int c);
char *ft_bufread(int fd, char *str);
char *get_next_line(int fd);
int	ft_strlen(const char * str);
char	*ft_strjoin(char *str, char *buffer);
char	*line_str(char *str);
char	*ft_new(char *str);
#endif

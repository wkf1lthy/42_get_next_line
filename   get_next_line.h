/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*     get_next_line.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouchel <hbouchel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 19:58:53 by hbouchel          #+#    #+#             */
/*   Updated: 2023/12/05 19:59:27 by hbouchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
# define BUFFER_SIZE 1
# endif

char		*get_next_line(int fd);
char		*strjoin(const char *s1, const char *s2);
char		*strdup(const char *s);
size_t		strlen(const char *s);
char		*substr(const char *str, size_t start, size_t length);
static char	*strchr(const char *s, int c);
static char	*_fill_line_buffer(int fd, char *left_c, char *buffer);
static char	*set_line(char *line_buffer);

#endif

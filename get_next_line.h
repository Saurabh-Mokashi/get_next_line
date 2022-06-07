/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 17:41:31 by smokashi          #+#    #+#             */
/*   Updated: 2022/06/07 17:13:14 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <string.h>
# include <stddef.h>
# include <stdint.h>

unsigned int	ft_strlen(const char *str);
void			*ft_memcpy(void *dest, const void *src, unsigned int n);
char			*ft_strdup(const char *s);
char			*ft_strjoin(char *s1, char *s2);
char			*ft_substr(char const *s, unsigned int start, unsigned int len);
char			*get_next_line(int fd);
void			*ft_calloc(size_t nitems, size_t size);
void			ft_bzero(void *s, int n);
void			*ft_memset(void *str, int ch, int freq);
char            *ft_strchr(const char *s, int c);
void            *ft_calloc(size_t nitems, size_t size);


#endif
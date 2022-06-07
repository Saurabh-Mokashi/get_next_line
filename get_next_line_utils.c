/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 17:41:22 by smokashi          #+#    #+#             */
/*   Updated: 2022/06/07 13:54:20 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stddef.h>
// #include <stdlib.h>

// // unsigned int	ft_strlen(const char *str);
// // void			*ft_memcpy(void *dest, const void *src, unsigned int n);
// // char			*ft_strdup(const char *s);
// // char			*ft_strjoin(char const *s1, char const *s2);
// // char			*ft_substr(char const *s, unsigned int start, unsigned int len);

# include "get_next_line.h"

char	*ft_strchr(const char *s, int c)
{
	//printf("segno\n");
	int			i;
	const char	*ptr;

	i = 0;
	ptr = s;
	if(!s)
	{
	//	printf("we return NUll\n");
		return (NULL);
	}
	while (s[i])
	{
	//	printf("i val is %d\n",i);
		if (s[i] == (char)c)
		{
			return ((char *)ptr);
		}
		i++;
		ptr++;
	}
	//printf("after while\n");
	if (*ptr == c)
		return ((char *)ptr);
	return (NULL);
}

void	*ft_memset(void *str, int ch, int freq)
{
	unsigned char	*p;

	p = str;
	while (freq > 0)
	{
		*p = ch;
		p++;
		freq--;
	}
	return (str);
}

void	ft_bzero(void *s, int n)
{
	ft_memset(s, '\0', n);
}

void	*ft_calloc(size_t nitems, size_t size)
{
	char	*ptr;

	if ((nitems >= SIZE_MAX || size >= SIZE_MAX) && (nitems > 1 || size > 1))
		return (NULL);
	ptr = malloc(nitems * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, nitems * size);
	return ((void *)ptr);
}

unsigned int	ft_strlen(const char *str)
{
	unsigned int	i;
	//printf("hello world\n");

	i = 0;
	if(!str)
	{
	//	printf("return ning NULL\n");
		return (0);
	}
	while (str[i] != '\0')
	{
		i++;
	}
	//printf("\nval of i is %d",i);
	return (i);
}

void	*ft_memcpy(void *dest, const void *src, unsigned int n)
{
	char	*d;
	char	*s;

	d = (char *)dest;
	s = (char *)src;
	if (!s && !d)
		return (dest);
	while (n > 0)
	{
		*d = *s;
		d++;
		s++;
		n--;
	}
	return ((void *)dest);
}

char	*ft_strdup(const char *s)
{
	char	*s1;
	int		i;

	i = ft_strlen(s);
	s1 = malloc(i + 1);
	if (!s1)
		return (NULL);
	ft_memcpy(s1, s, i);
	s1[i] = '\0';
	return (s1);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		i;
	int		l;
	int		r;
	int		len;

	l = 0;
	r = 0;
	i = 0;
	//printf("in strjoin now\n");
	// if (!s1 || !s2)
	// {
	// 	printf("return NULL\n");
	// 	return (NULL);
	// }
	//printf("len of s1 is %d\n",ft_strlen(s1));
	//printf("and of s2 is %d\n",ft_strlen(s2));
	len = ft_strlen(s1) + ft_strlen(s2);
	//printf("malloc below\n");
	str = malloc(len + 1);
	//printf("len+1 val is%d\n",len+1);
	if (!str)
	{
	//	printf("return null\n");
		return (NULL);
	}
	//printf("\n\ns1 val is %s\n\n",s1);
	while (s1)
	{
		//printf("str[i]val is %c\n",str[i]);
		//printf("s1[l]val is %c\n",s1[l]);
		str[i++] = s1[l++];
	}
	while (s2[r] != '\0')
	{
		//printf("str[i]val is %c\n",str[i]);
		//printf("s2[r]val is %c\n",s2[r]);
		str[i++] = s2[r++];
	}
	str[i] = '\0';
	printf("\n\nthe joined string is %s\n\n",str);
	return (str);
}

char	*ft_substr(char const *s, unsigned int start, unsigned int len)
{
	char			*str;
	unsigned int	i;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
	{
		str = ft_strdup ("");
		return (str);
	}
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

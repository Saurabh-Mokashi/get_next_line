/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smokashi <smokashi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 17:41:28 by smokashi          #+#    #+#             */
/*   Updated: 2022/06/06 17:56:35 by smokashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*buffalloc(int fd, char *s)
{
	char	*ret;
	int		c;

	printf("here\n");
	ret = ft_calloc (BUFFER_SIZE + 1, (sizeof(char)));
	if (!ret)
		return (NULL);
	while (!ft_strchr(s, '\n'))
	{
		c = read(fd, ret, BUFFER_SIZE);
		if (c < 0)
		{
			free (ret);
			return (NULL);
		}
		ret[c] = '\0';
		s = ft_strjoin(s, ret);
	}
	free (ret);
	return (s);
}

char	*parser(char *s)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != '\n')
	{
		printf("%c", s[i]);
		i++;
	}
	return (ft_substr(s, 0, i + 1));
}
char *getword(char *s)
{
	int i;
	char *t;

	i = 0;
	while(s[i]!='\0' && s[i]!='\n')
		i++;
	t = ft_calloc(i, sizeof(char));
	
}

char	*get_next_line(int fd)
{
	static char	*buf;
	char		*ret;
	int			i;
	unsigned int c;

	if (fd < 0)
		return (NULL);
	//printf("here success\n");
	//printf("buffer size is %d\n", BUFFER_SIZE);
	//ret = ft_calloc (BUFFER_SIZE + 1, (sizeof(char)));
	//printf("here success\n");
	//c = read(fd, ret, BUFFER_SIZE);
	//printf("here success\n");
	//ret[c] = '\0';
	//printf("c val is %u\n", c);
	//while (ret[i])
	//{
	//	printf("%c\n", ret[i]);
	//	i++;
	//}
	//i = 0;
	buf = buffalloc(fd, buf);
	if (!buf)
		return (NULL);
	ret = getword(buf);
	// printf("len is %d\n", ft_strlen(buf));
	// while (buf[i])
	// {
	// 	printf("%c", buf[i]);
	// 	i++;
	// }
	// ret = parser(buf);
	// printf("\nret is %s\n",ret);
	return (ret);
}

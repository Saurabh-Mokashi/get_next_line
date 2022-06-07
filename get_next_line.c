/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 17:41:28 by smokashi          #+#    #+#             */
/*   Updated: 2022/06/07 14:13:40 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*buffalloc(int fd, char *s)
{
	char	*ret;
	int		c;

	//printf("here\n");
	ret = ft_calloc (BUFFER_SIZE + 1, (sizeof(char)));
	//printf("buffer size=%d\n",BUFFER_SIZE);
	//printf("no\n");
	while (!ft_strchr(s, '\n'))
	{
		//printf("here once and\n");
		c = read(fd, ret, BUFFER_SIZE);
		ret[c]='\0';
		//printf("string is now %s\n",ret);
		//printf("bytes read is %d\n",c);
		if (c < 0)
		{
			free (ret);
			return (NULL);
		}
		s = ft_strjoin(s, ret);
		//printf("s vals are now %s\n",s);
		//printf("ft_strchr(s,) val is %s",ft_strchr(s, '\n'));
	}
	//printf("out if while loop\n");
	free (ret);
	return (s);
}

// char	*parser(char *s)
// {
// 	int	i;

// 	i = 0;
// 	while (s[i] && s[i] != '\n')
// 	{
// 		printf("%c", s[i]);
// 		i++;
// 	}
// 	return (ft_substr(s, 0, i + 1));
// }
char *getword(char *s)
{
	int i;
	char *t;

	i = 0;
	while(s[i]!='\0' && s[i]!='\n')
		i++;
	printf("\nival is %d",i);
	t = ft_calloc(i + 2, sizeof(char));
	i = 0;
	while(s[i]!='\0' && s[i]!='\n')
	{
		t[i] = s[i];
		i++;
	}
	if(s[i] == '\n')
		t[i++] = s[i++];
	t[i]='\0';
	printf("\nt string is %s",t);
	return t;
}

char *buffrearrange(char *s)
{
	int i;

	i = 0;
	while(s[i] && s[i]!= '\n')
		i++;
	//printf("\n\nbuffer is %s\n",ft_substr(s,i+1,ft_strlen(s)));
	return (ft_substr(s,i+1,ft_strlen(s)));
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
	printf("\n\nret string is %s\n\n",ret);
	buf = buffrearrange(buf);
	printf("len is %d\n", ft_strlen(buf));
	printf("\n\nbuffer is %s\n\n",buf);
	// ret = parser(buf);
	// printf("\nret is %s\n",ret);
	return (ret);
}

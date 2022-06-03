/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smokashi <smokashi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 17:41:28 by smokashi          #+#    #+#             */
/*   Updated: 2022/06/03 18:41:07 by smokashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*buffalloc(int fd, char *s)
{
	char	*ret;

	ret = malloc (BUFFER_SIZE * (sizeof(char)));
	read(fd, ret, sz);
	ret[sz] = NULL;
	return (ret);
}

char	*get_next_line(int fd)
{
	static char	*buf;
	char		*ret;

	if (fd < 0)
		return (NULL);
	buf = buffalloc(fd, buf);

	return (ret);
}

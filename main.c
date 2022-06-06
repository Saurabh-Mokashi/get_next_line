/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smokashi <smokashi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 18:00:31 by smokashi          #+#    #+#             */
/*   Updated: 2022/06/06 14:51:12 by smokashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
// int main(void)
// {
// 	printf("the buffer size is %d",BUFFER_SIZE);
// 	char *c = (char *) malloc(7 * sizeof(char));
// 	int fd=open("temp.txt",O_RDWR | O_CREAT);
// 	int sz = read(fd,c,6);
// 	//c[18]='\0';
// 	printf("%d is the amount of bytes read:\n",sz);
// 	printf("%s is the string of bytes read:\n",c);
// 	return (0);
// }

int	main(void)
{
	int	fd;

	fd = open("temp.txt", O_RDONLY);
	printf("%s", get_next_line(fd));
	return (0);
}

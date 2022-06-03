/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smokashi <smokashi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 18:00:31 by smokashi          #+#    #+#             */
/*   Updated: 2022/06/03 16:08:04 by smokashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

int main(void)
{
	printf("the buffer size is %d",BUFFER_SIZE);
	char *c = (char *) malloc(7 * sizeof(char));
	int fd=open("temp.txt",O_RDWR | O_CREAT);
	int sz = read(fd,c,6);
	//c[18]='\0';
	printf("%d is the amount of bytes read:\n",sz);
	printf("%s is the string of bytes read:\n",c);
	return (0);
}

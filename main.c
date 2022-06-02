/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smokashi <smokashi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 18:00:31 by smokashi          #+#    #+#             */
/*   Updated: 2022/06/02 19:40:39 by smokashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

int main(void)
{
	char *c = (char *) calloc(100, sizeof(char));
	int fd=open("temp.txt",O_RDWR | O_CREAT);
	int sz = read(fd,c,9);
	c[10]='\0';
	printf("%d is the amount of bytes read:\n",sz);
	printf("%s is the string of bytes read:\n",c);
	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test-ex00.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsubel <jsubel@student.42wolfsburg.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 14:58:36 by jsubel            #+#    #+#             */
/*   Updated: 2021/10/11 18:06:49 by jsubel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>
#include<string.h>	// for strcpy

char	*ft_strcpy(char *dest, char *src);
void	ft_putstr(char *str);

int	main(void)
{
	char source[81] = "The Answer to the Ultimate Question of Life, the Universe, and Everything is 42.";
	char destination[90]= "Hey\0";
	char *source_ptr;
	char *destination_ptr;

	source_ptr = &source[0];
	destination_ptr = &destination[0];

	printf("Source:\n");
	printf("\nDestination:\n");
	printf("\ncall function here\n");
	ft_strcpy(destination_ptr, source_ptr);
	printf("Source:\n %s", source);
	printf("\nDestination: %s\n", destination);
	printf("\n###What the output is supposed to be###\n");
	printf("Destination:\n");
}

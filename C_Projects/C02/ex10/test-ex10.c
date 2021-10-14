/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test-ex10.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsubel <jsubel@student.42wolfsburg.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 08:11:39 by jsubel            #+#    #+#             */
/*   Updated: 2021/10/09 17:25:18 by jsubel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>
#include<string.h>	// for strlcpy


unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{
	char destination[80] = "The Answer to the Ultimate Question of Life, the Universe, and Everything is 42.";
	char source[44]= "Hello, its me again! Great to see you again";
	char *source_ptr;
	char *destination_ptr;
	unsigned int result;
	
	source_ptr = &source[0];
	destination_ptr = &destination[0];
	printf("Source-Pointer: %p\nDestination-Pointer: %p\n", source_ptr, destination_ptr); // Difference between the pointers: 0x20 (32 in hexadecimal), so if destination length is 32 or less, it still displays source string afterwards
	printf("Source:\n%s", source_ptr);
	printf("\nDestination:\n%s", destination_ptr);
	printf("\ncall function here\n");
	result = ft_strlcpy(destination_ptr, source_ptr, sizeof(destination));
	printf("Source:\n%s", source_ptr);
	printf("\nDestination:\n%s\nTried to create string with length %u (length of source)", destination_ptr, result);
/* 	printf("\n###What the output is supposed to be###\n");
	result = strlcpy(destination_ptr, source_ptr, sizeof(destination));
	printf("Destination:\n%sTotal length of created string: %u", destination, result); */
	printf("\n");
}

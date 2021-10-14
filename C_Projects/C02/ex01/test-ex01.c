/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test-ex01.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsubel <jsubel@student.42wolfsburg.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 08:40:06 by jsubel            #+#    #+#             */
/*   Updated: 2021/10/13 11:00:52 by jsubel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>
#include<string.h>	// for strncpy

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char	source[106] = "The Answer to the Ultimate Question of Life, the Universe, and Everything is 42. Skrrrrrra pa ka ka ka ka";
	char	destination[120]= "Hey";
	char	*result;
	int		src_len;
	int		dest_len;
	int		size_of_cpy;
	
	dest_len = strlen(destination);
	src_len = strlen(source);
	size_of_cpy = 50;
	printf("\nSource:\n%s\nLength: %d", source, src_len);
	printf("\nDestination:\n%s\nLength: %i", destination, dest_len);
	printf("\ncall function here\n");
	ft_strncpy(destination, source, size_of_cpy);
	dest_len = strlen(destination);
	src_len = strlen(source);
	printf("\n####\nSource:\n%s\nLength: %d", source, src_len);
	printf("\nDestination:\n%s\nLength: %d", destination, dest_len);
	printf("\n###What the output is supposed to be###\n");
	result = strncpy(destination, source, size_of_cpy);
	printf("Destination:\n%s\n", result);
}

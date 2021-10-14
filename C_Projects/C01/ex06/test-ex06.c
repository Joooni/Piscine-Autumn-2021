/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test-ex06.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsubel <jsubel@student.42wolfsburg.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 17:22:20 by jsubel            #+#    #+#             */
/*   Updated: 2021/10/08 11:06:57 by jsubel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int	ft_strlen(char *str);

int	main(void)
{
	char	string1[81]= "The Answer to the Ultimate Question of Life, the Universe, and Everything is 42.";
	char	*pointer1;
	char	string2[0]= "";
	char	*pointer2;
	char	string3[]= ":)";
	char	*pointer3;
	
	pointer1 = &string1[0];
	pointer2 = &string2[0];
	pointer3 = &string3[0];
	printf("%s", string1);
	printf("\nString length 1: %d\n", ft_strlen(pointer1));
	printf("%s", string2);
	printf("\nString length 2: %d\n", ft_strlen(pointer2));	
	printf("%s", string3);
	printf("\nString length 3: %d\n", ft_strlen(pointer3));		
}
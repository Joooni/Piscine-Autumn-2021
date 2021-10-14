/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test-ex01.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsubel <jsubel@student.42wolfsburg.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 16:36:30 by jsubel            #+#    #+#             */
/*   Updated: 2021/10/13 12:03:09 by jsubel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);


int	main(void)
{
	char test_ref[81] = "The Answer to the Ultimate Question of Life, the Universe, and Everything is 42.";
	char test1[81] = "";
	char test2[81] = "The Answer to the Ultimate Question of Life, the Universe, and Everything is 42. ";
	int n;
	
	n = 5;
	printf("Result Test 1: %d", ft_strncmp(test_ref, test1, n));
	printf("\nWhat Result should be: %d", strncmp(test_ref, test1, n));
	printf("\nResult Test 2: %d", ft_strncmp(test_ref, test2, n));
	printf("\nWhat Result should be: %d\n", strncmp(test_ref, test2, n));
}

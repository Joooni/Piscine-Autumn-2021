/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test-ex00.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsubel <jsubel@student.42wolfsburg.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 12:57:34 by jsubel            #+#    #+#             */
/*   Updated: 2021/10/13 12:02:45 by jsubel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char test_ref[81] = "The Answer to the Ultimate Question of Life, the Universe, and Everything is 42.";
	char test1[81] = "";
	char test2[81] = "The Answer to the Ultimate Question of Life, the Universe, and Everything is 42";

	
	printf("Result Test 1: %d", ft_strcmp(test_ref, test1));
	printf("\nWhat Result should be: %d", strcmp(test_ref, test1));
	printf("\nResult Test 2: %d", ft_strcmp(test_ref, test2));
	printf("\nWhat Result should be: %d\n", strcmp(test_ref, test2));
}
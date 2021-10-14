/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test-ex05.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsubel <jsubel@student.42wolfsburg.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 19:06:40 by jsubel            #+#    #+#             */
/*   Updated: 2021/10/08 10:37:10 by jsubel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_str_is_uppercase(char *str);

int	main(void)
{
	char test0[35]="SUPERCALIFRAGILISTICEXPIALIDOCIOUS";
	char test1[81]="The Answer to the Ultimate Question of Life, the Universe, and Everything is 42.";
	char testempty[0];
	int result;

	result = 15;
	result = ft_str_is_uppercase(test0);
	printf("First String: should return 1\n%s\nResult: %d\n",test0, result);
	result = ft_str_is_uppercase(test1);
	printf("Second String: should return 0\n%s\nResult: %d\n",test1, result);
	result = ft_str_is_uppercase(testempty);
	printf("Empty String: should return 1\n%s\nResult: %d\n", testempty, result);
}

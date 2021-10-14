/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test-ex02.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsubel <jsubel@student.42wolfsburg.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 09:21:33 by jsubel            #+#    #+#             */
/*   Updated: 2021/10/08 10:33:01 by jsubel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_str_is_alpha(char *str);

int	main(void)
{
	char test0[35]="SAAAAAAAA";
	char test1[81]="The Answer to the Ultimate Question of Life, the Universe, and Everything is 42.";
	char testempty[0];

	int result;

	result = 15;
	result = ft_str_is_alpha(test0);
	printf("First String: should return 1\n%s\nResult: %d\n",test0, result);
	result = ft_str_is_alpha(test1);
	printf("Second String: should return 0\n%s\nResult: %d\n",test1, result);
	result = ft_str_is_alpha(testempty);
	printf("Empty String: should return 1\n%s\nResult: %d\n", testempty, result);
}

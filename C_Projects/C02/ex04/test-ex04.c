/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test-ex04.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsubel <jsubel@student.42wolfsburg.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 18:58:33 by jsubel            #+#    #+#             */
/*   Updated: 2021/10/08 10:37:23 by jsubel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_str_is_lowercase(char *str);

int	main(void)
{
	char test0[35]="supercalifragilisticexpialidocious";
	char test1[81]="The Answer to the Ultimate Question of Life, the Universe, and Everything is 42.";
	char testempty[0];
	int result;

	result = 15;
	result = ft_str_is_lowercase(test0);
	printf("First String: should return 1\n%s\nResult: %d\n",test0, result);
	result = ft_str_is_lowercase(test1);
	printf("Second String: should return 0\n%s\nResult: %d\n",test1, result);
	result = ft_str_is_lowercase(testempty);
	printf("Empty String: should return 1\n%s\nResult: %d\n", testempty, result);
}

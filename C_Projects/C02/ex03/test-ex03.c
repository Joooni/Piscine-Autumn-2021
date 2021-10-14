/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test-ex03.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsubel <jsubel@student.42wolfsburg.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 18:50:02 by jsubel            #+#    #+#             */
/*   Updated: 2021/10/08 10:36:41 by jsubel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_str_is_numeric(char *str);

int	main(void)
{
	char test0[35]="Supercalifragilisticexpialidocious";
	char test1[81]="4224424242535235";
	char testempty[0];

	int result;

	result = 15;
	result = ft_str_is_numeric(test0);
	printf("First String: should return 0\n%s\nResult: %d\n",test0, result);
	result = ft_str_is_numeric(test1);
	printf("Second String: should return 1\n%s\nResult: %d\n",test1, result);
	result = ft_str_is_numeric(testempty);
	printf("Empty String: should return 1\n%s\nResult: %d\n", testempty, result);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test-ex02.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsubel <jsubel@student.42wolfsburg.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 11:07:35 by jsubel            #+#    #+#             */
/*   Updated: 2021/10/05 07:58:26 by jsubel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int *test1;
	int *test2;
	int test1int;
	int test2int;
	
	test1 = &test1int;
	test2 = &test2int;
	test1int = 24;
	test2int = 42;
	printf("Before:\n");
	printf("%p - %d\n", test1, test1int);
	printf("%p - %d\n", test2, test2int);
	ft_swap(test1, test2);
	printf("After:\n");
	printf("%p - %d\n", test1, test1int);
	printf("%p - %d\n", test2, test2int);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsubel <jsubel@student.42wolfsburg.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 13:30:34 by jsubel            #+#    #+#             */
/*   Updated: 2021/10/14 13:45:43 by jsubel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index > 0 && index <= 2)
		return (1);
	
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));	
}
/* 
#include <stdio.h>

int	main(void)
{
 	printf("\n===ex03===");
	 printf("\nFibonacci at -4:(-1) %d",ft_fibonacci(-4));
	printf("\nFibonacci at 0:(0) %d",ft_fibonacci(0));
	printf("\nFibonacci at 1:(1) %d",ft_fibonacci(1));
	printf("\nFibonacci at 2:(1) %d",ft_fibonacci(2));
	printf("\nFibonacci at 3:(2) %d",ft_fibonacci(3));
	printf("\nFibonacci at 4:(3) %d",ft_fibonacci(4));
	printf("\nFibonacci at 5:(5) %d",ft_fibonacci(5));
	printf("\nFibonacci at 6:(8) %d",ft_fibonacci(6));
	printf("\nFibonacci at 7:(13) %d",ft_fibonacci(7));
	printf("\nFibonacci at 8:(21) %d",ft_fibonacci(8));
	printf("\nFibonacci at 9:(34) %d",ft_fibonacci(9));
	printf("\nFibonacci at 10:(55) %d",ft_fibonacci(10));
	printf("\nFibonacci at 11:(89) %d",ft_fibonacci(11));
	printf("\nFibonacci at 12:(144) %d",ft_fibonacci(12));
	printf("\nFibonacci at 40:(102334155) %d",ft_fibonacci(40));
	printf("\n");
} */
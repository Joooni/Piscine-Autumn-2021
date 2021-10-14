/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsubel <jsubel@student.42wolfsburg.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 09:48:25 by jsubel            #+#    #+#             */
/*   Updated: 2021/10/14 10:19:59 by jsubel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int i;
	int	result;
	
	i = 1;
	result = 1;
	while (i <= nb)
		result *= i++;
	return (result);
}
/* 
#include <stdio.h>

int	main(void)
{
	printf("\n===ex00===");
	printf("\nFactorial of 4:(24) %d", ft_iterative_factorial(4));
	printf("\nFactorial of 5:(120) %d", ft_iterative_factorial(5));
	printf("\nFactorial of 6:(720) %d", ft_iterative_factorial(6));
	printf("\nFactorial of 7:(5040) %d", ft_iterative_factorial(7));
	printf("\nFactorial of 10:(3628800) %d", ft_iterative_factorial(10));
	printf("\nFactorial of 12:(479001600) %d\n", ft_iterative_factorial(12));
} */

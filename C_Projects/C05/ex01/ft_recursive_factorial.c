/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsubel <jsubel@student.42wolfsburg.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 10:10:23 by jsubel            #+#    #+#             */
/*   Updated: 2021/10/14 10:28:54 by jsubel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}

#include <stdio.h>

int	main(void)
{
	printf("\n===ex01===");
	printf("\nFactorial of 4:(24) %d", ft_recursive_factorial(4));
	printf("\nFactorial of 5:(120) %d", ft_recursive_factorial(5));
	printf("\nFactorial of 6:(720) %d", ft_recursive_factorial(6));
	printf("\nFactorial of 7:(5040) %d", ft_recursive_factorial(7));
	printf("\nFactorial of 10:(3628800) %d", ft_recursive_factorial(10));
	printf("\nFactorial of 12:(479001600) %d\n", ft_recursive_factorial(12));
}

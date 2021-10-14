/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsubel <jsubel@student.42wolfsburg.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 13:17:35 by jsubel            #+#    #+#             */
/*   Updated: 2021/10/14 13:29:20 by jsubel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}
/* 
#include <stdio.h>

int	main(void)
{
	printf("\n===ex03===");
	printf("\n0 to the power of 0:(1) %d", ft_recursive_power(0, 0));
	printf("\n12 to the power of 0:(1) %d", ft_recursive_power(12, 0));
	printf("\n1 to the power of 10:(1) %d", ft_recursive_power(1, 10));
	printf("\n2 to the power of 8:(256) %d", ft_recursive_power(2,8));
	printf("\n3 to the power of 4:(81) %d", ft_recursive_power(3,4));
	printf("\n-3 to the power of 4:(81) %d", ft_recursive_power(-3,4));
	printf("\n10 to the power of 5:(100000) %d", ft_recursive_power(10,5));
	printf("\n16 to the power of 5:(1048576) %d", ft_recursive_power(16,5));
	printf("\n-16 to the power of 5:(-1048576) %d\n", ft_recursive_power(-16,5));
} */
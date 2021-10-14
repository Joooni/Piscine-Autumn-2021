/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsubel <jsubel@student.42wolfsburg.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 16:22:14 by jsubel            #+#    #+#             */
/*   Updated: 2021/10/14 16:29:03 by jsubel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i < nb)
	{
		if (nb % i == 0)
			return 0;
		i++;
	}
	return (1);
}

#include <stdio.h>

int	main(void)
{
	printf("\n===ex06===");
	printf("\nis 3 a prime? %d", ft_is_prime(3));
	printf("\nis -16 a prime? %d", ft_is_prime(-16));
	printf("\nis 75 a prime? %d", ft_is_prime(75));
	printf("\nis 13 a prime? %d", ft_is_prime(13));
	printf("\nis 4762177 a prime? %d", ft_is_prime(4762177));
	printf("\n");
	return (0);
}
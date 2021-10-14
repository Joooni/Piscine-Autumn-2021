/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsubel <jsubel@student.42wolfsburg.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 16:30:16 by jsubel            #+#    #+#             */
/*   Updated: 2021/10/14 17:07:05 by jsubel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb);

int	ft_find_next_prime(int nb)
{
	int i;

	i = 0;
	while (i >= 0)
	{
		if (ft_is_prime(nb + i) == 1)
			return (nb);
		i++;
	}
	return (0);
}

#include <stdio.h>

int	main(void)
{
	printf("\n===ex07===");
	printf("\nNext prime at or after 3: %d", ft_find_next_prime(3));
	printf("\nNext prime at or after -16: %d", ft_find_next_prime(-16));
	printf("\nNext prime at or after 75: %d", ft_find_next_prime(75));
	printf("\nNext prime at or after 13: %d", ft_find_next_prime(13));
	printf("\nNext prime at or after 4762177: %d", ft_find_next_prime(4762177));
	printf("\n");

	return (0);
}

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
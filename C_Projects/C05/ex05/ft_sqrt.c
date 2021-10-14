/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsubel <jsubel@student.42wolfsburg.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 13:45:38 by jsubel            #+#    #+#             */
/*   Updated: 2021/10/14 16:23:01 by jsubel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int i;
	
	i = 0;
	while ((i * i) <= nb)
	{
		if ((i * i) == nb)
			return (i);
		i++;
	}
	return (0);
}

#include <stdio.h>

int	main(void)
{
	printf("\n===ex05===");
	printf("\nSquare root of 225 is:(15) %d", ft_sqrt(225));
	printf("\nSquare root of 121 is:(11) %d", ft_sqrt(121));
	printf("\nSquare root of -225 is:(0) %d", ft_sqrt(-225));
	printf("\nSquare root of 265 is:(16.27, so should be 0) %d", ft_sqrt(265));
	printf("\n");
}
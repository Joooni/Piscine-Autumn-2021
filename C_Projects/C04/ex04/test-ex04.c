/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test-ex04.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsubel <jsubel@student.42wolfsburg.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 15:41:51 by jsubel            #+#    #+#             */
/*   Updated: 2021/10/14 17:08:00 by jsubel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void ft_putnbr_base(int nbr, char *base);

int	main(void)
{
	printf("\n===ex04===\n");
	ft_putnbr_base(15, "01");
	printf(" - Should be 1111\n");
	ft_putnbr_base(61, "0123456789ABCDEF");
	printf(" - Should be 3D\n");
	ft_putnbr_base(12345462, "0fortyw123");
	printf(" - Should be fortytwo\n");
	ft_putnbr_base(12345463, "");
	printf(" - Should be nothing\n");
	ft_putnbr_base(12345463, "+12345");
	printf(" - Should be nothing\n");
	ft_putnbr_base(12345463, "3");
	printf(" - Should be nothing\n");
	ft_putnbr_base(-2147483648, "01");
	printf(" - Should be -10000000000000000000000000000000\n");
	ft_putnbr_base(2147483647, "01");
	printf(" - Should be 1111111111111111111111111111111\n");
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test-ex02.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsubel <jsubel@student.42wolfsburg.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 15:51:36 by jsubel            #+#    #+#             */
/*   Updated: 2021/10/14 08:52:27 by jsubel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void ft_putnbr(int nb);

int	main(void)
{
	printf("\n===ex02===\n");
	printf("\nPrint: -135\n");
	ft_putnbr(-135);
	printf("\nPrint: 0\n");
	ft_putnbr(0);
	printf("\nPrint: -2147483648\n");
	ft_putnbr(-2147483648);
	printf("\nPrint: 2147483647\n");
	ft_putnbr(2147483647);
	printf("\nPrint: 1290535\n");
	ft_putnbr(1290535);
	return (0);
}
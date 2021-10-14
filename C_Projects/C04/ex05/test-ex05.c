/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test-ex05.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsubel <jsubel@student.42wolfsburg.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 15:41:53 by jsubel            #+#    #+#             */
/*   Updated: 2021/10/09 16:00:19 by jsubel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int ft_atoi_base(char *str, char *base);

int	main(void)
{
	printf("\n===ex05===\n")
	ft_atoi_base("---15ab", "01");
	printf(" - Should be 1111\n");
	ft_atoi_base("      +61ab", "0123456789ABCDEF");
	printf(" - Should be 3D\n");
	ft_atoi_base("  -+-+12345463avbbn45bd", "0fortyw123");
	printf(" - Should be fortytwo\n");
	ft_atoi_base("  -+12345463", "");
	printf(" - Should return 0\n");
	ft_atoi_base(" 12345463", "+12345");
	printf(" - Should return 0\n");
	ft_atoi_base("12345463", "+12345");
	printf(" - Should return 0\n");
	
	return (0);
}
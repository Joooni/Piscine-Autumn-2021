/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test-ex09.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsubel <jsubel@student.42wolfsburg.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 20:16:59 by jsubel            #+#    #+#             */
/*   Updated: 2021/10/08 10:41:06 by jsubel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char	*ft_strcapitalize(char *str);


int	main(void)
{
	char	test0[45]="sUPer cALI!FRAGILISTIC-expi+ali&docious";
	char	test1[85]="42 - It iS ThE AnSwEr tO ThE UlTiMaTe qUeStIoN Of lIfE, tHe uNiVeRsE, aNd eVeRyThInG.";

	printf("\nFirst String: \n%s", test0);
	ft_strcapitalize(test0);
	printf("\nResult: %s\n", test0);
	printf("Second String: \n%s", test1);
	ft_strcapitalize(test1);
	printf("\nResult: %s\n", test1);
}
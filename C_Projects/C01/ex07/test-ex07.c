/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test-ex07.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsubel <jsubel@student.42wolfsburg.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 21:40:20 by jsubel            #+#    #+#             */
/*   Updated: 2021/10/05 08:06:14 by jsubel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int array_len;
	int array[15] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14};
	int counter;

	
	array_len= 15;
	printf("Before:\n");
	counter = 0;
	while(counter < array_len)
	{
		printf("%d ", array[counter]);
		counter++;
	}
	ft_rev_int_tab(array, array_len);
		printf("\nAfter:\n");
	counter = 0;
	while(counter < array_len)
	{
		printf("%d ", array[counter]);
		counter++;
	}
	printf("\n");	
	return (0);
}

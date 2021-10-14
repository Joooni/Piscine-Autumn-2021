/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test-ex08.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsubel <jsubel@student.42wolfsburg.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 09:22:02 by jsubel            #+#    #+#             */
/*   Updated: 2021/10/05 09:53:27 by jsubel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>


void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int array_len;
	int array[35] = {33, 3, 4, 15, 22, 32, 18, 6, 19, 10, 25, 6, 42, 14, 29, 26, 29, 5, 50, 30, 43, 1, 41, 29, 37, 39, 33, 40, 13, 4, 26, 19, 49, 3, 16};
	int counter;

	array_len= 35;
	printf("Before:\n");
	counter = 0;
	while(counter < array_len)
	{
		printf("%d ", array[counter]);
		counter++;
	}
	printf("\n");
	ft_sort_int_tab(array, array_len);
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
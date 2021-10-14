/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test-ex01.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsubel <jsubel@student.42wolfsburg.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 10:30:11 by jsubel            #+#    #+#             */
/*   Updated: 2021/10/05 08:03:34 by jsubel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void	ft_ultimate_ft(int *********nbr);

int	main(void)
{
	int n;
	int *ptr1;
	int **ptr2;
	int ***ptr3;
	int ****ptr4;
	int *****ptr5;
	int ******ptr6;
	int *******ptr7;
	int ********ptr8;
	int *********ptr9;

	n = 7;
	ptr1 = &n;
	ptr2 = &ptr1;
	ptr3 = &ptr2;
	ptr4 = &ptr3;
	ptr5 = &ptr4;
	ptr6 = &ptr5;
	ptr7 = &ptr6;
	ptr8 = &ptr7;
	ptr9 = &ptr8;
	printf("Before\n%p ", ptr9);
	printf("%d\n",n);
	ft_ultimate_ft(ptr9);
	printf("After\n%p ", ptr9);
	printf("%d\n",n);
	printf("\nAll them Pointers\n%p, %p, %p, %p, %p, %p, %p, %p, %p\n", ptr1,ptr2,ptr3,ptr4,ptr5,ptr6,ptr7,ptr8,ptr9);
	return (0);
}
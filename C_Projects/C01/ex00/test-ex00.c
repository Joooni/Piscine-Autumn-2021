/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test-ex00.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsubel <jsubel@student.42wolfsburg.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 10:44:10 by jsubel            #+#    #+#             */
/*   Updated: 2021/10/05 08:03:30 by jsubel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void	ft_ft(int *nbr);

int	main(void)
{
	int	test;
	int *ptr;
	
	ptr = &test;
	test = 'b';
	printf("Before\n%p ", ptr);
	printf("%i\n", test);
	ft_ft(ptr);
	printf("After\n%p ", ptr);
	printf("%d\n", *ptr);
}

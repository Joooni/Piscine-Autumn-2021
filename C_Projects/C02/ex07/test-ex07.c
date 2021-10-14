/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test-ex07.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsubel <jsubel@student.42wolfsburg.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 19:30:21 by jsubel            #+#    #+#             */
/*   Updated: 2021/10/08 10:40:11 by jsubel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char	*ft_strupcase(char *str);

int	main(void)
{
	char	test0[35]="SuPerCalIFragIliSTICexpialIDOCious";
	char	test1[81]="The Answer to the Ultimate Question of Life, the Universe, and Everything is 42.";

	printf("\nFirst String: \n%s", test0);
	ft_strupcase(test0);
	printf("\nResult: %s\n", test0);
	printf("Second String: \n%s", test1);
	ft_strupcase(test1);
	printf("\nResult: %s\n", test1);
}

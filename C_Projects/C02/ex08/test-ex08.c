/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test-ex08.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsubel <jsubel@student.42wolfsburg.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 19:53:23 by jsubel            #+#    #+#             */
/*   lowdated: 2021/10/06 19:53:25 by jsubel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char	*ft_strlowcase(char *str);

int	main(void)
{
	char	test0[35]="SuperCalIFragIliSTICexpialIDOCious";
	char	test1[81]="The Answer to the Ultimate Question of Life, the Universe, and Everything is 42.";

	printf("\nFirst String: \n%s", test0);
	ft_strlowcase(test0);
	printf("\nResult: %s\n", test0);
	printf("Second String: \n%s", test1);
	ft_strlowcase(test1);
	printf("\nResult: %s\n", test1);
}
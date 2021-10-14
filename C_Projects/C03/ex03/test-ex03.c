/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test-ex03.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsubel <jsubel@student.42wolfsburg.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 08:54:58 by jsubel            #+#    #+#             */
/*   Updated: 2021/10/13 12:06:30 by jsubel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>

char	*ft_strncat(char *dest, char *src, unsigned int n);

int	main(void)
{
	char			test0[85]="The Answer to the Ultimate Question of Life,";
	char			test1[36]=" the Universe, and Everything is 42.";
	char			test_ref0[85]="The Answer to the Ultimate Question of Life,";
	char			test_ref1[36]=" the Universe, and Everything is 42.";
	unsigned int	n;

	n =35;
	ft_strncat(test0, test1, n);
	strncat(test_ref0, test_ref1, n);	
	printf("Result:\n%s\nWhat result should look like:\n%s\n", test0, test_ref0);
}
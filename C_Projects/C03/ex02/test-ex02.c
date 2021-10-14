/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test-ex02.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsubel <jsubel@student.42wolfsburg.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 08:14:55 by jsubel            #+#    #+#             */
/*   Updated: 2021/10/13 12:04:29 by jsubel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>


char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	char test0[57]="I had all and then most of you";
	char test_ref0[57]="I had all and then most of you";
	char test1[27]=" / Some and now none of you";


	ft_strcat(test0, test1);
	strcat(test_ref0, test1);	
	printf("Result:\n%s\nWhat result should look like:\n%s\n", test0, test_ref0);
}

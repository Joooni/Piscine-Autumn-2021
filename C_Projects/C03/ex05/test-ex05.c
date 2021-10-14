/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test-ex05.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsubel <jsubel@student.42wolfsburg.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 11:51:27 by jsubel            #+#    #+#             */
/*   Updated: 2021/10/13 12:14:38 by jsubel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	char test0[95]="Bring you a little closer, tell you it's okay";
	char test1[49]=" - I don't wanna be something you can throw away";
	
	printf("Result:\n%s\nLength I tried to create: %d\n", test0, ft_strlcat(test0, test1, 12));
	return (0);
}

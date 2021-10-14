/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test-ex11.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsubel <jsubel@student.42wolfsburg.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 08:55:32 by jsubel            #+#    #+#             */
/*   Updated: 2021/10/09 17:27:21 by jsubel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_putstr_non_printable(char *str);


int main(void)
{
	printf("\n");
	char *teststr = "The Answer to the\nUltimate \rQue\tstion of \eLife, the\b Universe, and Everything is 42.";
	ft_putstr_non_printable(teststr);
	printf("\n\n");
}

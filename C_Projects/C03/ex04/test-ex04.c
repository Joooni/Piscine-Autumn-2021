/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test-ex04.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsubel <jsubel@student.42wolfsburg.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 09:15:11 by jsubel            #+#    #+#             */
/*   Updated: 2021/10/14 08:39:41 by jsubel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char	test0[81] = "The Answer to the Ultimate Question of Life, the Universe, and Everything is 42.";
	char	test_to_find[7] = "nswr";

	printf("Result of ft_strstr: %p", ft_strstr(test0, test_to_find));
	printf("\nResult of strstr:    %p\n", strstr(test0, test_to_find));
}
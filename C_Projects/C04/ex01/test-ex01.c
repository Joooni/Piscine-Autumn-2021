/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test-ex01.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsubel <jsubel@student.42wolfsburg.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 15:51:10 by jsubel            #+#    #+#             */
/*   Updated: 2021/10/12 08:31:31 by jsubel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void	ft_putstr(char *str);

int	main(void)
{
	char	*string = "The Answer to the Ultimate Question of Life, the Universe, and Everything is 42.\n";
	
	printf("\n===ex01===\n");
	ft_putstr(string);
}
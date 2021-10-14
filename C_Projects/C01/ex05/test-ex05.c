/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test-ex05.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsubel <jsubel@student.42wolfsburg.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 16:16:09 by jsubel            #+#    #+#             */
/*   Updated: 2021/10/06 11:55:03 by jsubel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void	ft_putstr(char *str);

int	main(void)
{
	char	string[82] = "Hello Stefanie.\n";
	char	*pointer;

	pointer = &string[0];
	ft_putstr(pointer);
}

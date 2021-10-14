/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsubel <jsubel@student.42wolfsburg.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 15:41:02 by jsubel            #+#    #+#             */
/*   Updated: 2021/10/09 16:39:23 by jsubel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int counter;
	
	counter = 0;
	while(str[counter] != '\0')
	{
		write(1, &(str[counter]), 1);
		counter++;
	}
}

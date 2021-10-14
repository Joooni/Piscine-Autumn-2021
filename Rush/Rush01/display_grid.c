/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_grid.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsubel <jsubel@student.42wolfsburg.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 15:23:58 by jsubel            #+#    #+#             */
/*   Updated: 2021/10/09 16:39:40 by jsubel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putstr(char *str);

void	display_grid(char ***grid_ptr)
{
	int	counter_line;
	int	counter_column;
	
	counter_line = 0;
	counter_column = 0;
	while (counter_line < 4)
	{
		while (counter_column < 4)
		{
			ft_putstr(grid_ptr[counter_line][counter_column]);
			if (counter_column < 3)
			{
			write(1, " ", 1);
			}
			counter_column++;
		}
		write(1, "\n", 1);
		counter_line++;
		counter_column = 0;		
	}
}

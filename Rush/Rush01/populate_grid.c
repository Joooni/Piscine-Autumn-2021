/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   populate_grid.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsubel <jsubel@student.42wolfsburg.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 15:21:19 by jsubel            #+#    #+#             */
/*   Updated: 2021/10/09 16:36:04 by jsubel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	populate_grid(char ***grid_ptr)
{
	int	counter_col;
	int	counter_row;

	counter_col = 0;
	counter_row = 0;
	while(counter_row < 4)
	{
		while(counter_col < 4)
		{
			grid_ptr[counter_row][counter_col++] = "1234";
		}
		counter_row++;
		counter_col = 0;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_grid.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsubel <jsubel@student.42wolfsburg.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 16:54:23 by jsubel            #+#    #+#             */
/*   Updated: 2021/10/09 19:44:02 by jsubel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	***create_grid(void)
{	
	char	**row1;
	char	**row2;
	char	**row3;
	char	**row4;
	char	***grid_ptr;
	
	row1 = malloc(4 * sizeof(char *)+ 16 * sizeof(char));
	row2 = malloc(4 * sizeof(char *)+ 16 * sizeof(char));
	row3 = malloc(4 * sizeof(char *)+ 16 * sizeof(char));
	row4 = malloc(4 * sizeof(char *)+ 16 * sizeof(char)); 
	grid_ptr = malloc(4 * sizeof(char **));
	grid_ptr[0] = &row1[0];
	grid_ptr[1] = &row2[0];
	grid_ptr[2] = &row3[0];
	grid_ptr[3] = &row4[0];


	return (grid_ptr);
}

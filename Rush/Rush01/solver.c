/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsubel <jsubel@student.42wolfsburg.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 18:17:46 by jsubel            #+#    #+#             */
/*   Updated: 2021/10/09 19:44:37 by jsubel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	display_grid(char ***grid_ptr);
void	populate_grid(char ***grid_ptr);
char	***create_grid(void);

char	***solver(char **solver_string)
{
	char *** grid;
	/* char *** solved_grid; */
	
	printf("\nStrings to solver:\n%s - colup\n%s - coldown\n%s - rowleft\n%s - rowright\n\n", solver_string[0], solver_string[1], solver_string[2], solver_string[3]);
	printf("\nTest: %s\n", solver_string[0]);
	grid = create_grid();				//	create empty grid and allocate memory for it
	populate_grid(grid);				//	populate empty grid with every possible solution for every field
	printf("\nTest 2: value at 0,1,1 (should be 2): %c\n\n", grid[0][2][3]);
	grid[0][1] = "1   ";
	display_grid(grid);
	free(grid);
	return (grid);
}
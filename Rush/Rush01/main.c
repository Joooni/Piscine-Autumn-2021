/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsubel <jsubel@student.42wolfsburg.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 10:14:02 by jsubel            #+#    #+#             */
/*   Updated: 2021/10/09 20:10:29 by jsubel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char	**cmd_line_separator(char *cmd_line);
char	***solver(char **solver_string);

int	main(int argc, char **argv)
{
	char **solver_string;
	
	solver_string = cmd_line_separator(argv[1]);
	printf("\nargc: %i - argv: %s", argc, argv[1]);
	solver(solver_string);

	return (0);
}

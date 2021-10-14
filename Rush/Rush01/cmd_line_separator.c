/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmd_line_separator.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsubel <jsubel@student.42wolfsburg.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 17:04:53 by jsubel            #+#    #+#             */
/*   Updated: 2021/10/09 20:06:54 by jsubel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	**cmd_line_separator(char *cmd_line)
{
	char	**return_ptr;
	int		i;

	i = 0;
	return_ptr = malloc(4 * sizeof(char *));
	while (i < 4)
		return_ptr[i++] = malloc(4 * sizeof(char));
	return_ptr[0][0] = cmd_line[0];
	return_ptr[0][1] = cmd_line[2];
	return_ptr[0][2] = cmd_line[4];
	return_ptr[0][3] = cmd_line[6];
	return_ptr[1][0] = cmd_line[8];
	return_ptr[1][1] = cmd_line[10];
	return_ptr[1][2] = cmd_line[12];
	return_ptr[1][3] = cmd_line[14];
	return_ptr[2][0] = cmd_line[16];
	return_ptr[2][1] = cmd_line[18];
	return_ptr[2][2] = cmd_line[20];
	return_ptr[2][3] = cmd_line[22];
	return_ptr[3][0] = cmd_line[24];
	return_ptr[3][1] = cmd_line[26];
	return_ptr[3][2] = cmd_line[28];
	return_ptr[3][3] = cmd_line[30];
	return (return_ptr);
}

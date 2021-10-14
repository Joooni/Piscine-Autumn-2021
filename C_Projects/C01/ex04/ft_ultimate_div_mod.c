/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsubel <jsubel@student.42wolfsburg.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 11:57:46 by jsubel            #+#    #+#             */
/*   Updated: 2021/10/07 10:48:09 by jsubel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b);

void	ft_ultimate_div_mod(int *a, int *b)
{
	int tmp_div;
	int tmp_mod;
	
	if ( *b == 0)
	{
//		write(1, "Divide by 0 equal nono", 22);		
		return ;
	}
	 
	tmp_div = 0;
	tmp_mod = 0;
	tmp_div = *a / *b;
	tmp_mod = *a % *b;
	*a = tmp_div;
	*b = tmp_mod;
}
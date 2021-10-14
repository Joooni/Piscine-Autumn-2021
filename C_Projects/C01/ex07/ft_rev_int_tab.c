/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsubel <jsubel@student.42wolfsburg.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 11:59:13 by jsubel            #+#    #+#             */
/*   Updated: 2021/10/04 21:56:57 by jsubel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size);

void	ft_rev_int_tab(int *tab, int size)
{
	int	counter;
	int	tmp;

	counter = 0;
	tmp = 0;
	while (counter < size / 2)
	{
		tmp = tab[counter];
		tab[counter] = tab[size - counter - 1];
		tab[size - counter - 1] = tmp;
		counter++;
	}
}

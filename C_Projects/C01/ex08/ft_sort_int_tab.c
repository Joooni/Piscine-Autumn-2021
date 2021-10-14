/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsubel <jsubel@student.42wolfsburg.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 20:12:23 by jsubel            #+#    #+#             */
/*   Updated: 2021/10/05 13:44:05 by jsubel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size);
void	ft_swap(int *a, int *b);

void	ft_sort_int_tab(int *tab, int size)
{
	int	counter;
	int	sort_len;

	counter = 0;
	sort_len = size;
	while (sort_len > 1)
	{
		while (counter < sort_len - 1)
		{
			if (tab[counter] > tab[counter + 1])
			{
				ft_swap(&tab[counter], &tab[counter + 1]);
			}
			counter++;
		}
		sort_len--;
		counter = 0;
	}
}

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

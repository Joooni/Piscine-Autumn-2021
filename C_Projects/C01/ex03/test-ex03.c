/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test-ex03.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsubel <jsubel@student.42wolfsburg.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 11:29:43 by jsubel            #+#    #+#             */
/*   Updated: 2021/10/05 10:05:28 by jsubel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int div_ptr_value;
	int mod_ptr_value;
	int div_cache;
	int mod_cache;
	
	div_cache = 76;
	mod_cache = 8;
	div_ptr_value = 65;
	mod_ptr_value = 24;

	printf("div_ptr: %p - mod_ptr: %p\n", &div_ptr_value, &mod_ptr_value);
	printf("Before:\n");
	printf("div_ptr_value: %d - mod_ptr_value: %d\n", div_ptr_value, mod_ptr_value);
	printf("Divide %d by %d and show the rest\n", div_cache, mod_cache);
	ft_div_mod(div_cache, mod_cache, &div_ptr_value, &mod_ptr_value);
	printf("After:\n");
	printf("div_ptr_value: %d - mod_ptr_value: %d\n", div_ptr_value, mod_ptr_value);
}

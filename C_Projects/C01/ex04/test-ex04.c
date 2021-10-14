/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test-ex04.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsubel <jsubel@student.42wolfsburg.de >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 11:59:26 by jsubel            #+#    #+#             */
/*   Updated: 2021/10/07 10:55:11 by jsubel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int *div_ptr;
	int *mod_ptr;
	int div_cache;
	int mod_cache;
	
	div_cache = 17;
	mod_cache = 4;
	div_ptr = &div_cache;
	mod_ptr = &mod_cache;
	printf("Before:\n");
	printf("%p: %d - %p: %d\n", div_ptr, div_cache, mod_ptr, mod_cache);
	printf("Divide %d by %d and show the rest\n", div_cache, mod_cache);
	ft_ultimate_div_mod(div_ptr, mod_ptr);
	printf("After:\n");
	printf("%p: %d - %p: %d\n", div_ptr, div_cache, mod_ptr, mod_cache);
}

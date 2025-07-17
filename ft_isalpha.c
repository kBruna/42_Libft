/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buehara <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 18:11:33 by buehara           #+#    #+#             */
/*   Updated: 2025/07/17 19:45:32 by buehara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
		return (c);
	return (0);
}
/*
#include <ctype.h>
#include <stdio.h>
int	main(void)
{
	char	test = '1';
	char	test2 = 'a';
	char	test3 = 'A';
	char	test4 = 'b';
	char	test5 = '!';
	char	test6 = '$';
	char	test7 = '^';

	printf("Teste 1:\n\tOriginal 1: %d\n", isalpha(test));
	printf("\tft_isalpha 1: %d\n\n", ft_isalpha(test));

	printf("Teste 2:\n\tOriginal a: %d\n", isalpha(test2));
	printf("\tft_isalpha a: %d\n\n", ft_isalpha(test2));
	
	printf("Teste 3:\n\tOriginal A: %d\n", isalpha(test3));
	printf("\tft_isalpha A: %d\n\n", ft_isalpha(test3));
	
	printf("Teste 4:\n\tOriginal b: %d\n", isalpha(test4));
	printf("\tft_isalpha b: %d\n\n", ft_isalpha(test4));
	
	printf("Teste 5:\n\tOriginal !: %d\n", isalpha(test5));
	printf("\tft_isalpha !: %d\n\n", ft_isalpha(test5));
	
	printf("Teste 6:\n\tOriginal $: %d\n", isalpha(test6));
	printf("\tft_isalpha $: %d\n\n", ft_isalpha(test6));
	
	printf("Teste 7:\n\tOriginal ^: %d\n", isalpha(test7));
	printf("\tft_isalpha ^: %d\n\n", ft_isalpha(test7));

	return (0);
}*/

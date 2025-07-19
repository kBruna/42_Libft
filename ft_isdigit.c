/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buehara <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 18:57:14 by buehara           #+#    #+#             */
/*   Updated: 2025/07/19 12:48:11 by buehara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c);

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
/*
#include <ctype.h>
#include <stdio.h>
int     main(void)
{
        int     test = 0;
        int     test2 = 9;
        char    test3 = '1';
        int    test4 = '2';
        int    test5 = '5';
        char    test6 = '#';

        printf("Teste 1 Valor [%d] :\n\tOriginal: %d", test, isdigit(test));
        printf("\n\tft_isdigit: %d\n\n", ft_isdigit(test));
        printf("Teste 2 Valor [%d] :\n\tOriginal: %d", test2, isdigit(test2));
        printf("\n\tft_isdigit: %d\n\n", ft_isdigit(test2));
        printf("Teste 3 Valor [%c] :\n\tOriginal: %d", test3, isdigit(test3));
        printf("\n\tft_isdigit: %d\n\n", ft_isdigit(test3));
        printf("Teste 4 Valor [%d] :\n\tOriginal: %d", test4, isdigit(test4));
        printf("\n\tft_isdigit: %d\n\n", ft_isdigit(test4));
        printf("Teste 5 Valor [%d] :\n\tOriginal: %d", test5, isdigit(test5));
        printf("\n\tft_isdigit: %d\n\n", ft_isdigit(test5));
        printf("Teste 6 Valor [%c] :\n\tOriginal: %d", test6, isdigit(test6));
        printf("\n\tft_isdigit: %d\n\n", ft_isdigit(test6));

        return (0);
}*/

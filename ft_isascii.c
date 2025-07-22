/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buehara <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 12:46:31 by buehara           #+#    #+#             */
/*   Updated: 2025/07/22 18:51:23 by buehara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c);

int	ft_isascii(int c)
{
	if (c >= 0 && c < 128)
		return (1);
	return (0);
}
/*
#include <ctype.h>
#include <stdio.h>
int     main(void)
{
        char    test = ;
        char    test2 = 9;
        char    test3 = 'a';
        char    test4 = '=';
        char    test5 = '!';
        char    test6 = '#';

        printf("Teste 1 Valor [%d] :\n\tOriginal: %d", test, isascii(test));
        printf("\n\tft_isascii: %d\n\n", ft_isascii(test));
        printf("Teste 2 Valor [%d] :\n\tOriginal: %d", test2, isascii(test2));
        printf("\n\tft_isascii: %d\n\n", ft_isascii(test2));
        printf("Teste 3 Valor [%c] :\n\tOriginal: %d", test3, isascii(test3));
        printf("\n\tft_isascii: %d\n\n", ft_isascii(test3));
        printf("Teste 4 Valor [%c] :\n\tOriginal: %d", test4, isascii(test4));
        printf("\n\tft_isascii: %d\n\n", ft_isascii(test4));
        printf("Teste 5 Valor [%c] :\n\tOriginal: %d", test5, isascii(test5));
        printf("\n\tft_isascii: %d\n\n", ft_isascii(test5));
        printf("Teste 6 Valor [%c] :\n\tOriginal: %d", test6, isascii(test6));
        printf("\n\tft_isascii: %d\n\n", ft_isascii(test6));

        return (0);
}*/

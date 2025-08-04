/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buehara <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 12:49:57 by buehara           #+#    #+#             */
/*   Updated: 2025/08/04 18:56:44 by buehara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c > 31 && c < 127)
		return (1);
	return (0);
}
/*
#include <ctype.h>
#include <stdio.h>
int     main(void)
{
        int     test = '0';
        int     test2 = '9';
        char    test3 = ' ';
        char    test4 = '\n';
        char    test5 = '!';
        char    test6 = '#';

        printf("Teste 1 Valor [%d] :\n\tOriginal: %d", test, isprint(test));
        printf("\n\tft_isprint: %d\n\n", ft_isprint(test));
        printf("Teste 2 Valor [%d] :\n\tOriginal: %d", test2, isprint(test2));
        printf("\n\tft_isprint: %d\n\n", ft_isprint(test2));
        printf("Teste 3 Valor [%c] :\n\tOriginal: %d", test3, isprint(test3));
        printf("\n\tft_isprint: %d\n\n", ft_isprint(test3));
        printf("Teste 4 Valor [%c] :\n\tOriginal: %d", test4, isprint(test4));
        printf("\n\tft_isprint: %d\n\n", ft_isprint(test4));
        printf("Teste 5 Valor [%c] :\n\tOriginal: %d", test5, isprint(test5));
        printf("\n\tft_isprint: %d\n\n", ft_isprint(test5));
        printf("Teste 6 Valor [%c] :\n\tOriginal: %d", test6, isprint(test6));
        printf("\n\tft_isprint: %d\n\n", ft_isprint(test6));

        return (0);
}*/

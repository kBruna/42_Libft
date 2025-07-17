/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buehara <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 20:14:13 by buehara           #+#    #+#             */
/*   Updated: 2025/07/17 20:25:00 by buehara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c);

int	ft_isalpha(int c);

int	ft_isdigit(int c);

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (c);
	return (0);
}
/*
#include <ctype.h>
#include <stdio.h>
int     main(void)
{
        int     test = '0';
        int     test2 = '9';
        char    test3 = 'a';
        char    test4 = '=';
        char    test5 = '!';
        char    test6 = '#';

        printf("Teste 1 Valor [%d] :\n\tOriginal: %d", test, isalnum(test));
        printf("\n\tft_isdigit: %d\n\n", ft_isalnum(test));
       
       	printf("Teste 2 Valor [%d] :\n\tOriginal: %d", test2, isalnum(test2));
        printf("\n\tft_isdigit: %d\n\n", ft_isalnum(test2));
       
       	printf("Teste 3 Valor [%c] :\n\tOriginal: %d", test3, isalnum(test3));
        printf("\n\tft_isdigit: %d\n\n", ft_isalnum(test3));
       
       	printf("Teste 4 Valor [%c] :\n\tOriginal: %d", test4, isalnum(test4));
        printf("\n\tft_isdigit: %d\n\n", ft_isalnum(test4));
       
       	printf("Teste 5 Valor [%c] :\n\tOriginal: %d", test5, isalnum(test5));
        printf("\n\tft_isdigit: %d\n\n", ft_isalnum(test5));
       
       	printf("Teste 6 Valor [%c] :\n\tOriginal: %d", test6, isalnum(test6));
        printf("\n\tft_isdigit: %d\n\n", ft_isalnum(test6));

        return (0);
}*/

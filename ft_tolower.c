/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buehara <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 14:26:00 by buehara           #+#    #+#             */
/*   Updated: 2025/08/04 19:09:21 by buehara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c > 64 && c < 91)
		return (c + 32);
	return (c);
}
/*
#include <ctype.h>
#include <stdio.h>
int     main(void)
{
        char    test1 = '0';
        char    test2 = '9';
        char    test3 = 'a';
        char    test4 = 'A';
        char    test5 = '!';
        char    test6 = '#';

        char    *test[6] = { &test1, &test2, &test3, &test4, &test5, &test6 };

        int     var_origin1;
        int     var_origin2;
        int     var_origin3;
        int     var_origin4;
        int     var_origin5;
        int     var_origin6;

        int     *var_origin[6] = { &var_origin1, &var_origin2, &var_origin3,
       	&var_origin4, &var_origin5, &var_origin6 };

        int     var_my_function1;
        int     var_my_function2;
        int     var_my_function3;
        int     var_my_function4;
        int     var_my_function5;
        int     var_my_function6;

        int     *var_my_func[6] = { &var_my_function1, &var_my_function2, 
	&var_my_function3, &var_my_function4, &var_my_function5, &var_my_function6 };

        for (int i = 0; i <= 5; i++)
        {
                *(var_origin[i]) = tolower(*(test[i]));
                *(var_my_func[i]) = ft_tolower(*(test[i]));
        }

        printf("Teste 1 Valor [%c] :\n\tOriginal: %c", test1, var_origin1);
        printf("\n\tft_my_function: %c\n\n", var_my_function1);
        printf("Teste 2 Valor [%c] :\n\tOriginal: %c", test2, var_origin2);
        printf("\n\tft_my_function: %c\n\n", var_my_function2);
        printf("Teste 3 Valor [%c] :\n\tOriginal: %c", test3, var_origin3);
        printf("\n\tft_my_function: %c\n\n", var_my_function3);
        printf("Teste 4 Valor [%c] :\n\tOriginal: %c", test4, var_origin4);
        printf("\n\tft_my_function: %c\n\n", var_my_function4);
        printf("Teste 5 Valor [%c] :\n\tOriginal: %c", test5, var_origin5);
        printf("\n\tft_my_function: %c\n\n", var_my_function5);
        printf("Teste 6 Valor [%c] :\n\tOriginal: %c", test6, var_origin6);
        printf("\n\tft_my_function: %c\n\n", var_my_function6);

        return (0);
}*/

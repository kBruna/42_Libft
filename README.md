# Libft
42's Common Core Libft

 - Functions List #<ctype.h>

[x] ft_isalpha;\n
[x] ft_isdigit;\n
[x] ft_isalnum;\n
[x] ft_isascii;\n
[x] ft_isprint;\n
[x] ft_toupper;\n
[x] ft_tolower;\n
[x] ft_strlen;\n
[x] ft_memset;\n
[ ] ft_bzero;\n
[ ] ft_memcpy;\n
[ ] ft_memmove;\n
[x] ft_strlcpy;\n
[ ] ft_strlcat;\n
[ ] ft_strchr;\n
[ ] ft_strrchr;\n
[ ] ft_strncmp;\n
[ ] ft_memchr;\n
[ ] ft_memcmp;\n
[ ] ft_strnstr;\n
[ ] ft_atoi;\n

 - with malloc()\n
[ ] ft_calloc;\n
	- If (nmemb || size) = 0; return (\*unique) -> free()
[ ] ft_strdup;\n

	- strlcpy, strlcat, bzero -> #include <bsd/string.h> -> cc -lbsd

 - Extra Functions

[ ] ft_substr;\n
[ ] ft_strjoin;\n
[ ] ft_strtrin;\n
[ ] ft_split;\n
[ ] ft_itoa;\n
[ ] ft_strmapi;\n
[ ] ft_striteri;\n
[ ] ft\_putchar_fd;\n
[ ] ft\_putstr_fd;\n
[ ] ft\_putendl_fd;\n
[ ] ft\_putnbr_fd;\n

=== Testes ===

#include <ctype.h>
#include <stdio.h>
int     main(void)
{
        char    test1 = '0';
        char    test2 = '9';
        char    test3 = 'a';
        char    test4 = '=';
        char    test5 = '!';
        char    test6 = '#';

        char    *test[6] = { &test1, &test2, &test3, &test4, &test5, &test6 };

        int     var_origin1;
        int     var_origin2;
        int     var_origin3;
        int     var_origin4;
        int     var_origin5;
        int     var_origin6;

        int     *var_origin[6] = { &var_origin1, &var_origin2, &var_origin3, &var_origin4, &var_origin5, &var_origin6 };

        int     var_my_function1;
        int     var_my_function2;
        int     var_my_function3;
        int     var_my_function4;
        int     var_my_function5;
        int     var_my_function6;

        int     *var_my_func[6] = { &var_my_function1, &var_my_function2, &var_my_function3, &var_my_function4, &var_my_function5, &var_my_function6 };

        for (int i = 0; i <= 5; i++)
        {
                *(var_origin[i]) = toupper(*(test[i]));
                *(var_my_func[i]) = ft_toupper(*(test[i]));
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
}

#include <stdio.h>
#include <string.h>
#include <bsd/string.h>
int     ft_strlen(char *str);

int     ft_strlen(char *str)
{
        int     i;
        int     len;

        while (str[i] != '\0')
        {
                len++;
                i++;
        }
        return (len);
}

int     main(void)
{
        char    str_orig1[] = "ABC";
        char    str_orig2[] = "Hello []$^&*()_+{}| World!";

        char    str_cp1_dest1[100];
        char    str_cp1_dest2[100];
        char    str_cp2_dest1[100];
        char    str_cp2_dest2[100];

        unsigned int    orig_1 = strlcpy(str_cp1_dest1, str_orig1, 2);
        unsigned int    orig_2 = strlcpy(str_cp1_dest2, str_orig2, 10);
        unsigned int    myfunc_1 = ft_strlcpy(str_cp2_dest1, str_orig1, 2);
        unsigned int    myfunc_2 = ft_strlcpy(str_cp2_dest2, str_orig2, 10);

        printf("\nOriginal Function:\n\tString 01: %s\t\tReturn : %d \n\tString 02: 
        %s\t\tReturn : %d", str_cp1_dest1, orig_1, str_cp1_dest2, orig_2);
        printf("\n\nMy function:\n\tString 01: %s \t\tReturn : %d\n\tString 02: 
        %s\t\tReturn : %d\n", str_cp2_dest1, myfunc_1, str_cp2_dest2, myfunc_2);
        return (0);
}

#include <stdio.h>
#include <string.h>
#include <bsd/string.h>
int     ft_strlen(char *str);

int     ft_strlen(char *str)
{
        int     i;
        int     len;

        while (str[i] != '\0')
        {
                len++;
                i++;
        }
        return (len);
}

int     main(void)
{
        char    str_orig1[] = "ABC";
        char    str_orig2[] = "Hello []$^&*()_+{}| World!";

        char    str_cp1_dest1[100];
        char    str_cp1_dest2[100];
        char    str_cp2_dest1[100];
        char    str_cp2_dest2[100];

        unsigned int    orig_1 = strlcpy(str_cp1_dest1, str_orig1, 2);
        unsigned int    orig_2 = strlcpy(str_cp1_dest2, str_orig2, 10);
        unsigned int    myfunc_1 = ft_strlcpy(str_cp2_dest1, str_orig1, 2);
        unsigned int    myfunc_2 = ft_strlcpy(str_cp2_dest2, str_orig2, 10);

        printf("\nOriginal Function:\n\tString 01: %s\t\tReturn : %d \n\tString 02: 
        %s\t\tReturn : %d", str_cp1_dest1, orig_1, str_cp1_dest2, orig_2);
        printf("\n\nMy function:\n\tString 01: %s \t\tReturn : %d\n\tString 02: 
        %s\t\tReturn : %d\n", str_cp2_dest1, myfunc_1, str_cp2_dest2, myfunc_2);
        return (0);
}

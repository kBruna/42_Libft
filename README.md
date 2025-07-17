# Libft
42's Common Core Libft

 - Functions List #<ctype.h>

[x] ft_isalpha;
[x] ft_isdigit;
[?] ft_isalnum;
[ ] ft_isascii;
[ ] ft_isprint;
[ ] ft_strlen;
[ ] ft_menset;
[ ] ft_bzero;
[ ] ft_memcpy;
[ ] ft_memmove;
[ ] ft_strlcpy;
[ ] ft_strlcat;
[ ] ft_toupper;
[ ] ft_tolower;
[ ] ft_strchr;
[ ] ft_strrchr;
[ ] ft_strncmp;
[ ] ft_memchr;
[ ] ft_memcmp;
[ ] ft_strnstr;
[ ] ft_atoi;

 - with malloc()
[ ] ft_calloc;
	- If (nmemb || size) = 0; return (\*unique) -> free()
[ ] ft_strdup;

	- strlcpy, strlcat, bzero -> #include <bsd/string.h> -> cc -lbsd

 - Extra Functions

[ ] ft_substr;
[ ] ft_strjoin;
[ ] ft_strtrin;
[ ] ft_split;
[ ] ft_itoa;
[ ] ft_strmapi;
[ ] ft_striteri;
[ ] ft\_putchar_fd;
[ ] ft\_putstr_fd;
[ ] ft\_putendl_fd;
[ ] ft\_putnbr_fd;

=== Testes ===

#include <stdio.h>
int     main(void)
{
        int     test = '0';
        int     test2 = '9';
        char    test3 = 'a';
        char    test4 = '=';
        char    test5 = '!';
        char    test6 = '#';

        printf("Teste 1 Valor [%d] :\n\tOriginal: %d", test, original_function(test));
        printf("\n\tft_isdigit: %d\n\n", ft_my_function(test));
        printf("Teste 2 Valor [%d] :\n\tOriginal: %d", test2, original_function(test2));
        printf("\n\tft_isdigit: %d\n\n", ft_my_function(test2));
        printf("Teste 3 Valor [%c] :\n\tOriginal: %d", test3, original_function(test3));
        printf("\n\tft_isdigit: %d\n\n", ft_my_function(test3));
        printf("Teste 4 Valor [%c] :\n\tOriginal: %d", test4, original_function(test4));
        printf("\n\tft_isdigit: %d\n\n", ft_my_function(test4));
        printf("Teste 5 Valor [%c] :\n\tOriginal: %d", test5, original_function(test5));
        printf("\n\tft_isdigit: %d\n\n", ft_my_function(test5));
        printf("Teste 6 Valor [%c] :\n\tOriginal: %d", test6, original_function(test6));
        printf("\n\tft_isdigit: %d\n\n", ft_my_function(test6));

        return (0);
}


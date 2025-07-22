# Libft
42's Common Core Libft

 - Functions List #<ctype.h>

- [x] ft_bzero - Test OK
- [ ] ft_atoi
- [x] ft_isalnum - Test OK
- [x] ft_isalpha - Test OK
- [x] ft_isascii - Test OK
- [x] ft_isdigit - Test OK
- [x] ft_isprint - Test OK
- [x] ft_memcpy - Test OK
- [ ] ft_memchr
- [ ] ft_memcmp
- [ ] ft_memmove
- [x] ft_memset - Test OK
- [x] ft_strlen - Test OK (with Warning)
- [x] ft_strlcpy - Test OK (with Warning)
- [ ] ft_strlcat
- [ ] ft_strchr
- [ ] ft_strncmp
- [ ] ft_strnstr
- [ ] ft_strrchr
- [x] ft_tolower - Test OK
- [x] ft_toupper - Test OK


 - with malloc()\n
[ ] ft_calloc;\n
	- If (nmemb || size) = 0; return (\*unique) -> free()
[ ] ft_strdup;\n

	- strlcpy, strlcat, bzero -> #include <bsd/string.h> -> cc -lbsd

 - Extra Functions

- [ ] `ft_itoa`
- [ ] `ft_putchar_fd`
- [ ] `ft_putendl_fd`
- [ ] `ft_putnbr_fd`
- [ ] `ft_putstr_fd`
- [ ] `ft_split`
- [ ] `ft_striteri`
- [ ] `ft_strjoin`
- [ ] `ft_strmapi`
- [ ] `ft_strtrin`
- [ ] `ft_substr`


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

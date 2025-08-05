# Libft

## 42's Common Core Libft

### Functions List #<ctype.h>

- [x] ft_atoi - Test OK
	int	ft_atoi(const char *nptr);

Converts the initial portion of the string pointed to by nptr to int.

Return value: Converted Value or 0 on error.


- [x] ft_bzero - Test OK
	void	ft_bzero(void *s, size_t n);

Erases the data in the n bytes of the memory starting at the location pointed to by s, by writing zeros (bytes containing '\0') to that area.

Return value: None.


- [x] ft_isalnum - Test OK
	int	ft_isalnum(int c);

Checks for an alphabetic character; it is equivalent to (isalpha(c) || isdigit(c)).


- [x] ft_isalpha - Test OK
	int	ft_isalpha(int c);

Checks for an alphabetic character; in the standard "C" locale, it is equivalent to (isupper || islower(c)).


- [x] ft_isascii - Test OK
	int	ft_isascii(int c);

Checks whether c is a 7-bit unsigned char value that fits into the ASCII character set.


- [x] ft_isdigit - Test OK
	int	ft_isdigit(int c);

Checks for a digit (0 through 9).


- [x] ft_isprint - Test OK
	int	ft_isprint(int c);
	
Checks for any printable character except space.


- [x] ft_memcpy - Test OK
	void	*ft_memcpy(void *dest, const void *src, size_t n);

Function copies n bytes from memory area src to memory area dest. The memory areas must not overlap. Use memmove if the memory areas do overlap.

Return value: Pointer to dest.


- [x] ft_memchr - Test OK
	void	*ft_memchr(const void *s, int c, size_t n);

The function scans the initial n bytes of the memory area pointed to by s for the first instance of c. Both c and the bytes of the memory area pointed to by s are interpreted as unsigned char.

Return value: Pointer to matching type to the matching byte or NULL of the character does not occur in the given memory area.


- [x] ft_memcmp - Test OK
	int	ft_memcmp(const void *s1, const void *s2, size_t n);

Function compares the first n bytes (each interpreted as unsigned char) of the memory areas s1 and s2.

Return value: Function returns an integer less than, equal to, or greater than zero if the first n bytes of s1 is found, respectively, to be less than, to match, or be greater than the first n bytes of s2. For a non-zero return value, the sign is determined by the sign of the difference between the first pair of bytes (interpreted as unsigned char) that differ is s1 and s2. If n is zero, the return value is zero.


- [x] ft_memmove - Test OK
	void	ft_memmove(void *dest, const void *src, size_t n);

Function copies n bytes from memory area src to memory area dest. The memory areas may overlap: copying takes place as though the bytes in src are first copied into a temporary array that does not overlap src or dest, and the bytes are then copied from the temporary array to dest.

Return value: Function returns a pointer to dest.


- [x] ft_memset - Test OK
	void	ft_memset(void *s, int c, size_t n);

Function fills the first n bytes of the memory area pointed to by s, with the constant byte c.

Return value: Function returns a pointer to memory area s.


- [x] ft_strlen - Test OK
	size_t	ft_strlen(const char *s);

Function calculates the lenght of the string pointed to by s, excluding the terminating null byte ('\0').

Return value: Function returns the number of bytes in the string pointed to by s.


- [x] ft_strlcpy - Test OK
	size_t	ft_strlcpy(char *dst, const char *src, size_t size);
	
Function copy strings up to size - 1 characters from the NUL-terminated string src to dst. Guarantee to NUL-terminate the result (as long as size is larger than 0). Note that a byte for the NUL should be included in size. Only operate on true "C" strings. That means that src must be NUL-terminated.

Return value: The length of src (size_t).


- [x] ft_strlcat - Test OK
	size_t	ft_strlcat(char *dst, const char *src, size_t size);

Function appends the NUL-terminated string src to the end of dst. Will append at most size - strlen(dst) - 1 bytes. Guarantee to NUL-terminate the result (as long as size is larger than 0 and as long as there is at least one byte free is dst). Note that a byte for the NUL should be included in size. Only operates on true "C" strings. That means that both src and dst must be NUL-terminated.
Return values: For sucessful concatenation: size_t src + dst.


- [x] ft_strchr - Test OK
	char	*ft_strchr(const char *s, int c);

Function returns a pointer to the first occurrence of the character c in the string s.
Return value: Pointer to the matched character or NULL if the character is not found. The terminating null byte is considered part of the string, so that if c is specified as '\0', these functions return a pointer to the terminator.


- [x] ft_strncmp - Test OK
	int	ft_strncmp(const char *s1, const char *s2, size_t n);

Function compares the first (at most) n bytes of s1 and s2. The locale is not taken into account. The comparison is done using unsigned characters.
Return value: Function return an integer less than, equal to, or greater than zero if s1 (or the first n bytes thereof) is found, respectively, to be less than, to match, or be greater than s2.


- [x] ft_strnstr - Test OK
	char	*ft_strnstr(const char *big, const char *little, size_t len);
	
Function locates the first occurrence of the null-terminated string little in the string big, where not more than len characters are searched. Characters that appear after a '\0' character are not searched.
Return value: If little is an empty string, big is returned; if little occurs nowhere in big, NULL is returned; otherwise a pointer to the first character of the first occurrence of little is returned.


- [x] ft_strrchr - Test OK
	char	*ft_strrchr(const char *s, int c);
	
Function returns a pointer to the last occurrence of the caracter c in the string s.
Return Values: Pointer to the matched character or NULL if the character is not found. The terminating null byte is considered part of the string, so that if c is specified as '\0', these functions return a pointer to the terminator.


- [x] ft_tolower - Test OK
	int	ft_tolower(int c);
	
If c is an uppercase letter, returns its lowercase equivalent, if a lowercase representation exists in the current locale. Otherwise returns c.


- [x] ft_toupper - Test OK
	int	ft_toupper(int c);

If c is an lowercase letter, returns its uppercase equivalent, if a uppercase representation exists in the current locale. Otherwise returns c.


 - with malloc()
[x] ft_calloc - Test OK
	void	*ft_calloc(size_t nmemb, size_t size);
	- If (nmemb || size) = 0; return (\*unique) -> free()


[x] ft_strdup; - Test OK
	char	ft_strdub(const char *s);
	- strlcpy, strlcat, bzero -> #include <bsd/string.h> -> cc -lbsd

 - Extra Functions

- [x] `ft_itoa` - Test OK
	char	*ft_itoa(int n);

- [x] `ft_putchar_fd` - Test OK
	void	ft_putchar_fd(char c, int fd);

- [x] `ft_putendl_fd` - Test OK
	void	ft_putendl_fd(char *s, int fd);

- [x] `ft_putnbr_fd` - Test OK
	void	ft_putnbr_fd(int n, int fd);

- [x] `ft_putstr_fd` - Test OK
	void	ft_putstr_fd(char *s, int fd);

- [x] `ft_split` - Test OK
	char **ft_split(char const *s, char c);

- [x] `ft_striteri` - Test OK
	void	ft_striteri(char *s, void (*f)(unsigned int, char*));

- [x] `ft_strjoin` - Test OK
	char	ft_strjoin(char const *s1, char const *s2);

- [x] `ft_strmapi` - Test OK
	char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

- [x] `ft_strtrin` - Test OK
	char	*ft_strtrim(char const *s1, char const *set);

- [x] `ft_substr` - Test OK
	char	*ft_substr(char const *s, insigned int start, size_t len);


==== Bonus ====

	typedef struct	s_list
	{
		void		*content;
		struct s_list	*next;
	}		t_list;

- [x] ft_lstnew - Test OK
	t_list	*ft_lstnew(void *content);

- [x] `ft_lstadd_front` - Test OK
	void	ft_lstadd_front(t_list **lst, t_list *new);

- [x] ft_lstsize - Test OK
	int	ft_lstsize(t_list *lst);

- [x] ft_lstlast - Test OK
	t_list	*ft_lstlast(t_list *lst);

- [x] `ft_lstadd_back` - Test OK
	void	ft_lstadd_back(t_list **lst, t_list new);

- [x] ft_lstdelone - Test OK
	void	ft_delone(t_list *lst, void (*del)(void *));

- [x] ft_lstclear - Test OK
	void	ft_lstclear(t_list **lst, void (*f)(void *));

- [x] ft_lstiter - Test OK
	void	ft_lstiter(t_list *lst, void (*f)(void *));

- [x] ft_lstmap - Test OK
	t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

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

#include <ctype.h>
#include <stdio.h>
#include "libft.h"

								// ft_isalpha_main

int main()
{
    char c;
    c = 'Q';
    printf("\nResult when uppercase alphabet is passed: %d", ft_isalpha(c));

    c = 'q';
    printf("\nResult when lowercase alphabet is passed: %d", ft_isalpha(c));

    c = '+';
    printf("\nResult when non-alphabetic character is passed: %d\n", ft_isalpha(c));
	

								//ft_isdigit_main

    char c;
    c='5';
    printf("Result when numeric character is passed: %d", ft_isdigit(c));

    c='+';
    printf("\nResult when non-numeric character is passed: %d\n", ft_isdigit(c));


								//t_isalnum_main

    int c;
    int result;

    c = '5';
    result = ft_isalnum(c);
    printf("When %c is passed, return value is %d\n", c, result);

    c = 'Q';
    result = ft_isalnum(c);
    printf("When %c is passed, return value is %d\n", c, result);

    c = 'l';
    result = ft_isalnum(c);
    printf("When %c is passed, return value is %d\n", c, result);

    c = '+';
    result = ft_isalnum(c);
    printf("When %c is passed, return value is %d\n", c, result);


								// ft_isascii_main

	char c;

    c = 'Q';
    printf("\n%d", ft_isascii(c));

    c = 'q';
    printf("\n%d", ft_isascii(c));

    c = '+';
    printf("\n%d", ft_isascii(c));

	 c = '\n';
    printf("\n%d", ft_isascii(c));

	c = ' ';
    printf("\n%d", ft_isascii(c));


								//ft_isprint_main

    char c;

    c = 'Q';
    printf("Result when a printable character %c is passed to isprint(): %d", c, ft_isprint(c));

    c = '\n';
    printf("\nResult when a control character %c is passed to isprint(): %d", c, ft_isprint(c));
   
   return(0);


								//ft_toupper_main

    char c;

    c = 'm';
    printf("%c -> %c", c, ft_toupper(c));

    c = 'D';
    printf("\n%c -> %c", c, ft_toupper(c));

    c = '9';
    printf("\n%c -> %c", c, ft_toupper(c));



								//ft_tolower_main

    char c, result;

    c = 'M';
    result = ft_tolower(c);
    printf("tolower(%c) = %c\n", c, result);

    c = 'm';
    result = ft_tolower(c);
    printf("tolower(%c) = %c\n", c, result);

    c = '+';
    result = ft_tolower(c);
    printf("tolower(%c) = %c\n", c, result);

    return 0;
}
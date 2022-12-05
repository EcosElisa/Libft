/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_string_h.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esobrinh <esobrinh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:59:40 by esobrinh          #+#    #+#             */
/*   Updated: 2022/10/08 20:55:17 by esobrinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <bsd/string.h>
#include <unistd.h>
#include <stdio.h>

								//ft_strlen_main

int main()
{
//     char a[20]="Program";
//     char b[20]={'P','r','o','g','r','a','m','\0'};

//     // using the %zu format specifier to print size_t
//     printf("Length of string a = %zu \n",ft_strlen(a));
//     printf("Length of string b = %zu \n",ft_strlen(b));


// 								//ft_strlcat_main


//     char    dest[25] = "Oie, ";
//     char    src[25] = "bom dia!";
//     int     size;

//     size = 8;
//     char    dest2[25] = "Oie, ";
//     char    src2[25] = "bom dia!";
//     int     size2;

//     size2 = 8;
//     printf("%zu\n", strlcat(dest, src, size));
//     printf("%zu\n", ft_strlcat(dest2, src2, size2));
//     printf("dest: %s\nsrc: %s\n", dest, src);


// 								//ft_putstr_fd_main


// 	char *str;
//     int fd;

//     fd = 1;
// 	str = "odeio programar";
// 	ft_putstr(str, fd);

// 									//ft_putendl_fd.c

// 	char *str;
// 	int fd;
// 	fd = 1;

//    	str = "odeio programar";
// 	ft_putendl_fd(str, fd);


// 									//ft_putnbr_fd_main


// 	int a = 555;
// 	int fd = 1;
// 	ft_putnbr_fd(a, fd);


// 									//ft_strlcpy_main

// 	char    dest[25] = "Oie, ";
//     char    src[25] = "bom dia!";
//     int     size;
// 	size = 8;

// 	char    dest2[25] = "Oie, ";
//     char    src2[25] = "bom dia!";
//     int     size2;
// 	size2 = 9;

//     printf("%zu\n", strlcpy(dest, src, size));
//     printf("dest: %s\nsrc: %s\n", dest, src);

// 	printf("%zu\n", ft_strlcpy(dest2, src2, size2));
// 	printf("dest2: %s\nsrc2: %s\n", dest2, src2);


// 									//ft_strchr_main


//   char buffer1[40] = "computer program 2i";
//   char * ptr;
//   int    ch = '2';
 
//   ptr = strchr( buffer1, ch );
//   printf( "The first occurrence of %c in '%s' is '%s'\n",
//             ch, buffer1, ptr );
 

//  char buffer2[40] = "computer program 2i";
//   char * ptr2;
//   int    ch2 = '2';
 
//   ptr2 = ft_strchr( buffer2, ch2 );
//   printf( "The first occurrence of %c in '%s' is '%s'\n",
//             ch2, buffer2, ptr2 );


// 									//ft_strrchr_main


// 	const char str[] = "This-is-just-a-test-string"; 
// 	char * ptr;
// 	char * ptr2;
// 	int    ch = 'l';
// 	int    ch2 = 'a' + 256;
   
   
//    	ptr = strrchr(str, ch); 
//    	printf("String starting from last occurrence of %c is: %s\n", ch, ptr);
	
// 	ptr = strrchr(str, ch2); 
//    	printf("String starting from last occurrence of %c is: %s\n", ch2, ptr);
	   
// 	ptr2 = ft_strrchr(str, ch); 
//    	printf("String starting from last occurrence of %c is: %s\n", ch, ptr2);
	      
// 	ptr2 = ft_strrchr(str, ch2); 
//    	printf("String starting from last occurrence of %c is: %s\n", ch2, ptr2);



// 								//ft_strncmp_main


//    char str1[50] = "eu amo chocolate";
//    char str2[50] = "eu amo pipoca";
//    int ret;
//    int ret1;


//    ret = strncmp(str1, str2, 15);

// 	printf("Value returned by strcmp() is: %d\n", ret);
//    if(ret < 0) {
//       printf("str1 is less than str2\n");
//    } else if(ret > 0) {
//       printf("str2 is less than str1\n");
//    } else {
//       printf("str1 is equal to str2\n");
//    }

//    ret1 = ft_strncmp(str1, str2, 15);

// 	printf("Value returned by ft_strcmp() is: %d\n", ret1);
//     if(ret1 < 0) {
//       printf("str1 is less than str2\n");
//    } else if(ret1 > 0) {
//       printf("str2 is less than str1\n");
//    } else {
//       printf("\nstr1 is equal to str2\n");
//    }
   


// 								//ft_strnstr_main


//   const char grande[] = "Foo Bar Baz";
//   const char pequena[] = "Bar";
// //   char * ptr;
//   char * ptr2;
//   int    len1 = 4;
//   int    len2= 6;
  
// //   ptr = strnstr(grande, pequena, len1);
// //   printf("The substring is: %s\n", ptr);
// //   ptr = strnstr(grande, pequena, len2);
// //   printf("The substring is: %s\n", ptr);
  
//   ptr2 = ft_strnstr(grande, pequena, len1);
//   printf("The substring is: %s\n", ptr2);
//   ptr2 = ft_strnstr(grande, pequena, len2);
//   printf("The substring is: %s\n", ptr2);
   


								//ft_bzero_main


    // char buffer[10];
    // char buffer1[5];
    
    
    // ft_bzero(buffer, 10);
    // bzero( buffer1, 5 );
    // return (0);


								//ft_memcpy_main
								
// char csrc[] = "GeeksforGeeks";
// char cdest[100];
// ft_memcpy(cdest, csrc, strlen(csrc)+1);
// printf("Copied string is %s", cdest);
 
// int isrc[] = {10, 20, 30, 40, 50};
// int n = sizeof(isrc)/sizeof(isrc[0]);
// int idest[n], i;
// ft_memcpy(idest, isrc, sizeof(isrc));
// printf("\nCopied array is ");
// for (i=0; i<n; i++)
//     printf("%d\n ", idest[i]);
// return 0;


								//ft_memmove_main

	// char dest[] = "oldstring";
	// const char src[]  = "newstring";

	// char dest1[] = "oldstring";
	// const char src2[]  = "newstring";

	// printf("Before memmove dest = %s, src = %s\n", dest, src);
	// memmove(dest, src, 1);
	// printf("After memmove dest = %s, src = %s\n", dest, src);

	// printf("Before memmove dest = %s, src = %s\n", dest1, src2);
	// ft_memmove(dest1, src2, 1);
	// printf("After memmove dest = %s, src = %s\n", dest1, src2);

	// return(0);


								//ft_memchr_main
								

								//ft_atoi_main

	char S[] = "-a90";
	printf("%d\n", ft_atoi(S));
	return 0;

}
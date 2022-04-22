//
// The strchr() function returns a pointer to the first occurrence of the character c in the string s.
//
// La función strchr() devuelve un puntero a la primera aparición del carácter c en la cadena s.
//
//

#include "libft.h"

char *ft_strchr ( const char *s, int c)
{
	
	while(*s++!='\0')
		{ 
			if(*s==c)
				return ((char *)s);
		}
	return(0);
} 

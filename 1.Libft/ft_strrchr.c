
//
// The strrchr() function returns a pointer to the last occurrence of the character c in the string s.
//
// La función strrchr() devuelve un puntero a la última aparición del carácter c en la cadena s.
//

#include "libft.h"

char *ft_strrchr(const char * s , int c )
{
	int tam;
	tam=ft_strlen(s);

	while(tam-->0)
		{
			if(s[tam]==c)
				return ((char *) s+tam);
		}
	return ((char *)s);
}
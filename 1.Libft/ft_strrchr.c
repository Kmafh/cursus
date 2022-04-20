#include "libft.h"

char *ft_strrchr(const char * s , int c )
{
	int tam;
	tam=strlen(s);

	while(tam-->0)
		{
			if(s[tam]==c)
				return ((char *) s+tam);
		}
	return ((char *)s);
}
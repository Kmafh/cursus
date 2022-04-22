
//
// The memset() function fills the first n bytes of the memory area pointed to by s with the constant byte c.
//
// La función memset() llena los primeros n bytes del área de memoria apuntada por s con el byte constante c.
//

#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
	int i;
	i=0;
	char *cad;
	cad=s;
	while(n-->0)
		{
			cad[i]=c;
			i++;
		}
	return (s);
}
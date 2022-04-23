
//
// The memset() function fills the first n bytes of the memory area pointed to by s with the constant byte c.
//
// La función memset() llena los primeros n bytes del área de memoria apuntada por s con el byte constante c.
//

#include "libft.h"
#include <stdio.h>
void *ft_memset(void *s, int c, size_t n)
{
	
	char *cad;
	int i;
	i=0;
	cad=s;
	while(i++<=(int)n)
		{
			*cad++=c;
			printf("%c:%c",*cad++,c);
			
		}
	return (s);
}
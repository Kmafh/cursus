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
	return (cad);
}
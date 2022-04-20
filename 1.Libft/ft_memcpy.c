#include "libft.h"

void *ft_memcpy(void *str1, const void *str2, size_t n)
{	
	char unsigned *pstr1;
	char const unsigned *pstr2;
	int i;
	i=0;
	if(!str1 && !str2)
		return 0;
	pstr1=str1;
	pstr2=str2;
	while(n-->0)
		{
			*pstr1++ = *pstr2;

		}
	return str1;
}
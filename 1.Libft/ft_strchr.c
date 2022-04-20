#include "libft.h"
char *ft_strchr ( const char *s, int c)
{
	int i;
	i=0;
	char  *dest;
	dest=s;
	while(s++)
		{
			if(*s==c)
				return (dest);
			
		}
	return(0);
} 
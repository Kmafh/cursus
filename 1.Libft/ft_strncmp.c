#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int i;
	i=0;

	while(n-->0)
		{
			if(s1[i]>s2[i])
				return(s1[i] - s2[i]);
			else if (s1[i]<s2[i])
				return(s1[i] - s2[i]);
				i++;
		}
	return (0);
}
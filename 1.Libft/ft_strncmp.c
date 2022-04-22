
//
// The strcmp() function compares the two strings s1 and s2. The locale 
// is not taken into account (for a locale-aware comparison, see strcoll(3)). The comparison is done using unsigned characters.
//
//La función strcmp() compara las dos cadenas s1 y s2. 
//

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int i;
	i=0;

	while(n-->0)
		{
			if(s1[i]>s2[i])
				return(s1[i] - s2[i]);
			if (s1[i]<s2[i])
				return(s1[i] - s2[i]);
			i++;
		}
	return (0);
}
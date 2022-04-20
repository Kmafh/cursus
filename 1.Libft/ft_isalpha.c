#include "libft.h"

int ft_isalpha(int c)
{
	int aux;
	aux=0;
	if((c>='a' && c<='z') || (c>='A' && c<='Z'))
		{
			return (1);
		}
	else{
		return (0);
	}

}
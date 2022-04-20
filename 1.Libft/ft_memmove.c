#include "libft.h"

void *ft_memmove(void *str1, const void *str2, size_t n)
{
	char unsigned *pstr1;
	char const unsigned *pstr2;
	/*
	* retornamos 0 si alguna de los punteros de memoria apuntan null.
	*/
	if(!str1 && !str2)
		return 0;
	/*
	* Si la cadena de origen en mayor a la cadena destino. Recogemos la memoria de atras en adelante.
	*/
	if(str1>str2)
		{
			pstr1=str1+n;
			pstr2=str2+n;
			while(n-->0)
			{
			*--pstr1 = *--pstr2;
			}
		}
		else
		{
			pstr1=str1;
			pstr2=str2;
			while(n-->0)
				{
					*pstr1++ = *pstr2++;

				}
		}
	return str1;
}


//
// The memmove() function copies n bytes from memory area src to memory area dest. The memory areas may overlap: copying 
// takes place as though the bytes in src are first copied into a temporary array that does not overlap src or dest,
// and the bytes are then copied from the temporary array to dest.
//
// La función memmove() copia n bytes del área de memoria src al área de memoria dest. Las áreas de memoria pueden superponerse: 
// la copia se lleva a cabo como si los bytes en src se copiaran primero en una matriz temporal que no se 
// superpone a src o dest, y luego los bytes se copian de la matriz temporal a dest.
//

#include "libft.h"

void *ft_memmove(void *str1, const void *str2, size_t n)
{
	char unsigned *pstr1;
	char const unsigned *pstr2;
	// retornamos 0 si alguna de los punteros de memoria apuntan null.
	
	if(!str1 && !str2)
		return 0;
	
	//Si la cadena de origen en mayor a la cadena destino. Recogemos la memoria de atras en adelante.
	
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
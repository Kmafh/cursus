
//
// The strlcpy() function copies up to size - 1 characters from the NUL-terminated string src to dst, NUL-terminating the result.
//
// La función strlcpy() copia hasta el tamaño - 1 caracteres de la cadena terminada en NUL src a dst, terminando en NUL 
// el resultado.
//

#include "libft.h"

size_t ft_strlcpy(char * dst, const char * src, size_t dstsize)
{
	unsigned int	i;
	unsigned int	cont;

	cont = 0;
	i = 0;
	while (src[cont] != '\0')
		cont++;
	if (dstsize != 0)
	{
		while (src[i] != '\0' && i < (dstsize - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (cont);
}

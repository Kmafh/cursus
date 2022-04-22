//
// Asigna memoria para una matriz de nmemb elementos de size bytes cada uno
// y devuelve un puntero a la memoria asignada. La memoria es puesta a CERO.
//
//


#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void *result;

	if (!(result = malloc(nmemb * size)))
		return (0);
	ft_bzero(result, nmemb * size);
	return (result);
}
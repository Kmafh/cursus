
//
//La función bzero() borra los datos en los n bytes de la memoria comenzando en la ubicación señalada por s,
//escribiendo ceros (bytes que contienen '\0') en esa área.
//


#include "libft.h"

void ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);

}
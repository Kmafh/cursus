
//
//The memchr() function scans the initial n bytes of the memory area pointed to by s for the first instance of c. 
//Both c and the bytes of the memory area pointed to by s are interpreted as unsigned char.
//
// La función memchr() escanea los n bytes iniciales del área de memoria apuntada por s para la primera instancia de c. 
// Tanto c como los bytes del área de memoria a la que apunta s se interpretan como caracteres sin signo.
//

#include "libft.h"
void *ft_memchr(const void *str, int c, size_t n)
{
      char const unsigned *pstr;
      pstr=str;
      while(n-->0)
            {
                       if(*pstr   == (unsigned char) c)
                       {

                              return (void *)pstr;
                       }                           
                  pstr++;
            }
      return NULL;

}
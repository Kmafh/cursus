
//
// The strnstr() function locates the first occurrence of the null-terminated string little in the string big,
// where not more than len characters are searched. Characters that appear after a ’\0’ character are not searched. 
//
// La función strnstr() localiza la primera aparición de la cadena terminada en nulo little en la cadena big,
// donde no se buscan más de len caracteres. Los caracteres que aparecen después de un carácter '\0' no se buscan.
//




#include "libft.h"
char *ft_strnstr(const char * s1, const char * s2, size_t len)
{
      size_t tam;
      char *cad;
      cad=(char *)s1;
      if(!s2)
            return (char *)s1;

      tam=ft_strlen(s2);
      while(*s1 && tam -->=len)
            {
                 if(*s1==*s2)
                        return(char *)s1;
                
            }
      return (void *)cad;
}
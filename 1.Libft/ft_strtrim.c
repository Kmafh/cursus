///////////////////////////////////////////////////////////////////////
//
//              ft_strtrim
//
//    char *ft_strtrim(char const *s1, char const *set);
//
//    s1: La string que debe ser recortada.
//
//    set: Los caracteres a eliminar de la string.
//
//    Valor devuelto La string recortada.
//    NULL si falla la reserva de memoria.
//
//    Descripción Elimina todos los caracteres de la string ’set’
//    desde el principio y desde el final de ’s1’, hasta
//    encontrar un caracter no perteneciente a ’set’. La
//    string resultante se devuelve con una reserva de
//    malloc(3)
//
//                      NO FUNCIONA
///////////////////////////////////////////////////////////////////////////

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
            int size_s1;
            int size_s2;
           
            size_s2=ft_strlen(set);
            size_s1=ft_strlen(s1);
      
            while(size_s1-->=0)
            {
                            if(ft_strchr(s1,*set++)!=0)
                            {
                            printf("adelante\n");
                                   s1++;
                            }
}
            while(s1[size_s1--]>=0)
            {
                              if(ft_strchr(s1,set[size_s2]!=0))
                              {
                                    printf("atras\n");
                                   size_s2--;
                              }
            }
           return ((char *)s1);
}
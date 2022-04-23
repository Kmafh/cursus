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
#include <stdio.h>
int ft_start(char const * str,char const * c)
  {     
      
      
       
       char *dest;

       dest=ft_strnstr(str,c,10);
        printf("Algo: %s\n",dest);
        
  return 0;
  }

  int ft_end(char const * str,char const * c)
  {
      int size_s;
      int i;

      i=0;
      size_s=ft_strlen(str);
      while(size_s-->0)
      {
            if(str[size_s]==c[size_s])
                return size_s-i;
      }

      return 0;

  }

  char *ft_strtrim(char const *s1, char const *set)
  {

      char * dest="paco";

       /* int start;
        int end;
        start=ft_start(s1,set);
        end=ft_end(s1,set);
       */ //if(!(dest=(char *)malloc((end-start)*sizeof(char))))
        //        return 0;
      //dest=ft_memcpy(dest,s1+start+1,end-1);
      printf("%s\n",s1);
      printf("\n");
      printf("%s\n",set);
      printf("\n");
      printf("Star: %d\n",ft_start(s1,set));
      printf("End: %d\n",ft_end(s1,set));
      printf("\n");
      return dest;
  }
///////////////////////////////////////////////////////////////////////////////////////////
//           ft_strjoin
//       char *ft_strjoin(char const *s1, char const *s2);
//
// Descripción Reserva (con malloc(3)) y devuelve una nueva string, formada por la 
// concatenación de ’s1’ y ’s2’.
// 
///////////////////////////////////////////////////////////////////////////////////////////





#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
      
      int result;
      char *dest="58";
      result=ft_strlen(s1)+ft_strlen(s2);
      if(!(dest=(char *)malloc(result* sizeof(char))))
            return (0);

      //dest=ft_strlcat((char *)s1,(char *)s2,result);
      ft_memcpy(dest, s1, ft_strlen(s1));
	ft_memcpy(dest + ft_strlen(s1), s2, ft_strlen(s2));
      dest[result] = '\0';
      return(dest);
}
//#include "libft.h"

//int main(void)
//{
       
 //     char *cad="PEPe";
//      char *cad2="Manuel";
 //     char *nueva;
        
 //     nueva=ft_strjoin(cad,cad2);
 //     printf("%s\n",nueva);
 //     return(0);
//}
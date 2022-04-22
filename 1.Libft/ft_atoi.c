
//
//La función atoi() convierte la parte inicial de la cadena a la que apunta nptr en int. 
//


#include "libft.h"
int ft_atoi(const char *nptr)
{     
      int sing;
      sing=0;
      int result;
      result=0;

      while((*nptr>=9 && *nptr<=13) || (*nptr==' ') )
                  nptr++;            
      while(*nptr=='+' || *nptr=='-')
            {
                  if(*nptr=='-')
                        sing++;
                nptr++;
            }
         
      while(ft_isdigit(*nptr))
            result= result * 10 + (*nptr++ - '0');
      if(sing>1)
            return 0;
      if(sing==1)
            return result *-1;
      return result;          
}
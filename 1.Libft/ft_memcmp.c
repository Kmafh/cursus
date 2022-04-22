
//
//The memcmp() function compares the first n bytes (each interpreted as unsigned char) of the memory areas s1 and s2.
//
//La función memcmp() compara los primeros n bytes (cada uno interpretado como carácter sin firmar) de las áreas de memoria 
//s1 y s2.
//

#include "libft.h"
int ft_memcmp(const void *str1, const void *str2, size_t n)
{
      const unsigned char *st1;
      const unsigned char *st2;
      int i;
      i=0;
      st1=(const unsigned char *)str1;
      st2=(const unsigned char *)str2;

      while(n-->0)
      {
            if(st1[i]>st2[i])
                  return (st1[i]-st2[i]);
            if(st1[i]<st2[i])
                  return (st1[i]-st2[i]);
            i++;
      }
      return(0);
}
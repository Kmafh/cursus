//
// The strdup() function returns a pointer to a new string which is a duplicate of the string s.
// Memory for the new string is obtained with malloc(3), and can be freed with free(3).
//
// La función strdup() devuelve un puntero a una nueva cadena que es un duplicado de la cadena s.
// La memoria para la nueva cadena se obtiene con malloc(3) y se puede liberar con free(3).
//


#include "libft.h"

char *ft_strdup(char *str)
{
    char *dest;
    int cant;
    int i;
    i=0;
    cant=ft_strlen(str);
    dest=(char *)malloc(cant*sizeof(char));
    if(dest==NULL)
        return NULL;
    while(i<cant)
    {
        dest[i]=str[i];
        i++;
    }
dest[i]='\0';
    str=dest;
    return str;
}
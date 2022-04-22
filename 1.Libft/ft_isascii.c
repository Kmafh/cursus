
//
// checks whether c is a 7-bit unsigned char value that fits into the ASCII character set.
// comprueba si c es un valor de caracteres sin signo de 7 bits que se ajusta al juego de caracteres ASCII.
//

#include "libft.h"

int isascii(int c)
{
	if(c>=0 && c<=127)
		return (1);
	else
		return (0);
}
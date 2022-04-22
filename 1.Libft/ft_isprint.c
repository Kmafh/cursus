
//
// checks for any printable character including space.
// comprueba cualquier carácter imprimible, incluido el espacio.
//

int ft_isprint(int c)
{
	if((c>=0 && c<=32) || c==127)
		return(1);
	else
		return(0);
}
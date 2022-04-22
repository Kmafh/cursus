//
// If c is an lowercase letter, toupper() returns its lowercase equivalent, if a lowercase representation
// exists in the current locale. 
//
// Si c es una letra minuscula, toupper() devuelve su equivalente en minúscula, si existe una representación 
// en minúscula en la configuración regional actual.
//

int ft_toupper(int c)
{
	if(c>='a' && c<='z')
		{
			return (c-32);
		}
	return(c);
}

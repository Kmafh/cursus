
//
// If c is an uppercase letter, tolower() returns its lowercase equivalent, if a lowercase representation
// exists in the current locale. 
//
// Si c es una letra mayúscula, tolower() devuelve su equivalente en minúscula, si existe una representación 
// en minúscula en la configuración regional actual.
//



int ft_tolower(int c)
{
	if(c>='A' && c<='Z')
		{
			return (c+32);
		}
	return(c);
}
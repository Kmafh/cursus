
//
//comprueba un carácter numérico.
//
int ft_isdigit(int c)
{
	int aux;
	aux=0;
	if(c>='0' && c<='9')
		{
			return (1);
		}
	else{
		return (0);
	}
	return (aux);

}
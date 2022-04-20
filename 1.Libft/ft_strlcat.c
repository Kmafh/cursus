#include "libft.h"

size_t ft_strlcat(char * dst, const char * src, size_t dstsize)
{
	size_t ddst;
	size_t dsrc;

	dsrc=ft_strlen(src);
	ddst=ft_strlen(dst);
	
	if(dsrc==dstsize)
	return(dstsize+dsrc);
	if(dsrc<dstsize - ddst)
	{
		
			ft_memcpy(dst+ddst,src,dsrc);
	}
	else
	{
		ft_memcpy(dst+ddst,src,dstsize-ddst-1);
		dst[dstsize-1]='\0';
	}
	return (dsrc+ddst);
}


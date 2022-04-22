#ifndef LIBFT_H
#define LIBFT_H

#include <unistd.h>
#include <stdlib.h>

//
//    Memory
//
void *ft_memset(void *s, int c, size_t n);
void ft_bzero(void *s, size_t n);
void *ft_memcpy(void *str1, const void *str2, size_t n);
void *ft_memmove(void *str1, const void *str2, size_t n);
void *ft_memchr(const void *str, int c, size_t n);
int ft_memcmp(const void *str1, const void *str2, size_t n);
void	*ft_calloc(size_t nmemb, size_t size);

//
// String
//

size_t ft_strlen(const char *str);
size_t ft_strlcpy(char * dst, const char * src, size_t dstsize);
size_t ft_strlcat(char * dst, const char * src, size_t dstsize);
char *ft_strrchr(const char * s , int c );
int ft_strncmp(const char *s1, const char *s2, size_t n);
char * ft_strnstr(const char * s1, const char * s2, size_t len);
char *ft_strchr ( const char *s, int c);
int ft_atoi(const char *nptr);
char *ft_strdup(char *str);

//
//    Type
//
int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
int ft_toupper(int c);


//  Additional functions.

//
//  String
//

char *ft_substr(char const *s, unsigned int start,size_t len);
char *ft_strjoin(char const *s1, char const *s2);
char *ft_strtrim(char const *s1, char const *set);

//
//write
//
#endif
#ifndef libft
#define libft

# include <unistd.h>
# include <stdlib.h>

int   ft_isalnum(int a);
int   ft_strlen(char *str);
int   ft_isalpha(char *str);
int   ft_toupper(int a);
int   ft_tolower(int x);
int   ft_isascii(int x);
int   ft_isdigit(int x);
int   ft_isprint(int x);

void  *ft_memmove(void *src,const void *dest, size_t len);
void  ft_memset(void *str,int x,size_t len);
void  ft_bzero(void *str,size_t len);
#endif
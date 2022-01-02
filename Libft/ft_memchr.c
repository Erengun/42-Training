#include <libft.h>

void *ft_memchr(const void *s, int c, size_t n)
{
      char *str;
      char x;
      int i;

      i = -1;
      str = ((char *)s);
      x = (char)c;
      while (++i < n)
            if(str[i] == x)
                  return(str+i);
      return (0);
}
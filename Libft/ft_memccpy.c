#include "libft.h"

void  *ft_memccpy(void *src, void *dest, int y, size_t x)
{
      int i;
      char *str;
      char *dst;
      char c;

      i = -1;
      str = (char *)src;
      dst = (char *)dest;
      c = (char *)y;
      while (++i < x)
      {
            str[i] = dst[i];
            if(dst[i] == c)
                  return (src+i);
      }
      return (0);     
}
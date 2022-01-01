#include "libft.h"

int   ft_strlen(char *str)
{
      int i;

      i = 0;
      while(str[i])
            i++;
      return (i);
}

size_t strlcat(char *dst, const char *src, size_t size)
{
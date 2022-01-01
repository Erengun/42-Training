#include "libft.h"

void  *ft_memcpy(void *dest, void *src, size_t len)
{
      int i;

      i = -1;
      while(++i < len)
            ((char *)dest)[i] = ((char *)src)[i];
      return (dest);
}
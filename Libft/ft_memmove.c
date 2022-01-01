#include "libft.h"

void  *ft_memmove(void *src,const void *dest, size_t len)
{
      int i;

      i = -1;
      if((char *)dest > (char *)src)
      {
            while (len-- >= 0)
                  ((char *)dest)[len] = ((char *)src)[len];
      }
      else
            while (++i >= 0)
                  ((char *)dest)[i] = ((char *)src)[i];
      return(dest);
}
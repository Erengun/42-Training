#include "libft.h"

void  ft_bzero(void *str,size_t len)
{
      ft_memset(str,'\0',len);
}
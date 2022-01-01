#include "libft.h"

void  ft_memset(void *str,int x,size_t len)
{
      int i;
      char *arr;

      arr = (char *)str;
      i = -1;
      while (++i < len)
            arr[i] = x;
      return(arr);
}
/*
int main(void)
{
      char deneme[11] = "Yelxo World";
      ft_memset(deneme,'a',3);
      printf("%s",deneme);

}
*/
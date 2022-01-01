#include <stdio.h>
#include "libft.h"

int main(void)
{
      char deneme[11] = "Hello World";
      ft_memmove(deneme,'l',3);
      printf("%s",deneme);
}
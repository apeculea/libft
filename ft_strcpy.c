#include "libft.h"

char  *ft_strcpy(char *dst, const char *src)
{
  char  *ret;
  
  if (!dst || !src)
    return (dst);
  ret = (char *)dst;
  while (*src)
    *dst++ = *src++;
   *dst = '\0';
   return (ret);
}

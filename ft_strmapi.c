

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>




char    *ft_strmapi(char const *s, char (*f)(unsigned int, char));
char    ft_takashima(unsigned int r, char c);




size_t  ft_strlen(const char *s)
{
  size_t  i;




  i = 0;
  while (s[i] != '\0')
  {
      i++;
  }
  return (i);
}




char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
  unsigned int    i;
  char            *src;


   if (s == NULL)
       return (NULL);
  src = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
  if (src == NULL)
      return (NULL);
  i = 0;
  while (s[i] != '\0')
  {
      src[i] = f(i, s[i]);
      i++;
  }
  src[i] = '\0';
  return (src);
}




char    ft_takashima(unsigned int r, char c)
{




   if (c >= 'a' && c <= 'z')
   {
       c = c - ('a' - 'A');
   }
   return (c);
  // while (c[r] != '\0')
  // {
  //  write(1, &str[i], 1);
  // }
}




int main(void)
{
  char    *s;
  char    *s1;




  s = NULL;
  s1 = ft_strmapi(s, &ft_takashima);
  printf("%s\n", s1);
  return (0);
}




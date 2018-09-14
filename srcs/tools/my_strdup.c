/*
** my_strdup.c for n4s in /home/eyra/CPE_2016_n4s/srcs/tools
** 
** Made by Manar Benkraouda
** Login   <manar.benkraouda@epitech.eu>
** 
** Started on  Fri May  5 16:08:06 2017 Manar Benkraouda
** Last update Fri May  5 17:43:20 2017 Manar Benkraouda
*/

#include <stdlib.h>
#include "n4s.h"

char	*my_strdup(char *str)
{
  int	i;
  char	*new;

  i = 0;
  if (str == NULL)
    return (NULL);
  if ((new = malloc(sizeof(char) * (my_strlen(str) + 1))) == NULL)
    return (NULL);
  while (str[i] != '\0')
    {
      new[i] = str[i];
      ++i;
    }
  new[i] = '\0';
  return (new);
}

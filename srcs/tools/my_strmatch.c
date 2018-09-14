/*
** my_strmatch.c for n4s in /home/eyra/CPE_2016_n4s/srcs/tools
** 
** Made by Manar Benkraouda
** Login   <manar.benkraouda@epitech.eu>
** 
** Started on  Fri May  5 16:10:17 2017 Manar Benkraouda
** Last update Thu Jun  1 13:48:55 2017 Manar Benkraouda
*/

#include <stddef.h>
#include "n4s.h"

int	my_strmatch(char *s1, char *s2)
{
  int	i;

  i = 0;
  if (my_strlen(s1) != my_strlen(s2))
    return (-1);
  while (s1[i] != '\0')
    {
      if (s1[i] != s2[i])
	return (-1);
      ++i;
    }
  return (1);
}

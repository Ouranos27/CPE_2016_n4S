/*
** my_strlen.c for n4s in /home/eyra/CPE_2016_n4s/srcs/tools
** 
** Made by Manar Benkraouda
** Login   <manar.benkraouda@epitech.eu>
** 
** Started on  Fri May  5 16:01:50 2017 Manar Benkraouda
** Last update Fri May  5 16:05:32 2017 Manar Benkraouda
*/

#include <stddef.h>

int	my_strlen(char *str)
{
  int	i;

  if (str == NULL)
    return (0);
  i = 0;
  while (str[i] != '\0')
    ++i;
  return (i);
}

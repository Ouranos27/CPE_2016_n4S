/*
** my_tablen.c for n4s in /home/eyra/CPE_2016_n4s/srcs/tools
** 
** Made by Manar Benkraouda
** Login   <manar.benkraouda@epitech.eu>
** 
** Started on  Fri May  5 16:02:52 2017 Manar Benkraouda
** Last update Fri May  5 16:06:11 2017 Manar Benkraouda
*/

#include <stddef.h>

int	my_tablen(char **tab)
{
  int	i;

  if (tab == NULL)
    return (0);
  i = 0;
  while (tab[i] != NULL)
    ++i;
  return (i);
}

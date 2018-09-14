/*
** my_int_tablen.c for n4s in /home/eyra/CPE_2016_n4s/srcs/tools
** 
** Made by Manar Benkraouda
** Login   <manar.benkraouda@epitech.eu>
** 
** Started on  Fri May  5 17:25:13 2017 Manar Benkraouda
** Last update Fri May  5 17:26:22 2017 Manar Benkraouda
*/

#include <stddef.h>

int	my_int_tablen(int *tab)
{
  int	i;

  i = 0;
  if (tab == NULL)
    return (0);
  while (tab[i] != -1)
    ++i;
  return (i);
}

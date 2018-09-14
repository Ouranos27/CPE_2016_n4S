/*
** my_puttab.c for n4s in /home/eyra/CPE_2016_n4s/srcs/tools
** 
** Made by Manar Benkraouda
** Login   <manar.benkraouda@epitech.eu>
** 
** Started on  Fri May  5 16:04:35 2017 Manar Benkraouda
** Last update Tue May  9 20:34:35 2017 Manar Benkraouda
*/

#include <stddef.h>
#include <stdio.h>
#include "n4s.h"

void	my_puttab(char **tab)
{
  int	i;

  if (tab == NULL)
    return ;
  i = 0;
  while (tab[i] != NULL)
    {
      printf("%s\n", tab[i]);
      ++i;
    }
}

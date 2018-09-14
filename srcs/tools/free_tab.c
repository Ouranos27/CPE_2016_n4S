/*
** free_tab.c for n4s in /home/eyra/CPE_2016_n4s/srcs/tools
** 
** Made by Manar Benkraouda
** Login   <manar.benkraouda@epitech.eu>
** 
** Started on  Fri May  5 17:23:32 2017 Manar Benkraouda
** Last update Thu Jun  1 14:13:40 2017 Manar Benkraouda
*/

#include <stdlib.h>

void	free_tab(char **tab)
{
  int	i;

  i = 0;
  if (tab == NULL)
    return ;
  while (tab[i] != NULL)
    {
      free(tab[i]);
      ++i;
    }
  free(tab);
}

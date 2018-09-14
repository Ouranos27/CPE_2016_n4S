/*
** response.c for n4s in /home/eyra/CPE_2016_n4s/srcs/parsing
** 
** Made by Manar Benkraouda
** Login   <manar.benkraouda@epitech.eu>
** 
** Started on  Tue May 30 13:07:44 2017 Manar Benkraouda
** Last update Thu Jun  1 14:09:22 2017 Manar Benkraouda
*/

#include <stdlib.h>
#include "n4s.h"

char	**response()
{
  char	*gnl;
  char	**tab;

  gnl = get_next_line(0);
  tab = my_str_to_wordtab(gnl, DELIM);
  free(gnl);
  return (tab);
}

int	wait_ok()
{
  char	**response_ret;
  int	flag;

  if ((response_ret = response()) == NULL)
    return (-1);
  flag = my_strmatch(response_ret[1], STATUS_OK);
  free_tab(response_ret);
  return (flag);
}

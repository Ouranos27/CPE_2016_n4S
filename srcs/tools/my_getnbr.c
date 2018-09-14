/*
** my_getnbr.c for lem_in in /home/eyra/CPE_2016_Lemin/srcs/tools
** 
** Made by Manar Benkraouda
** Login   <manar.benkraouda@epitech.eu>
** 
** Started on  Wed Apr 12 21:55:19 2017 Manar Benkraouda
** Last update Wed Apr 12 21:55:46 2017 Manar Benkraouda
*/

#include "lemin.h"

int	my_getnbr(char *nbr)
{
  int	i;
  int	var;

  i = 0;
  var = 0;
  if (nbr[0] == '-')
    i = i + 1;
  while (nbr[i] != '\0')
    {
      var = var * 10 + (nbr[i] - '0');
      i = i + 1;
    }
  if (nbr[0] == '-')
    var = -var;
  return (var);
}

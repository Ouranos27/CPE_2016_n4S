/*
** car_get_info_lidar.c for n4s in /home/eyra/CPE_2016_n4s/srcs/car_methods
** 
** Made by Manar Benkraouda
** Login   <manar.benkraouda@epitech.eu>
** 
** Started on  Tue May 30 13:16:56 2017 Manar Benkraouda
** Last update Thu Jun  1 13:48:31 2017 Manar Benkraouda
*/

#include <stdlib.h>
#include <unistd.h>
#include "n4s.h"

static int	fill_info_lidar(t_car *this, char **response)
{
  int		len;
  int		i;
  int		j;

  i = 3;
  j = 0;
  len = my_tablen(response) - 1;
  if (my_strmatch(response[1], STATUS_OK) == -1)
    return (-1);
  while (i < len && j < LIDAR_SPECTRUM)
    this->lidar[j++] = strtof(response[i++], NULL);
  this->lidar[j] = END;
  free_tab(response);
  return (0);
}

int	car_get_info_lidar(t_car *this)
{
  char	**response_return;

  if (this == NULL ||
      print_command(GET_INFO_LIDAR, NO_VALUE) == -1 ||
      (response_return = response()) == NULL)
    return (-1);
  return (fill_info_lidar(this, response_return));
}

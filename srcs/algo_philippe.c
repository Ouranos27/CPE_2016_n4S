/*
** algo.c for n4s in /home/eyra/CPE_2016_n4s/srcs
** 
** Made by Manar Benkraouda
** Login   <manar.benkraouda@epitech.eu>
** 
** Started on  Wed May 31 15:18:55 2017 Manar Benkraouda
** Last update Thu Jun  1 11:48:52 2017 Manar Benkraouda
*/

#include <stdlib.h>
#include "n4s.h"

static int	index_max(float *lidar)
{
  int		i;
  int		max;
  int		max_index;

  i = 1;
  max_index = 0;
  max = lidar[max_index];
  while (lidar[i] != END)
    {
      if (lidar[i] >= max)
	{
	  max = lidar[i];
	  max_index = i;
	}
      ++i;
    }
  return (max_index);
}

float	algo(t_car *car)
{
  float	ret;

  if (car->lidar[15] >= 1750.0)
    ret = (car->lidar[0] - car->lidar[31]) < 0 ? 0.005 : -0.005;
  else if (car->lidar[15] >= 1250.0)
    ret = (car->lidar[0] - car->lidar[31]) < 0 ? 0.05 : -0.05;
  else if (car->lidar[15] >= 750.0)
    ret = (car->lidar[0] - car->lidar[31]) < 0 ? 0.1 : -0.1;
  else if (car->lidar[15] >= 550.0)
    ret = (car->lidar[0] - car->lidar[31]) < 0 ? 0.2 : -0.2;
  else if (car->lidar[15] >= 350.0)
    ret = (car->lidar[0] - car->lidar[31]) < 0 ? 0.3 : -0.3;
  else
    ret = (car->lidar[0] - car->lidar[31]) < 0 ? 0.5 : -0.5;
  return (-ret);
}

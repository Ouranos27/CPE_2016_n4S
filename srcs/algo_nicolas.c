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

}

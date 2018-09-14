/*
** new_car_module.c for n4s in /home/eyra/CPE_2016_n4s/srcs
** 
** Made by Manar Benkraouda
** Login   <manar.benkraouda@epitech.eu>
** 
** Started on  Mon May 29 12:23:05 2017 Manar Benkraouda
** Last update Wed May 31 10:04:35 2017 Manar Benkraouda
*/

#include <stdlib.h>
#include "n4s.h"

void	init_lidar(float *lidar)
{
  int	i;

  i = 0;
  while (i < LIDAR_SPECTRUM)
    lidar[i++] = -1.f;
}

t_car	*new_car_module()
{
  t_car	*new;

  if ((new = malloc(sizeof(t_car))) == NULL)
    return (NULL);
  init_lidar(new->lidar);
  new->forward = &car_forward;
  new->backwards = &car_backwards;
  new->wheels_dir = &car_wheels_dir;
  new->idle = &car_idle;
  new->get_info_lidar = &car_get_info_lidar;
  new->get_speed = NULL;
  new->get_wheels = NULL;
  new->get_max_speed = NULL;
  new->get_min_speed = NULL;
  new->cycle_wait = &car_cycle_wait;
  return (new);
}

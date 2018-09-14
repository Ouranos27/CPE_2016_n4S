/*
** program.c for n4s in /home/eyra/CPE_2016_n4s/srcs
** 
** Made by Manar Benkraouda
** Login   <manar.benkraouda@epitech.eu>
** 
** Started on  Mon May 29 12:34:12 2017 Manar Benkraouda
** Last update Sun Jun  4 17:05:11 2017 Manar Benkraouda
*/

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "n4s.h"

static int	emergency_stop(t_car *car)
{
  int		i;

  i = 0;
  if (car->lidar[0] == -1.f)
    return (0);
  while (i < 32)
    if (car->lidar[i++] < 70.0)
      return (1);
  return (0);
}

static float	global_speed(float *lidar)
{
  int		i;
  float		ret;

  i = 0;
  ret = 0;
  while (lidar[i] != END)
    ret += lidar[i++];
  ret = (ret / (LIDAR_SPECTRUM - 1)) / 3010.f * 2.f;
  if (ret > 1.f)
    ret = 1.f;
  else if (ret < 0.f)
    ret = 0.f;
  return (ret);
}

t_car	*init()
{
  t_car	*car;

  if ((car = new_car_module()) == NULL)
    return (NULL);
  print_command(START_SIMULATION, NO_VALUE);
  if (wait_ok() == -1)
    {
      free(car);
      return (NULL);
    }
  return (car);
}

int	stop(t_car *car, int flag)
{
  if (flag)
    {
      free(car);
      return (-1);
    }
  if (car->idle(car) ==- -1)
    {
      free(car);
      return (-1);
    }
  if (car->cycle_wait(car, "20") == -1)
    {
      free(car);
      return (-1);
    }
  free(car);
  print_command(STOP_SIMULATION, NO_VALUE);
  if (wait_ok() == -1)
    return (-1);
  return (0);
}

int	program()
{
  t_car	*car;
  char	speed[__SIZEOF_FLOAT__];
  float	g_speed;
  float	g_turn;
  char	turn[__SIZEOF_FLOAT__];

  if ((car = init()) == NULL)
    return (-1);
  while (INF)
    {
      if (car->get_info_lidar(car) == -1)
	return (stop(car, 1));
      sprintf(speed, "%f", (g_speed = (car->lidar[15] >= 240.0) ?
			    global_speed(car->lidar)
			    : global_speed(car->lidar) / 2.f));
      dprintf(2, "%s\n", speed);
      sprintf(turn, "%f", (g_turn = algo(car)));
      if (car->forward(car, speed) == -1)
	return (stop(car, 1));
      if (car->wheels_dir(car, turn) == -1)
	return (stop(car, 1));
      if (emergency_stop(car))
	break ;
    }
  return (stop(car, 0));
}

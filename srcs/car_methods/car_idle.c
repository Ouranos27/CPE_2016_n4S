/*
** car_idle.c for n4s in /home/eyra/CPE_2016_n4s/srcs/car_methods
** 
** Made by Manar Benkraouda
** Login   <manar.benkraouda@epitech.eu>
** 
** Started on  Tue May  9 21:09:40 2017 Manar Benkraouda
** Last update Sun Jun  4 15:19:03 2017 Manar Benkraouda
*/

#include <stdlib.h>
#include "n4s.h"

int	car_idle(t_car *this)
{
  if (this == NULL)
    return (-1);
  if (this->forward(this, IDLE) == -1)
    return (-1);
  if (this->wheels_dir(this, IDLE) == -1)
    return (-1);
  return (0);
}

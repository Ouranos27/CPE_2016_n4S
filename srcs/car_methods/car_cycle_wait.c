/*
** car_cycle_wait.c for n4s in /home/eyra/CPE_2016_n4s/srcs/car_methods
** 
** Made by Manar Benkraouda
** Login   <manar.benkraouda@epitech.eu>
** 
** Started on  Mon May 29 15:01:31 2017 Manar Benkraouda
** Last update Wed May 31 13:19:08 2017 Manar Benkraouda
*/

#include <stdlib.h>
#include "n4s.h"

int	car_cycle_wait(t_car *this, char *value)
{
  if (this == NULL)
    return (-1);
  print_command(CYCLE_WAIT, value);
  return (wait_ok());
}

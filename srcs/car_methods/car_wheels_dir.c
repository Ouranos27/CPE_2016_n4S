/*
** car_forward.c for n4s in /home/eyra/CPE_2016_n4s/srcs/car_methods
** 
** Made by Manar Benkraouda
** Login   <manar.benkraouda@epitech.eu>
** 
** Started on  Tue May  9 19:48:56 2017 Manar Benkraouda
** Last update Wed May 31 13:21:02 2017 Manar Benkraouda
*/

#include <stdlib.h>
#include "n4s.h"

int	car_wheels_dir(t_car *this, char *value)
{
  if (this == NULL)
    return (-1);
  print_command(WHEELS_DIR, value);
  return (wait_ok());
}

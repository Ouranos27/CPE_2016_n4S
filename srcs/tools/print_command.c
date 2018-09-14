/*
** print_command.c for n4s in /home/eyra/CPE_2016_n4s/srcs/tools
** 
** Made by Manar Benkraouda
** Login   <manar.benkraouda@epitech.eu>
** 
** Started on  Tue May  9 20:07:06 2017 Manar Benkraouda
** Last update Wed May 31 12:23:56 2017 Manar Benkraouda
*/

#include <stdio.h>
#include "n4s.h"

int	print_command(char *command, char *value)
{
  if (command == NULL)
    return (-1);
  if (value == NO_VALUE)
    {
      my_putstr(command, 1);
      my_putstr("\n", 1);
    }
  else
    {
      my_putstr(command, 1);
      my_putstr(":", 1);
      my_putstr(value, 1);
      my_putstr("\n", 1);
    }
  return (0);
}

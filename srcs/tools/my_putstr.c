/*
** my_putstr.c for n4s in /home/eyra/CPE_2016_n4s/srcs/tools
** 
** Made by Manar Benkraouda
** Login   <manar.benkraouda@epitech.eu>
** 
** Started on  Wed May 31 11:53:46 2017 Manar Benkraouda
** Last update Wed May 31 12:00:15 2017 Manar Benkraouda
*/

#include <unistd.h>

void	my_putstr(char *str, int fd)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    ++i;
  write(fd, str, i);
}

/*
** get_next_line.c for get_next_line in /home/nicolas/CPE_2016/CPE_2016_getnextline
** 
** Made by Nicolas Marsan
** Login   <nicolas.marsan@epitech.eu>
** 
** Started on  Mon Feb 13 13:29:08 2017 Nicolas Marsan
** Last update Wed May 31 10:52:02 2017 Manar Benkraouda
*/

#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "get_next_line.h"

char		character(const int fd)
{
  static char	buff[READ_SIZE];
  static char	*str;
  static int	ret = 0;
  char		c;

  if (ret == 0)
    {
      if ((ret = read(fd, buff, READ_SIZE)) < 0)
	return ('\0');
      str = buff;
    }
  c = *str;
  str++;
  ret--;
  return (c);
}

char		*my_realloc(char *str, size_t size)
{
  char		*tmp;
  unsigned int	i;

  if ((tmp = malloc(sizeof(char) * size)) == NULL)
    return (NULL);
  i = 0;
  while (str[i] != '\0' && i < size)
    {
      tmp[i] = str[i];
      i++;
    }
  tmp[i] = '\0';
  free(str);
  return (tmp);
}

char	*clean_n(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    {
      if (str[i] == '\n')
	{
	  str[i] = '\0';
	  return (str);
	}
      i++;
    }
  return (str);
}

char	*get_next_line(const int fd)
{
  char	c;
  char	*str;
  int	i;

  i = 0;
  if (fd == -1)
    return (NULL);
  if ((str = malloc(sizeof(char) * READ_SIZE + 1)) == NULL)
    return (NULL);
  if ((c = character(fd)) == 0)
    return (NULL);
  while (c != '\n' && c != '\0')
    {
      str[i] = c;
      i++;
      c = character(fd);
      if (i == READ_SIZE)
	{
	  if ((str = my_realloc(str, i + READ_SIZE)) == NULL)
	    return (NULL);
	}
    }
  str[i] = '\0';
  return (clean_n(str));
}

/*
** my_str_to_wordtab.c for corewar_bootstrap in /home/eyra/CPE_2016_corewar_bootstrap/part2/part1/src/tools
** 
** Made by Manar Benkraouda
** Login   <manar.benkraouda@epitech.eu>
** 
** Started on  Thu Mar 23 11:18:56 2017 Manar Benkraouda
** Last update Tue May 30 13:03:35 2017 Manar Benkraouda
*/

#include <stdlib.h>

int	nbr_of_lines(char *str, char delim)
{
  int	i;
  int	cnt;

  i = 0;
  cnt = 1;
  while (str[i] != '\0')
    {
      if (str[i] == delim)
	++cnt;
      ++i;
    }
  return (cnt);
}

char	*cpy_next_line(char *str, int *i, char delim)
{
  int	size;
  char	*new;
  int	new_i;

  new_i = 0;
  size = *i;
  while (str[size] != '\0' && str[size] != delim)
    ++size;
  if ((new = malloc(sizeof(char) * (size + 1))) == NULL)
    return (NULL);
  while (str[*i] != '\0' && str[*i] != delim)
    {
      new[new_i] = str[*i];
      ++(*i);
      ++new_i;
    }
  new[new_i] = '\0';
  return (new);
}

char	**my_str_to_wordtab(char *str, char delim)
{
  char	**tab;
  int	y;
  int	i;

  if (str == NULL)
    return (NULL);
  i = 0;
  y = nbr_of_lines(str, delim) + 1;
  if ((tab = malloc(sizeof(char *) * y)) == NULL)
    return (NULL);
  y = 0;
  while (str[i] != '\0')
    {
      if ((tab[y] = cpy_next_line(str, &i, delim)) == NULL)
	return (NULL);
      ++y;
      if (str[i] == '\0')
	break ;
      ++i;
    }
  tab[y] = NULL;
  return (tab);
}

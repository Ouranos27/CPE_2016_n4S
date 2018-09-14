/*
** my_realloc.c for n4s in /home/eyra/CPE_2016_n4s/srcs/tools
** 
** Made by Manar Benkraouda
** Login   <manar.benkraouda@epitech.eu>
** 
** Started on  Fri May  5 16:46:00 2017 Manar Benkraouda
** Last update Fri May  5 17:44:25 2017 Manar Benkraouda
*/

#include <stdlib.h>
#include "n4s.h"

char	*add_one_char_array(char *str, char c)
{
  int	i;
  char	*new;

  if (str == NULL)
    return (NULL);
  i = 0;
  if ((new = malloc(sizeof(char) * (my_strlen(str) + 2))) == NULL)
    return (NULL);
  while (str[i] != '\0')
    {
      new[i] = str[i];
      ++i;
    }
  str[i] = c;
  str[i + 1] = '\0';
  free(str);
  return (new);
}

char	**add_one_double_char_array(char **tab, char *str)
{
  int	i;
  char	**new;

  i = 0;
  if (tab == NULL)
    return (NULL);
  if ((new = malloc(sizeof(char *) * (my_tablen(tab) + 2))) == NULL)
    return (NULL);
  while (tab[i] != NULL)
    {
      if ((new[i] = my_strdup(tab[i])) == NULL)
	return (NULL);
      ++i;
    }
  if ((new[i] = my_strdup(str)) == NULL)
    return (NULL);
  new[i + 1] = NULL;
  free_tab(tab);
  return (new);
}

int	*add_one_int_array(int *array, int n)
{
  int	i;
  int	*new;

  i = 0;
  if (array == NULL)
    return (NULL);
  if ((new = malloc(sizeof(int) * (my_int_tablen(array) + 2))) == NULL)
    return (NULL);
  while (array[i] != END)
    {
      new[i] = array[i];
      ++i;
    }
  new[i] = n;
  new[i + 1] = -1;
  free(array);
  return (new);
}

t_add_one	addOne =
  {
    &add_one_char_array,
    &add_one_double_char_array,
    &add_one_int_array,
  };

extern t_add_one	addOne;

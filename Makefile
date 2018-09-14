##
## Makefile for n4s in /home/eyra/CPE_2016_n4s
## 
## Made by Manar Benkraouda
## Login   <manar.benkraouda@epitech.eu>
## 
## Started on  Tue May 30 09:54:56 2017 Manar Benkraouda
## Last update Sun Jun  4 15:02:49 2017 Manar Benkraouda
##

NAME	= ai

CC	= gcc

RM	= rm -f

SRCS	= ./srcs/car_methods/car_backwards.c \
	  ./srcs/car_methods/car_cycle_wait.c \
	  ./srcs/car_methods/car_forward.c \
	  ./srcs/car_methods/car_idle.c \
	  ./srcs/car_methods/car_wheels_dir.c \
	  ./srcs/car_methods/car_get_info_lidar.c \
	  ./srcs/main.c \
	  ./srcs/new_car_module.c \
	  ./srcs/program.c \
	  ./srcs/algo_manar.c \
	  ./srcs/parsing/response.c \
	  ./srcs/tools/free_tab.c \
	  ./srcs/tools/my_putstr.c \
	  ./srcs/tools/get_next_line.c \
	  ./srcs/tools/my_int_tablen.c \
	  ./srcs/tools/my_puttab.c \
	  ./srcs/tools/my_realloc.c \
	  ./srcs/tools/my_strdup.c \
	  ./srcs/tools/my_strlen.c \
	  ./srcs/tools/my_strmatch.c \
	  ./srcs/tools/my_tablen.c \
	  ./srcs/tools/print_command.c \
	  ./srcs/tools/my_str_to_wordtab.c

OBJS	= $(SRCS:.c=.o)

CFLAGS = -I./include/
CFLAGS += -W -Wall -Wextra

all: $(NAME)

$(NAME): $(OBJS)
	 $(CC) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

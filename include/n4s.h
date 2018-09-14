/*
** n4s.h for n4s in /home/eyra/CPE_2016_n4s/include
** 
** Made by Manar Benkraouda
** Login   <manar.benkraouda@epitech.eu>
** 
** Started on  Tue May  2 17:24:06 2017 Manar Benkraouda
** Last update Sun Jun  4 11:45:57 2017 Manar Benkraouda
*/

#ifndef N4S_H_
# define N4S_H_

# include <stddef.h>

/*
** |------ DEFINES ------|
*/

# define END			(-1.f)
# define INF			(42)

# define FORWARD		("1.0")
# define BACKWARDS		("1.0")
# define RIGHT			("1.0")
# define LEFT			("-1.0")
# define IDLE			("0.0")

# define LIDAR_SPECTRUM		(33)

# define NO_VALUE		(NULL)

# define DELIM			(':')

/*
** |------ TOOLS FUNCTIONS ------|
*/

int	my_strlen(char *str);
void	my_putchar(char c);
void	my_putstr(char *str, int fd);
void	my_puttab(char **tab);
int	my_tablen(char **tab);
int	my_strmatch(char *s1, char *s2);
char	*my_strdup(char *str);
void	free_tab(char **tab);
int	my_int_tablen(int *tab);
int	print_command(char *command, char *value);
char	**my_str_to_wordtab(char *str, char delim);
char	*get_next_line(int fd);

typedef struct	s_add_one
{
  char		*(*charArray)(char *str, char c);
  char		**(*doubleCharArray)(char **tab, char *str);
  int		*(*intArray)(int *array, int n);
}		t_add_one;

/*
** |------ COMMANDS LIST ------|
*/

# define START_SIMULATION	("START_SIMULATION")
# define STOP_SIMULATION	("STOP_SIMULATION")
# define CAR_FORWARD		("CAR_FORWARD")
# define CAR_BACKWARDS		("CAR_BACKWARDS")
# define WHEELS_DIR		("WHEELS_DIR")
# define GET_INFO_LIDAR		("GET_INFO_LIDAR")
# define GET_CURRENT_SPEED	("GET_CURRENT_SPEED")
# define GET_CURRENT_WHEELS	("GET_CURRENT_WHEELS")
# define CYCLE_WAIT		("CYCLE_WAIT")
# define GET_CAR_SPEED_MAX	("GET_CAR_SPEED_MAX")
# define GET_CAR_SPEED_MIN	("GET_CAR_SPEED_MIN")
# define GET_INFO_SIMTIME	("GET_INFO_SIMTIME")

/*
** |------ RESPONSES ------|
*/

/*
**		|------ FUNCTIONS ------|
*/

char	**response();
int	wait_ok();

/*
**		|--- VALUE_ID ---|
*/

# define ID_0	(0)
# define ID_1	(1)
# define ID_2	(2)
# define ID_3	(3)
# define ID_4	(4)
# define ID_5	(5)
# define ID_6	(6)
# define ID_7	(7)
# define ID_8	(8)
# define ID_9	(9)
# define ID_10	(10)
# define ID_11	(11)
# define ID_12	(12)
# define ID_13	(13)
# define ID_14	(14)
# define ID_15	(15)
# define ID_16	(16)
# define ID_17	(17)
# define ID_18	(18)
# define ID_19	(19)
# define ID_20	(20)
# define ID_21	(21)
# define ID_22	(22)
# define ID_23	(23)
# define ID_24	(24)
# define ID_25	(25)

/*
**		|--- STATUS ---|
*/

# define STATUS_OK	("OK")
# define STATUS_KO	("KO")

/*
**		|--- ID_STR ---|
*/

# define ID_STR_0	("Simulation has not been launched")
# define ID_STR_1	("No errors so far")
# define ID_STR_2	("Simulation running")
# define ID_STR_3	("Error. No details can be provided atm")
# define ID_STR_4	("Checkpoint error detected")
# define ID_STR_5	("SimComponent Loading Failure")
# define ID_STR_6	("Network operation Failure")
# define ID_STR_7	("Server-side Error")
# define ID_STR_8	("Client-side Error")
# define ID_STR_9	("EOF reached")
# define ID_STR_10	("Simulation was correctly ended")
# define ID_STR_11	("Empty command")
# define ID_STR_12	("Unknown command")
# define ID_STR_13	("Wrong arguments provided. Please refer to protocol")
# define ID_STR_14	("Too many args provided with command. Please refer to protocol")
# define ID_STR_15	("Pipeline failure")
# define ID_STR_16	("Unexpected command argument's value")
# define ID_STR_17	("Camera infoget failure")
# define ID_STR_18	("Command not found")
# define ID_STR_19	("Simulation already up and running")
# define ID_STR_20	("CYCLE_DONE")
# define ID_STR_21	("Sensor reading failure")
# define ID_STR_22	("Scene must contain at least 3 CPs")
# define ID_STR_23	("Timer Init Failure")
# define ID_STR_24	("Timer get Failure")
# define ID_STR_25	("Failed to load Map")

/*
**		|--- ADDITIONAL_INFO ---|
*/

# define F_CP_CLEARED	("First CP Cleared")
# define CP_CLEARED	("CP Cleared")
# define LAP_CLEARED	("Lap Cleared")
# define TRACK_CLEARED	("Track Cleared")

/*
**	|------ CAR OBJECT  ------|
*/

/*
**		|--- CAR STRUCT  ---|
*/

typedef struct	s_car
{
  float		lidar[LIDAR_SPECTRUM];
  int		(*forward)(struct s_car *this, char *value);
  int		(*backwards)(struct s_car *this, char *value);
  int		(*wheels_dir)(struct s_car *this, char *value);
  int		(*idle)(struct s_car *this);
  int		(*get_info_lidar)(struct s_car *this);
  int		(*get_speed)(struct s_car *this);
  int		(*get_wheels)(struct s_car *this);
  int		(*get_max_speed)(struct s_car *this);
  int		(*get_min_speed)(struct s_car *this);
  int		(*cycle_wait)(struct s_car *this, char *value);
}		t_car;

/*
**		|--- CAR METHODS ---|
*/

int	car_forward(t_car *this, char *value);
int	car_backwards(t_car *this, char *value);
int	car_wheels_dir(t_car *this, char *value);
int	car_idle(t_car *this);
int	car_get_info_lidar(t_car *this);
int	car_get_speed(t_car *this);
int	car_get_wheels(t_car *this);
int	car_get_max_speed(t_car *this);
int	car_get_min_speed(t_car *this);
int	car_cycle_wait(t_car *this, char *value);

/*
** |------ AI ------|
*/

float	algo(t_car *car);
float	algo_versatile(t_car *car);
int	program();
t_car	*new_car_module();

#endif	/* !N4S_H_ */

#nom de l'executable
NAME =  minishell

#compiler ; compilateur, flag de debogue, flag d'exigence
CC = gcc
DFLAGS = -g3
CFLAGS = -Wall -Werror -Wextra

#fichiers sources (categorie_nomdefonction) et objets
SRCS = main.c \
	main_s.c \
	main_process.c \

OBJS = $(SRCS:.c=.o)

#include
INCLUDELIBFT = libft/libft.a

#les fichiers obj prennent le nom des fichiers sources "*.c"
%.o : %.c
	$(CC) $(CFLAGS) $(DFLAG) -c $< -o $(<:.c=.o)

${NAME}: ${OBJS}
	$(CC) $(CFLAGS) $(DFLAG) $(OBJS) -o $(NAME)

all : $(NAME)

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

test : re
	valgrind --tool=helgrind ./philo 5 200 20 20 3

norm:
	norminette

re : fclean all

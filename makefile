#nom de l'executable
NAME =  minishell

#compiler ; compilateur, flag de debogue, flag d'exigence
CC = gcc
CFLAGS = -Wall -Werror -Wextra -g3 -g

#fichiers sources (categorie_nomdefonction) et objets
SRCS = 0_main.c \
	0_minishell.c \
	b_builtins.c \
	b_cd.c \
	b_echo.c \
	b_exit.c \
	b_exitverify.c \
	b_export.c \
	b_pwd.c \
	b_unset.c \
	e_exec.c \
	p_parsing.c \
	p_tokenize.c \
	u_freeall.c \
	u_freeexec.c \
	u_freeparsing.c \
	u_freetokens.c \
	u_s.c \

OBJS = $(SRCS:.c=.o)

#include
INCLUDES = libft/libft.a -lreadline

#les fichiers obj prennent le nom des fichiers sources "*.c"
%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

${NAME}: ${OBJS}
	make -C libft/
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME) $(INCLUDES)

all : $(NAME)

clean :
	rm -rf $(OBJS)
	@cd libft/ && $(MAKE) clean

fclean : clean
	rm -rf $(NAME)
	@cd libft/ && $(MAKE) fclean

norm:
	norminette

re : fclean all

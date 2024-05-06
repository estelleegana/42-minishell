NAME = libft.a

CFLAGS = -Wall -Wextra -Werror -fPIE

SRCS = basics/ft_atoi.c \
	basics/ft_bzero.c \
	basics/ft_calloc.c \
	basics/ft_isalnum.c \
	basics/ft_isalpha.c \
	basics/ft_isascii.c \
	basics/ft_isdigit.c \
	basics/ft_isprint.c \
	basics/ft_itoa.c \
	basics/ft_memchr.c \
	basics/ft_memcmp.c \
	basics/ft_memcpy.c \
	basics/ft_memmove.c \
	basics/ft_memset.c \
	basics/ft_putchar_fd.c \
	basics/ft_putendl_fd.c \
	basics/ft_putnbr_fd.c \
	basics/ft_putstr_fd.c \
	basics/ft_split.c \
	basics/ft_strchr.c \
	basics/ft_strcmp.c \
	basics/ft_strdup.c \
	basics/ft_striteri.c \
	basics/ft_strjoin.c \
	basics/ft_strlcat.c \
	basics/ft_strlcpy.c \
	basics/ft_strlen.c \
	basics/ft_strmapi.c \
	basics/ft_strncmp.c \
	basics/ft_strnstr.c \
	basics/ft_strrchr.c \
	basics/ft_strtrim.c \
	basics/ft_substr.c \
	basics/ft_tolower.c \
	basics/ft_toupper.c \
	ft_printf/ft_printf.c \
	ft_printf/ft_printnbr.c \
	ft_printf/ft_printstr.c \
	ft_printf/ft_printuns.c \
	ft_printf/ft_printptr.c \
	ft_printf/ft_printhexa.c \

OBJS = ${SRCS:.c=.o}

%.o : %.c
	cc ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}: ${OBJS}
	ar rc ${NAME} ${OBJS}
	ranlib ${NAME}

all : ${NAME}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all

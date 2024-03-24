NAME = libftprintf.a
SRCS := ft_printf.c \
		ft_printf_utils.c \
		ft_putnbr.c\
		ft_puthex.c
OBJS = ${SRCS:.c=.o}

LIBC = ar rcs
CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

.c.o:
	${CC} ${CFLAGS} -c $< -o $@

${NAME}: ${OBJS}
	${LIBC} ${NAME} ${OBJS}

all: ${NAME}

clean:
	${RM} ${OBJS} ${BONUS_OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all
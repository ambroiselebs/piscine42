CC			=gcc
CFLAGS		=-Wall -Wextra -Werror
INCFOLDER	=includes/
SRCFOLDER	=srcs/
LIB			=libft.a

SRCS = ${SRCFOLDER}/ft_putchar.c \
		${SRCFOLDER}/ft_swap.c \
		${SRCFOLDER}/ft_putstr.c \
		${SRCFOLDER}/ft_strlen.c \
		${SRCFOLDER}/ft_strcmp.c

OBJS = ${SRCFOLDER:.c=.o}

all:	${LIB}

${LIB}: ${OBJS}
			ar rcs ${LIB} ${OBJS}

compile:
			${CC} ${CFLAGS} -I ${INCFOLDER} -c $< -o $@

clean:
			rm -f ${OBJS}

fclean: clean
			rm -f ${LIB}

re: fclean all

CC			= gcc
CFLAGS		= -Wall -Wextra -Werror
INCFOLDER	= includes/
SRCFOLDER	= srcs/
LIB			= libft.a

SRCS = ${SRCFOLDER}/ft_putchar.c \
		${SRCFOLDER}/ft_swap.c \
		${SRCFOLDER}/ft_putstr.c \
		${SRCFOLDER}/ft_strlen.c \
		${SRCFOLDER}/ft_strcmp.c

OBJS = ${SRCS:.c=.o}  # Correctly generate the list of object files from the source files

all:	${LIB}

${LIB}: ${OBJS}
			ar rcs ${LIB} ${OBJS}

# Pattern rule for building .o files from .c files
${SRCFOLDER}%.o: ${SRCFOLDER}%.c
			${CC} ${CFLAGS} -I ${INCFOLDER} -c $< -o $@

clean:
			rm -f ${OBJS}

fclean: clean
			rm -f ${LIB}

re: fclean all

.PHONY:	all clean fclean re

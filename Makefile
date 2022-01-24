NAME = libftprintf.a

LIBFT_DIR    = ./libft

LIBFT        = ${LIBFT_DIR}/libft.a

HEADER_DIR = ./

INCLUDES = -I${HEADER_DIR} -I${LIBFT_DIR}

SOURCE_DIR = ./srcs

SOURCES = $(SOURCE_DIR)/ft_printf.c
SOURCES += $(SOURCE_DIR)/utils.c
SOURCES += $(SOURCE_DIR)/count_bytes.c
SOURCES += $(SOURCE_DIR)/hex_conv.c
# SOURCES += $(SOURCE_DIR)/ft_printf_d.c
# SOURCES += $(SOURCE_DIR)/ft_printf_i.c
# SOURCES += $(SOURCE_DIR)/ft_printf_u.c
# SOURCES += $(SOURCE_DIR)/ft_printf_x.c

# RM = @rm -f
RM = rm -f

RANLIB = @ranlib

ARCHIVE = ar -rc

# CC = @clang
CC = gcc

CFLAGS = -Wall -Wextra -Werror

OBJECTS = ${SOURCES:.c=.o}

all: ${NAME}

$(NAME):	${OBJECTS} ${LIBFT}
		${ARCHIVE} ${NAME} ${OBJECTS}
		${RANLIB} ${NAME}

.c.o:
	${CC} ${CFLAGS} ${INCLUDES} -c $< -o ${<:.c=.o}

${LIBFT}:
			make -C ${LIBFT_DIR}
			cp ${LIBFT} ${NAME}

clean:
	make clean -C ${LIBFT_DIR}
	${RM}    ${OBJECTS}

fclean: clean
	make fclean -C ${LIBFT_DIR}
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
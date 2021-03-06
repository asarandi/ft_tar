NAME =	ft_tar

SRC =	add.c \
	blocks.c \
	checksum.c \
	create.c \
	extract.c \
	file_op.c \
	filename.c \
	fill1.c \
	fill2.c \
	header.c \
	main.c \
	main_extract.c \
	mem_op.c \
	modes.c \
	modtime.c \
	options.c \
	path.c \
	permissions.c \
	print.c \
	util.c \
	stdin.c

OBJ =	$(SRC:%.c=%.o)

CC =	cc
CFLAGS=	-Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -c $(SRC)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re:	fclean all

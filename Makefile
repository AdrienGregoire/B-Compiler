##
## EPITECH PROJECT, 2025
## Makefile
## File description:
## Makefile
##

SRC =	b_compiler.c \
		SRC/read_file.c

OBJ = $(SRC:.c=.o)

NAME = b_compiler

all: $(NAME)

$(NAME): $(OBJ)
	gcc -o $(NAME) $(OBJ) -Wall -Wextra

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: clean all

.PHONY = all clean fclean re

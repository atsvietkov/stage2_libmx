# It is not Makefile, it is bullshit.
# Don't forget repair this.

CC = clang
CFLAGS = -std=c11 -Wall -Wextra -Werror -Wpedantic

NAME = libmx.a

SRCD = src
INCD = inc
OBJD = obj

SRC = $(addprefix $(SRCD)/, mx_*.c)
OBJ = $(addprefix $(OBJD)/, *.o)

all: install

install:
	@mkdir -p $(OBJD)
	$(CC) $(CFLAGS) -c $(SRC) -I $(INCD)
	@mv *.o $(OBJD)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

uninstall:
	@rm -f $(NAME)
	@make clean

clean:
	@rm -rf $(OBJD)

reinstall:
	@make uninstall
	@make install
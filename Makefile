CC = clang
CFLAGS = -std=c11 -Wall -Wextra -Werror -Wpedantic

NAME = libmx.a

SRCD = src
INCD = inc
OBJD = obj

SRCC = $(addprefix $(SRCD)/, *.c)
OBJD = $(addprefix $(OBJD)/, *.o)

all: install

install:
	$(CC) $(CFLAGS) $(SRCC) -I $(INCD) -o $(OBJD)

uninstall:
	rm -rf $(NAME)

clean:
	rm -rf $(OBJD)

reinstall:
	clean
	uninstall
	install
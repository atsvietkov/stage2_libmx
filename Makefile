#	Final version of Makefile

.PHONY: all clean install uninstall

NAME = libmx.a
SRCD = src
INCD = inc
OBJD = obj

CC = clang
CFLAGS = -std=c11 $(addprefix -W, all extra error pedantic)

AR = ar
ARFLAGS = rcs

MV = mv
MK = mkdir -p
RM = rm -rf

SRC = $(wildcard $(SRCD)/*.c)
INC = $(wildcard $(INCD)/*.h)
OBJ = $(addprefix $(OBJD)/, $(notdir $(SRC:%.c=%.o)))
# OBJP = $(wildcard *.o)

all:	$(NAME)

$(NAME):	$(OBJ)
	@$(AR) $(ARFLAGS) $@ $^

$(OBJ): |	$(OBJD)

$(OBJD)/%.o: $(SRCD)/%.c $(INC)
	@$(CC) $(CFLAGS) -c $< -I $(INCD)
	@$(MV) *.o $(OBJD)

$(OBJD):
	@$(MK) $@

clean:
	@$(RM) $(OBJD)

uninstall: clean
	@$(RM) $(NAME)

reinstall: uninstall all

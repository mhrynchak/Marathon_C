NAME = minilibmx.a

CFLAGS = -std=c11 -Wall -Wextra -Werror -Wpedantic
СС = gcc

OBJD = obj
SRCD = src
INCD = inc

SRCC = mx_atoi mx_isdigit mx_isspace mx_printchar \
	   mx_printstr mx_printint mx_strlen mx_strcmp \
	   mx_strcpy

OBJS = $(addsuffix .o, $(addprefix $(addsuffix /, $(OBJD)), $(SRCC)))
SRCS = $(addsuffix .c, $(addprefix $(addsuffix /, $(SRCD)), $(SRCC)))

.PHONY: all MINILIBMX $(OBJD) uninstall clean reinstall

all: MINILIBMX

MINILIBMX: $(OBJD)
	@$(CC) $(CFLAGS) -I $(INCD) -c $(SRCS)
	@printf "compile obj file\n"
	@mv $(addsuffix .o, $(SRCC)) $(OBJD)
	@ar -rcs $(NAME) $(OBJS)
	@printf "create minilibmx\n"

$(OBJD):
	@mkdir -p obj

uninstall: clean
	@rm -f $(NAME)
	@printf "delete $(NAME) \n"

clean:
	@rm -rf $(OBJD)
	@printf "delete $(OBJD)\n"
	
reinstall: uninstall MINILIBMX
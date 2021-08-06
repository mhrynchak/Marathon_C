NAME = minilibmx.a

CFLAGS = -std=c11 -Wall -Wextra -Werror -Wpedantic
СС = gcc

OBJD = obj
SRCD = src
INCD = -I inc/

SRCC = $(foreach dir, $(SRCD), $(wildcard $(dir)/*.c))

OBJS = $(SRCC:src/%.c=$(OBJD)/%.o)

.PHONY: all MINILIBMX $(OBJD) uninstall clean reinstall

all: MINILIBMX

MINILIBMX: print $(OBJD) $(OBJS)
	@printf "compiled obj file\n"
	@ar -rcs $(NAME) $(OBJS)
	@printf "created minilibmx\n"

print:
	@echo $(SRCC)
	@echo $(OBJS)

$(OBJD)/%.o: $(SRCD)/%.c
	@$(CC) $(CFLAGS) $(INCD) -c $< -o $@
	@printf "compiled $<\n"

$(OBJD):
	@mkdir -p obj

uninstall: clean
	@rm -f $(NAME)
	@printf "deleted $(NAME) \n"

clean:
	@rm -rf $(OBJD)
	@printf "deleted $(OBJD)\n"
	
reinstall: uninstall MINILIBMX


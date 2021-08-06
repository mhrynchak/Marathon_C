NAME = mx_wc
CFLAGS = -std=c11 -Wall -Wextra -Werror -Wpedantic
СС = gcc

OBJD = obj
SRCD = src
INCD = -I inc/

SRCC = $(foreach dir, $(SRCD), $(wildcard $(dir)/*.c))

OBJS = $(SRCC:src/%.c=$(OBJD)/%.o)

.PHONY: all $(OBJD) install uninstall clean reinstall

all: install

install: $(OBJD) $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@printf "compiled successfully\n"

$(OBJD)/%.o: $(SRCD)/%.c
	@$(CC) $(CFLAGS) $(INCD) -c $< -o $@

$(OBJD):
	@mkdir -p obj

uninstall: clean
	@rm -f $(NAME)
	@printf "deleted $(NAME) \n"

clean:
	@rm -rf $(OBJD)
	@printf "deleted $(OBJD)\n"
	
reinstall: uninstall install

CC = gcc
CFLAGS = -std=c11 -Wall -Wextra -Werror -Wpedantic -lncursesw
DFLAGS = $(CFLAGS) -g3 -fsanitize=address,undefined
NAME = matrix_rain
SRC_DIR = src/

SRC = $(wildcard $(SRC_DIR)*.c)

all: $(NAME)

$(NAME):
	@$(CC) -Iinc $(SRC) $(CFLAGS) -o $(NAME)

debug:
	@$(CC) $(DFLAGS) -Iinc $(SRC) -o $(NAME)

uninstall:
	@rm -rf $(NAME)

reinstall: uninstall $(NAME)

.PHONY: debug $(NAME) reinstall uninstall

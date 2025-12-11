APP_NAME = bin/lowinventory

CC = gcc
CFLAGS = -I./include -Wall -Wextra -g

SRC = $(wildcard src/*.c)
OBJ = $(patsubst src/%.c, obj/%.o, $(SRC))

all: folders $(APP_NAME)

$(APP_NAME): $(OBJ)
	$(CC) $(OBJ) -o $@

obj/%.o: src/%.c
	$(CC) $(CFLAGS) -c $< -o $@

folders:
	@mkdir -p bin obj

clean:
	rm -rf bin obj

run: all
	./$(APP_NAME)
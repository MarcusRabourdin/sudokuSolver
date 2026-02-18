CC = gcc
CFLAGS = -std=c99 -Wall -Werror -Wvla -Wextra -pedantic -fsanitize=address -g
CPPFLAGS = -Isrc/
SRCS = src/sudoku.c
OBJS = $(SRCS:.c=.o)
TARGET = sudoku

.PHONY: all run clean

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(OBJS) -o $(TARGET) $(CFLAGS)

%.o: src/%.c
	$(CC) -c $< -o $@ $(CFLAGS) $(CPPFLAGS)

run: $(TARGET)
	./$(TARGET)

clean:
	$(RM) $(TARGET) $(OBJS)


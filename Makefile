
CC = gcc
CFLAGS = -Wall -Wextra -std=c11

COMMANDS = fileops netops processops storageops sysinfo textops

all: $(COMMANDS)

$(COMMANDS): main.c
	$(CC) $(CFLAGS) main.c -o $@

clean:
	rm -f $(COMMANDS)

.PHONY: all clean

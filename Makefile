
CC = gcc
CFLAGS = -Wall -Wextra -O2 -std=c11

PREFIX ?= $(HOME)/.local
BINDIR = $(PREFIX)/bin
DATADIR = $(PREFIX)/share/kryon-tools/data

COMMANDS = fileops netops processops storageops sysinfo textops

# Development build: data files are in ./data/
all: $(COMMANDS)

$(COMMANDS): main.c
	$(CC) $(CFLAGS) main.c -o $@

# Install executables and data files for the current user
install:
	mkdir -p "$(DESTDIR)$(BINDIR)" "$(DESTDIR)$(DATADIR)"
	for cmd in $(COMMANDS); do \
		$(CC) $(CFLAGS) -DDATA_DIR='"$(DATADIR)"' main.c -o "$(DESTDIR)$(BINDIR)/$$cmd" || exit 1; \
	done
	install -m 644 data/*.txt "$(DESTDIR)$(DATADIR)/"

# Remove the development executables
clean:
	rm -f $(COMMANDS)

# Uninstall the installed commands and their data
uninstall:
	rm -f $(addprefix $(DESTDIR)$(BINDIR)/,$(COMMANDS))
	rm -f $(DESTDIR)$(DATADIR)/*.txt
	-rmdir "$(DESTDIR)$(DATADIR)" "$(DESTDIR)$(PREFIX)/share/kryon-tools" 2>/dev/null

.PHONY: all install clean uninstall

CC = g++
CFLAGS = -Wall -g
FILES = PassGrid

all: $(FILES)

%: %.o
	$(CC) $(CFLAGS) $< -o $?
	rm -rf *.o

%.c: %.o
	$(CC) $(CFLAGS) -c $<

clean:
	rm -rf $(FILES)

.PHONY: all clean

CC = gcc
CFLAGS = -std=c11 -Wall -Wextra -Wpedantic -O2
TARGET = project

all: $(TARGET)

$(TARGET): main.c
	$(CC) $(CFLAGS) main.c -o $(TARGET)

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET)

CC = gcc
CFLAGS = -Wall -Wextra 
TARGET = program

# List of source files
SRC_FILES = experiment.c

# List of object files
OBJ_FILES = $(SRC_FILES:.c=.o)

# Main target
$(TARGET): $(OBJ_FILES)
	$(CC) $(CFLAGS) -o $@ $^

# Rule to compile C source files to object files
%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

# Rule to clean up generated files
clean:
	rm -f $(TARGET) $(OBJ_FILES)

# PHONY target to avoid conflicts with actual files named clean
.PHONY: clean

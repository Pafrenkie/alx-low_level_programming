#!/bin/bash

# Create a temporary directory to store object files
TMP_DIR=$(mktemp -d)

# Compile each .c file in the current directory into object files
for file in *.c
do
  gcc -Wall -Werror -Wextra -c "$file" -o "$TMP_DIR/${file%.c}.o"
done

# Create the static library
ar rcs liball.a "$TMP_DIR"/*.o

# Clean up the temporary directory
rm -r "$TMP_DIR"

# Exit with success status
exit 0

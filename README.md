# Libft

## Description

This project has been created as part of the 42 curriculum by mtorfs.

## Libft

Libft is a custom C library developed as part of the 42 curriculum. The goal of this project is to recreate standard C library functions and build reusable utilities for future C projects.

The library is compiled into a static library named `libft.a`. Function prototypes are declared in `libft.h`.

## Implemented Functions

### Character Classification

- `ft_isalpha` - Checks whether a character is an uppercase or lowercase alphabetic letter.
- `ft_isdigit` - Checks whether a character is a decimal digit (`0`–`9`).
- `ft_isalnum` - Checks whether a character is alphabetic or a decimal digit.
- `ft_isascii` - Checks whether a value belongs to the standard ASCII range (`0`–`127`).
- `ft_isprint` - Checks whether a character is printable, including spaces.

### String Manipulation

- `ft_strlen` - Calculates the length of a string, excluding the terminating null character.
- `ft_strlcpy` - Copies a string into a destination buffer while respecting its size limit and ensuring null termination when the buffer size permits.
- `ft_strlcat` - Appends a string to a destination string while respecting the specified buffer size.
- `ft_strchr` - Finds the first occurrence of a character in a string and returns its address.
- `ft_strrchr` - Finds the last occurrence of a character in a string and returns its address.
- `ft_strncmp` - Compares two strings lexicographically, examining at most a specified number of characters.
- `ft_strnstr` - Searches for the first occurrence of a substring within a string, limited to a specified number of characters.
- `ft_strdup` - Allocates memory and creates an independent copy of a string.
- `ft_substr` - Creates a newly allocated substring starting at a specified position, with a maximum length.
- `ft_strjoin` - Concatenates two strings into a newly allocated string containing both strings in order.
- `ft_strtrim` - Removes specified characters from the beginning and end of a string.
- `ft_split` - Splits a string into an array of newly allocated strings using a specified delimiter character.
- `ft_strmapi` - Creates a new string by applying a function to each character, passing its index and character as arguments.
- `ft_striteri` - Iterates through a string and applies a function to each character, passing its index and address so the character can be modified in place.

### Memory Manipulation

- `ft_memset` - Fills a specified number of bytes in a memory area with a given byte value.
- `ft_bzero` - Sets a specified number of bytes in a memory area to zero.
- `ft_memcpy` - Copies a specified number of bytes from one memory area to another. The memory areas must not overlap.
- `ft_memmove` - Copies bytes between memory areas while safely handling overlapping regions.
- `ft_memchr` - Searches for the first occurrence of a byte value within a specified memory area.
- `ft_memcmp` - Compares two memory areas byte by byte and returns the difference at the first differing byte.
- `ft_calloc` - Allocates memory for an array of elements and initializes all allocated bytes to zero.

### Character Conversion

- `ft_toupper` - Converts a lowercase alphabetic character to uppercase. Other characters remain unchanged.
- `ft_tolower` - Converts an uppercase alphabetic character to lowercase. Other characters remain unchanged.

### Numeric Conversion

- `ft_atoi` - Converts the initial portion of a string to an integer, skipping leading whitespace and handling an optional sign.
- `ft_itoa` - Converts an integer into a newly allocated string representing its decimal value, handling negative numbers and zero.

### File Descriptor Output

- `ft_putchar_fd` - Writes a single character to a specified file descriptor.
- `ft_putstr_fd` - Writes a string to a specified file descriptor without adding a newline.
- `ft_putendl_fd` - Writes a string to a specified file descriptor, followed by a newline.
- `ft_putnbr_fd` - Converts an integer to its decimal representation and writes it to a specified file descriptor.

### Linked List Manipulation

- `ft_lstnew` - Allocates and initializes a new linked-list node with the given content and a `NULL` next pointer.
- `ft_lstadd_front` - Adds a node to the beginning of a linked list and updates the head pointer.
- `ft_lstsize` - Counts and returns the number of nodes in a linked list.
- `ft_lstlast` - Returns a pointer to the last node in a linked list.
- `ft_lstadd_back` - Adds a node to the end of a linked list.
- `ft_lstdelone` - Deletes a single node, using a specified function to free its content without freeing the following nodes.
- `ft_lstclear` - Deletes all nodes in a linked list, frees their contents using a specified function, and sets the head pointer to `NULL`.
- `ft_lstiter` - Iterates through a linked list and applies a function to the content of each node.
- `ft_lstmap` - Creates a new linked list by applying a function to each node's content. If node allocation fails, it uses the supplied deletion function to clean up the partially created list.



## Instructions

### Requirements

* A C compiler (`cc`)
* GNU Make
* `ar`, the archive utility

### Project Structure

```text

Libft/
├── Makefile
├── README.md
├── libft.h
├── ft_atoi.c
├── ft_bzero.c
├── ft_calloc.c
├── ft_isalnum.c
├── ft_isalpha.c
├── ft_isascii.c
├── ft_isdigit.c
├── ft_isprint.c
├── ft_memchr.c
├── ft_memcmp.c
├── ft_memcpy.c
├── ft_memmove.c
├── ft_memset.c
├── ft_putchar_fd.c
├── ft_putendl_fd.c
├── ft_putnbr_fd.c
├── ft_putstr_fd.c
├── ft_split.c
├── ft_strdup.c
├── ft_strchr.c
├── ft_striteri.c
├── ft_strjoin.c
├── ft_strlcat.c
├── ft_strlcpy.c
├── ft_strlen.c
├── ft_strmapi.c
├── ft_strncmp.c
├── ft_strnstr.c
├── ft_strrchr.c
├── ft_strtrim.c
├── ft_substr.c
├── ft_tolower.c
├── ft_toupper.c
├── ft_lstnew.c
├── ft_lstadd_front.c
├── ft_lstsize.c
├── ft_lstlast.c
├── ft_lstadd_back.c
├── ft_lstdelone.c
├── ft_lstclear.c
├── ft_lstiter.c
└── ft_lstmap.c

```

## Compilation

### Compiler Flags

* `-Wall` - Enables common compiler warnings.
* `-Wextra` - Enables additional compiler warnings.
* `-Werror` - Treats warnings as errors.

The `SRCS` variable contains the list of source files to compile. The `OBJS` variable converts their `.c` extensions to `.o`, and `ar` combines the object files into the static library.

## Makefile Rules

* `make` - Builds the library if necessary.
* `make all` - Builds the library.
* `make clean` - Removes object files while keeping `libft.a`.
* `make fclean` - Removes object files and `libft.a`.
* `make re` - Cleans and rebuilds the library.

### Clean and Rebuild

```bash
make fclean
make re
```

### Verify the Library

```bash
ls -l libft.a
```

## Using the Library

### Create a Test Program

Create a file named `main.c` in the project directory.

```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
    char *str;
    int length;

    str = "Hello, 42!";
    length = ft_strlen(str);
    printf("Length: %d\n", length);
    return (0);
}
```

The `main()` function is the entry point of the executable. It calls `ft_strlen()` from the library and displays the result.

### Compile and Link

```bash
cc -Wall -Wextra -Werror main.c -L. -lft -o a.out
```

* `main.c` - The source file containing `main()`.
* `-L.` - Searches the current directory for libraries.
* `-lft` - Links against `libft.a`.
* `-o a.out` - Names the resulting executable `a.out`.

### Run the Program

```bash
./a.out
```

### Expected Output

```text
Length: 10
```

**Note:** Compiling `ft_strlen.c` alone or linking only `ft_strlen.o` does not create a complete executable because neither contains a `main()` function. The test program must call the library function.

## Memory Leaks and Valgrind

Valgrind is a debugging tool that can detect memory leaks, invalid memory accesses, and certain uses of uninitialized memory.

`libft.a` is a static library, not an executable. Valgrind must run on a test program that uses the library.

### Compile a Test Program

```bash
cc -Wall -Wextra -Werror -g main.c -L. -lft -o a.out
```

The `-g` flag includes debugging information that helps identify the source of errors.

### Run Valgrind

```bash
valgrind --leak-check=full --show-leak-kinds=all ./a.out
```

Valgrind checks the operations performed when `a.out` runs. To test different library functions, create test cases that call those functions with appropriate inputs.

### Test Memory-Allocating Functions

Functions such as `ft_calloc()` and `ft_strdup()` allocate memory. Test successful allocations, verify their contents, and release the memory with `free()` when it is no longer needed.

```c
#include "libft.h"
#include <stdlib.h>

int main(void)
{
    int *arr;

    arr = ft_calloc(5, sizeof(int));
    if (!arr)
        return (1);
    free(arr);
    return (0);
}
```

Compile and run this test using the same commands above.

Functions such as `ft_strlen()` do not normally allocate memory, so their tests focus primarily on correct results and valid memory access.

### Interpret the Results

* **Definitely lost** - Memory was allocated but is no longer reachable.
* **Indirectly lost** - Memory became unreachable because another lost allocation held a reference to it.
* **Still reachable** - Allocated memory remains reachable when the program exits.
* **Invalid read/write** - The program accessed memory outside a valid region.
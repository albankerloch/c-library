# C library

For pedagogical purposes, I recoded 43 C functions :
- memset
- bzero
- memcpy
- memccpy
- memmove
- memchr
- memcmp
- strlen
- isalpha
- isdigit
- isalnum
- isascii
- isprint
- toupper
- tolower
- strchr
- strrchr
- strncmp
- strlcpy
- strlcat
- strnstr
- atoi
- calloc
- strdup
- ft_substr
- ft_strjoin
- ft_strtrim
- ft_split
- ft_itoa
- ft_strmapi
- ft_putchar_fd
- ft_putstr_fd
- ft_putendl_fd
- ft_putnbr_fd
- ft_lstnew
- ft_lstadd_front
- ft_lstsize
- ft_lstlast
- ft_lstadd_back
- ft_lstdelone
- ft_lstclear
- ft_lstiter
- ft_lstmap

Features:
- Same output as the C functions
- No memory leak
- No more than 25 lines for each function

## Installation

Use this command in a terminal : 

```bash
make
```

(make and gcc needed)

## Usage

- Add #include "libft.h" in a C file (like main.c) :

```bash
gcc -I. -L. main.c -lft. 
./a.out
```


#### Author : Alban Kerloc'h
#### Category: Low-level
#### Tag: C

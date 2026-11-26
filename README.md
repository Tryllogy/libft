*This project has been created as part of the 42 curriculum by tchemin.*

# libft

My first C library: a re-implementation of common libc functions plus extra
string, output and linked-list helpers, built as a static library
(`libft.a`) reused in later 42 projects.

## Contents

**libc functions**
`ft_isalpha` `ft_isdigit` `ft_isalnum` `ft_isascii` `ft_isprint`
`ft_toupper` `ft_tolower` `ft_strlen` `ft_strlcpy` `ft_strlcat`
`ft_strchr` `ft_strrchr` `ft_strncmp` `ft_strnstr` `ft_strdup` `ft_atoi`
`ft_memset` `ft_bzero` `ft_memcpy` `ft_memmove` `ft_memchr` `ft_memcmp`
`ft_calloc`

**Additional functions**
`ft_substr` `ft_strjoin` `ft_strtrim` `ft_split` `ft_itoa` `ft_strmapi`
`ft_striteri` `ft_putchar_fd` `ft_putstr_fd` `ft_putendl_fd`
`ft_putnbr_fd`

**Linked lists (bonus)** on `t_list`
`ft_lstnew` `ft_lstadd_front` `ft_lstadd_back` `ft_lstsize` `ft_lstlast`
`ft_lstdelone` `ft_lstclear` `ft_lstiter` `ft_lstmap`

## Build

```bash
make        # builds libft.a (mandatory part)
make bonus  # adds the linked-list functions
make clean  # removes object files
make fclean # removes objects and the library
make re     # rebuilds from scratch
```

## Usage

```c
#include "libft.h"

int main(void)
{
    char **words = ft_split("hello libft world", ' ');

    for (int i = 0; words[i]; i++)
        ft_putendl_fd(words[i], 1);
    return (0);
}
```

```bash
cc -Wall -Wextra -Werror main.c -L. -lft
```

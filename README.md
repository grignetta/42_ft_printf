# ft_printf

## 📖 About
This project is part of the 42 curriculum.  
The goal is to recreate the C standard library function [`printf`](https://man7.org/linux/man-pages/man3/printf.3.html) with a limited set of features, while learning about variadic functions and formatted output.

`ft_printf` writes formatted output to the standard output, similar to the real `printf`.

---

## ✨ Features
- Handles the following **conversions**:
  - `%c` : character
  - `%s` : string
  - `%p` : pointer (in hexadecimal)
  - `%d` / `%i` : signed decimal integer
  - `%u` : unsigned decimal integer
  - `%x` / `%X` : hexadecimal integer (lowercase / uppercase)
  - `%%` : literal `%`
- Supports variable argument lists (`<stdarg.h>`).
- Returns the number of characters printed.

---

## 🛠️ Usage

### 1. Clone the repository
```bash
git clone --recurse-submodules git@github.com:grignetta/42_ft_printf.git printf
```
### 2. Build the library

Run **make** to compile both *libft* and *ft_printf*.
This will create a static library called libftprintf.a

### 3. Write your own program

Create a simple file (e.g. main.c) that uses ft_printf:
```bash
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello %s!\n", "world");
    ft_printf("Number: %d, Hex: %x, Pointer: %p\n", 42, 42, (void*)42);
    return (0);
}
```

### 4. Compile your program with ft_printf
```bash
cc main.c libftprintf.a -o my_program
```

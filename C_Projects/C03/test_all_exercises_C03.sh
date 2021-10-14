#!/bin/bash

echo ====ex00====
gcc -Wall -Wextra -Werror ex00/ft_strcmp.c /home/coder/C_Projects/C03/ex00/test-ex00.c -o ex00/ex00.exe && ./ex00/ex00.exe
echo ====ex01====
gcc -Wall -Wextra -Werror ex01/ft_strncmp.c /home/coder/C_Projects/C03/ex01/test-ex01.c -o ex01/ex01.exe && ./ex01/ex01.exe
echo ====ex02====
gcc -Wall -Wextra -Werror ex02/ft_strcat.c /home/coder/C_Projects/C03/ex02/test-ex02.c -o ex02/ex02.exe && ./ex02/ex02.exe
echo ====ex03====
gcc -Wall -Wextra -Werror ex03/ft_strncat.c /home/coder/C_Projects/C03/ex03/test-ex03.c -o ex03/ex03.exe && ./ex03/ex03.exe
echo ====ex04====
gcc -Wall -Wextra -Werror ex04/ft_strstr.c /home/coder/C_Projects/C03/ex04/test-ex04.c -o ex04/ex04.exe && ./ex04/ex04.exe
echo ====ex05====
gcc -Wall -Wextra -Werror ex05/ft_strlcat.c /home/coder/C_Projects/C03/ex05/test-ex05.c -o ex05/ex05.exe && ./ex05/ex05.exe

norminette -R CheckForbiddenSourceHeader ex*/ft*.c
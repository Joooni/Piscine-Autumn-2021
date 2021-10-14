#!/bin/sh

echo ====ex00====
gcc -Wall -Werror -Wextra ex00/ft_strcpy.c /home/coder/C_Projects/C02/ex00/test-ex00.c -o ex00/ex00.exe && ./ex00/ex00.exe
echo
echo ====ex01====
gcc -Wall -Werror -Wextra ex01/ft_strncpy.c /home/coder/C_Projects/C02/ex01/test-ex01.c -o ex01/ex01.exe && ./ex01/ex01.exe
echo ====ex02====
gcc -Wall -Werror -Wextra ex02/ft_str_is_alpha.c /home/coder/C_Projects/C02/ex02/test-ex02.c -o ex02/ex02.exe && ./ex02/ex02.exe
echo ====ex03====
gcc -Wall -Werror -Wextra ex03/ft_str_is_numeric.c /home/coder/C_Projects/C02/ex03/test-ex03.c -o ex03/ex03.exe && ./ex03/ex03.exe
echo ====ex04====
gcc -Wall -Werror -Wextra ex04/ft_str_is_lowercase.c /home/coder/C_Projects/C02/ex04/test-ex04.c -o ex04/ex04.exe && ./ex04/ex04.exe
echo ====ex05====
gcc -Wall -Werror -Wextra ex05/ft_str_is_uppercase.c /home/coder/C_Projects/C02/ex05/test-ex05.c -o ex05/ex05.exe && ./ex05/ex05.exe
echo ====ex06====
gcc -Wall -Werror -Wextra ex06/ft_str_is_printable.c /home/coder/C_Projects/C02/ex06/test-ex06.c -o ex06/ex06.exe && ./ex06/ex06.exe
echo ====ex07====
gcc -Wall -Werror -Wextra ex07/ft_strupcase.c /home/coder/C_Projects/C02/ex07/test-ex07.c -o ex07/ex07.exe && ./ex07/ex07.exe
echo ====ex08====
gcc -Wall -Werror -Wextra ex08/ft_strlowcase.c /home/coder/C_Projects/C02/ex08/test-ex08.c -o ex08/ex08.exe && ./ex08/ex08.exe
echo ====ex09====
gcc -Wall -Werror -Wextra ex09/ft_strcapitalize.c /home/coder/C_Projects/C02/ex09/test-ex09.c -o ex09/ex09.exe && ./ex09/ex09.exe
echo ====ex10====
gcc -Wall -Werror -Wextra ex10/ft_strlcpy.c /home/coder/C_Projects/C02/ex10/test-ex10.c -o ex10/ex10.exe && ./ex10/ex10.exe
echo ====ex11====
gcc -Wall -Werror -Wextra ex11/ft_putstr_non_printable.c /home/coder/C_Projects/C02/ex11/test-ex11.c -o ex11/ex11.exe && ./ex11/ex11.exe

echo
norminette -R CheckForbiddenSourceHeader ex*/ft*.c 